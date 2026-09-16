# 🚗 C++ Project – Vehicle Registry System

## 📁 Project Overview

This project contains a simple **C++ program** that demonstrates object-oriented programming concepts such as **classes, inheritance, polymorphism, multiple inheritance, and static members**.

The program included is:

* **Vehicle Registry System** – Register, store, search, and display different types of vehicles through a menu-driven console interface.

---

## 📌 Program Included

### Vehicle Registry System

**File:** `Vehicle-Registry-System.cpp`

This program allows the user to:

* Register different types of vehicles
* View all registered vehicles
* Search for a vehicle by ID
* Display the total number of registered vehicles
* Use a menu-driven console interface

The vehicle types included are:

* Car
* ElectricCar
* FlyingCar
* SportsCar
* Sedan
* SUV

### 🔧 C++ Concepts Used

The program demonstrates:

* A `Vehicle` base class with derived classes
* Multi-level inheritance
* Multiple inheritance
* Virtual functions and `override` for polymorphism
* Static class members
* Dynamic memory management
* A `VehicleRegistry` class for managing vehicle objects
* Menu-driven programming using `switch`
* User input using `cin` and `getline`

---

## 🏗️ Class Hierarchy

```text
Vehicle
│
└── Car
    ├── ElectricCar
    │   └── SportsCar
    ├── Sedan
    ├── SUV
    └── FlyingCar
        └── also inherits Aircraft

Aircraft
│
└── FlyingCar
```

---

## 📊 Static Vehicle Counter

Each vehicle's total count is tracked using the static member:

```cpp
totalVehicles++;
```

The counter is incremented in every constructor and decremented in the destructor:

```cpp
totalVehicles++;
totalVehicles--;
```

This demonstrates the use of **static data members shared across all objects of the `Vehicle` class**.

---

## 🛠️ Requirements

You can run this program using:

* **GCC / G++ Compiler**
* **Visual Studio Code**

---

## ▶️ How to Run Using G++

### Step 1: Open the project folder

Open the folder containing:

```text
Vehicle-Registry-System.cpp
```

### Step 2: Open the terminal

Run:

```bash
g++ -o Vehicle-Registry-System Vehicle-Registry-System.cpp
```

### Step 3: Run the program

On Windows:

```bash
Vehicle-Registry-System.exe
```

On Linux/macOS:

```bash
./Vehicle-Registry-System
```

---

## 🎯 Learning Objectives

This project helps practice:

* Basic C++ syntax
* Classes, constructors, and destructors
* Single and multi-level inheritance
* Multiple inheritance
* Virtual functions
* Runtime polymorphism
* Static class members
* Dynamic memory management using `new` and `delete`
* Input and output using `cin`, `cout`, and `getline`
* Menu-driven program design
* Basic problem solving

---

## 📂 Project Structure

```text
Vehicle-Registry-System-Project/
│
├── README.md
└── Vehicle-Registry-System.cpp
```

---

## 🔹 Project Explanation Video

🎥 **Explanation Video:**
Add your video link here.

---

## 👨‍💻 Author

KRISH SAPARIYA
