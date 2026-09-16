🚗 Vehicle Registry System

A C++ console application that demonstrates core and advanced object-oriented programming concepts — encapsulation, inheritance (single, multilevel, and multiple), polymorphism, and static members — through a menu-driven vehicle registration system.

📁 Project Overview

This project contains a single C++ program that lets you register different kinds of vehicles, view all registered vehicles, and search for a vehicle by its ID. It's built around a small class hierarchy rooted in an abstract-ish Vehicle base class, with derived classes for cars, electric cars, sports cars, sedans, SUVs, and even flying cars.

File Vehicle-Registry-System.cpp Language C++ Type Console / menu-driven application ✨ Features Encapsulation — all class fields are private, accessed only through public getters and setters Constructors & destructors — default and parameterized constructors, plus a virtual destructor for safe polymorphic cleanup Static members — a static totalVehicles counter shared across all Vehicle objects, incremented on construction and decremented on destruction Polymorphism — a virtual display() function overridden by every derived class, called through base-class pointers Inheritance — single, multilevel, and multiple inheritance all appear in the same hierarchy Dynamic memory management — vehicles are allocated with new and stored as Vehicle*, cleaned up automatically by the registry's destructor Menu-driven interface — built with switch and do-while loops 🧬 Class Hierarchy Vehicle (base class) ├── Car : public Vehicle │ ├── ElectricCar : public Car │ │ └── SportsCar : public ElectricCar (multilevel inheritance) │ ├── Sedan : public Car │ └── SUV : public Car └── Aircraft (independent base class) └── FlyingCar : public Car, public Aircraft (multiple inheritance) Class Inherits From Key Members Vehicle — vehicleID, manufacturer, model, year, static totalVehicles Car Vehicle fuelType ElectricCar Car batteryCapacity SportsCar ElectricCar topSpeed Sedan Car — (adds a "Sedan" type label on display) SUV Car fourWheelDrive Aircraft — flightRange FlyingCar Car, Aircraft combines car and aircraft data

VehicleRegistry owns a fixed-size array of Vehicle* (vehicles[100]) and is responsible for adding, displaying, searching, and ultimately delete-ing every vehicle it holds.

🖥️ How It Works

Each Vehicle object knows how to describe itself. Derived classes override display() and call up into their parent's display() to build the full description:

cpp // Called on each Vehicle pointer stored in the VehicleRegistry array: vehicles[i]->display(); addVehicle() — stores a new vehicle pointer in the next free slot, up to a maximum of 100 displayAll() — loops through every stored vehicle and prints its details via the virtual display() function searchById() — performs a linear scan, comparing each vehicle's ID against the one entered getTotalVehicles() — reports the live count of allocated Vehicle objects via the static counter Main Menu

Add a Vehicle
View All Vehicles
Search Vehicle by ID
Show Total Vehicle Count (static member)
Exit Add Vehicle Sub-Menu
Car
ElectricCar
FlyingCar
SportsCar
Sedan
SUV 🛠️ Requirements A C++ compiler, e.g. GCC / G++ Any editor or IDE — Visual Studio Code works well ▶️ How to Run
Using G++:

bash g++ Vehicle-Registry-System.cpp -o vehicle_registry ./vehicle_registry 🎯 Learning Objectives

This project is good practice for:

Basic C++ syntax Classes, objects, and encapsulation Constructors and destructors (including virtual destructors) Static class members Getters and setters Single, multilevel, and multiple inheritance Runtime polymorphism with virtual functions Arrays of base-class pointers Dynamic memory allocation with new / delete Input and output using cin and cout Conditional statements and loops (switch, do-while, for) Menu-driven program design Basic problem solving 📂 Project Structure Vehicle-Registry-System-Project/ │ ├── README.md └── Vehicle-Registry-System.cpp
