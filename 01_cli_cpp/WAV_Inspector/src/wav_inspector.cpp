#include <iostream>
#include <fstream>
#include <optional>
#include <string>

struct WavHeader {
    uint32_t sampleRate{}, dataSize{};
    uint16_t numChannels{}, bitsPerSample{};
};

static std::optional<WavHeader> parseWav(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return std::nullopt;
    char riff[4]; f.read(riff, 4);
    if (std::string(riff,4) != "RIFF") return std::nullopt;
    f.seekg(22);
    WavHeader h{};
    f.read(reinterpret_cast<char*>(&h.numChannels), 2);
    f.read(reinterpret_cast<char*>(&h.sampleRate), 4);
    f.seekg(34);
    f.read(reinterpret_cast<char*>(&h.bitsPerSample), 2);
    while (f.read(riff, 4)) {
        uint32_t sz; f.read(reinterpret_cast<char*>(&sz), 4);
        if (std::string(riff,4) == "data") { h.dataSize = sz; break; }
        f.seekg(sz, std::ios::cur);
    }
    return h;
}

int main(int argc, char** argv) {
    if (argc < 2) { std::cout << "Uso: wav_inspector <archivo.wav>\n"; return 1; }
    auto h = parseWav(argv[1]);
    if (!h) { std::cerr << "Error: WAV no válido.\n"; return 2; }
    double dur = static_cast<double>(h->dataSize) / (h->sampleRate * h->numChannels * (h->bitsPerSample/8.0));
    std::cout << "SR: " << h->sampleRate << " Hz\nCanales: " << h->numChannels << "\nDuración: " << dur << " s\n";
    return 0;
}
