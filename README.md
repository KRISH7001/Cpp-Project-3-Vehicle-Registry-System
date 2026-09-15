📁 Project OverviewThis project contains a C++ program that demonstrates fundamental object-oriented programming concepts such as classes, objects, encapsulation, abstraction, and static members. The program included is:  Railway Reservation System – Lets you add train records, view all registered trains, and search for specific train details by train number.  📌 Program Included1. Railway Reservation SystemFile: Railway_Reservation_System.cpp  This program lets you manage a simple in-memory train reservation system through an interactive menu. It uses:  A Train class with attributes (train number, train name, source, destination, train time) encapsulated as private members  A static member trainCount to keep track of total train instances created and destroyed  Default and parameterized constructors, along with a destructor to manage object creation and lifecycle  Getters and setters for all train attributes  A RailwaySystem class that manages an array of Train objects (trains[100]), facilitating record addition, full listings, and search operations  A menu-driven interface using switch / do-while control structures  Input handling using cin and cin.getline with character buffers  The main menu looks like this:  --- Railway Reservation System Menu ---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
The system initializes by asking the user to populate 3 initial train records before launching the main menu:  C++// Encapsulated data input called on a Train instance:
trains[totalTrains].inputTrainDetails();
Train stores core route details including source, destination, and departure time.  RailwaySystem encapsulates database operations, enforcing capacity limits (up to 100 trains).  Static count tracking increments on creation and decrements on destruction.  🛠️ RequirementsYou can run this program using:GCC / G++ CompilerVisual Studio Code or any standard C++ IDE▶️ How to RunUsing G++:Bashg++ -o railway-system Railway_Reservation_System.cpp
./railway-system
🎯 Learning ObjectivesThis project helps practice:Basic C++ syntaxClasses, objects, and encapsulation  Static members and static member functions  Default and parameterized constructors and destructors  Getters and setters  Object arrays and state management within a controller class  Console input and output using cin, cout, and string functions (strcpy, getline)  Control flow structures (switch, do-while, for)  Menu-driven program design  Basic problem solving📂 Project StructureRailway-Reservation-System/
│
├── README.md
└── Railway_Reservation_System.cpp
🔹 Project Explanation Video👉 Explanation Video: [Add your video link here]👨‍💻 Author[Add Your Name Here]
