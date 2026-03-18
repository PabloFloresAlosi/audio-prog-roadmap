# 01 — Variables, Types & Initialization

## 🎯 Goal

Understand how to declare, initialize, and use basic C++ data types, and how they represent gameplay and audio-related values.


## 📚 Topics Covered

* `int`
* `float`
* `bool`
* `std::string`
* Variable declaration
* Initialization vs assignment


## 🔗 Resources

* https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/
* https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
* https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/
* https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/


## 💻 Practice

Instead of generic examples, variables are used to represent **gameplay and audio-related data**:

* Sound volume (`float`)
* Playback state (`bool`)
* Audio event name (`std::string`)
* Number of active sounds (`int`)

Example concepts explored:

* Initializing variables at declaration
* Updating values dynamically
* Printing values for debugging purposes


## 🧠 Key Takeaways

* Initialization is preferred over delayed assignment
* Choosing the correct type improves clarity and avoids bugs
* `std::string` is essential for labels, debug info, and event naming
* Variables represent state — and state drives gameplay and audio


## 🎮 Relevance to Unreal Engine

These concepts directly map to Unreal systems:

* `float` → volume, pitch, distance
* `bool` → playback state, triggers
* `std::string` → debug labels (→ `FString` in Unreal)
* `int` → counters, IDs, array indexing

Understanding this layer is critical before working with:

* `UCLASS`
* `UPROPERTY`
* Gameplay variables exposed to Blueprints
