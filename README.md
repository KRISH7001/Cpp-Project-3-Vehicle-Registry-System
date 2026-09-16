📁 Project Overview This project contains a simple C++ program that demonstrates object-oriented programming concepts such as classes, inheritance, polymorphism, multiple inheritance, and static members. The program included is:

Vehicle Registry System – Register, store, search, and display different types of vehicles through a menu-driven console interface.

📌 Program Included

Vehicle Registry System File: Vehicle-Registry-System.cpp This program lets the user register different types of vehicles (Car, ElectricCar, FlyingCar, SportsCar, Sedan, SUV), view all registered vehicles, search by ID, and see a running total vehicle count.
It uses:
A Vehicle base class with derived classes forming a multi-level inheritance chain Multiple inheritance (FlyingCar inherits from both Car and Aircraft) Virtual functions and override for polymorphic display() behavior A static member (totalVehicles) shared across all Vehicle instances A VehicleRegistry class that stores Vehicle* pointers and manages their lifetime A menu-driven interface using switch statements User input using cin and getline

The class hierarchy is:

Vehicle
└── Car
    ├── ElectricCar
    │   └── SportsCar
    ├── Sedan
    ├── SUV
    └── FlyingCar (also inherits Aircraft)

Aircraft
└── FlyingCar

Each vehicle's total count is tracked using a static member:

totalVehicles++ // incremented in every constructor totalVehicles-- // decremented in the destructor

🛠️ Requirements You can run this program using:

GCC / G++ Compiler
Visual Studio Code

▶️ How to Run Using G++

g++ -o Vehicle-Registry-System Vehicle-Registry-System.cpp ./Vehicle-Registry-System

🎯 Learning Objectives This project helps practice:

Basic C++ syntax
Classes, constructors, and destructors
Single, multi-level, and multiple inheritance
Virtual functions and runtime polymorphism
Static class members
Dynamic memory management with pointers (new / delete)
Input and output using cin, cout, and getline
Menu-driven program design
Basic problem solving

📂 Project Structure

Vehicle-Registry-System-Project/
│
├── README.md
└── Vehicle-Registry-System.cpp

🔹 Project Explanation Video

👉 Explanation Video: Add your video link here

👨‍💻 Author Add your name here
