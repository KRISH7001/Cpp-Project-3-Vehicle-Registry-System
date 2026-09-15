📁 Project Overview
This project contains a C++ program that demonstrates fundamental object-oriented programming concepts such as classes, objects, encapsulation, abstraction, and static members. The program included is:  
CPP

Railway Reservation System – Lets you add train records, view all registered trains, and search for specific train details by train number.  
CPP

📌 Program Included
1. Railway Reservation System
File: Railway_Reservation_System.cpp

  
CPP

This program lets you manage a simple in-memory train reservation system through an interactive menu. It uses:  
CPP

A Train class with attributes (train number, train name, source, destination, train time) encapsulated as private members  
CPP

A static member trainCount to keep track of total train instances created and destroyed  
CPP

Default and parameterized constructors, along with a destructor to manage object creation and lifecycle  
CPP

Getters and setters for all train attributes  
CPP

A RailwaySystem class that manages an array of Train objects (trains[100]), facilitating record addition, full listings, and search operations  
CPP

A menu-driven interface using switch / do-while control structures  
CPP

Input handling using cin and cin.getline with character buffers  
CPP

The main menu looks like this:  
CPP

Plaintext
--- Railway Reservation System Menu ---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
The system initializes by asking the user to populate 3 initial train records before launching the main menu:  
CPP

C++
// Encapsulated data input called on a Train instance:
trains[totalTrains].inputTrainDetails();
Train stores core route details including source, destination, and departure time.  
CPP

RailwaySystem encapsulates database operations, enforcing capacity limits (up to 100 trains).  
CPP

Static count tracking increments on creation and decrements on destruction.  
CPP

🛠️ Requirements
You can run this program using:

GCC / G++ Compiler

Visual Studio Code or any standard C++ IDE

▶️ How to Run
Using G++:

🎯 Learning Objectives
This project helps practice:

Basic C++ syntax

Classes, objects, and encapsulation  
CPP

Static members and static member functions  
CPP

Default and parameterized constructors and destructors  
CPP

Getters and setters  
CPP

Object arrays and state management within a controller class  
CPP

Console input and output using cin, cout, and string functions (strcpy, getline)  
CPP

Control flow structures (switch, do-while, for)  
CPP

Menu-driven program design  
CPP

Basic problem solving

📂 Project Structure
Plaintext
Railway-Reservation-System/
│
├── README.md
└── Railway_Reservation_System.cpp
🔹 Project Explanation Video
👉 Explanation Video: [Add your video link here]

👨‍💻 Author
KRISH SAPARIYA 
