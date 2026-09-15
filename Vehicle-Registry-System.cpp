#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Vehicle {
private:
    int vehicleID;
    string manufacturer;
    string model;
    int year;
 
    static int totalVehicles;   
 
public:
    Vehicle() {
        vehicleID = 0;
        manufacturer = "Unknown";
        model = "Unknown";
        year = 0;
        totalVehicles++;
    }
 
    Vehicle(int id, string manu, string mdl, int yr) {
        vehicleID = id;
        manufacturer = manu;
        model = mdl;
        year = yr;
        totalVehicles++;
    }
 
    virtual ~Vehicle() {
        totalVehicles--;
    }
 
    int getVehicleID() const { return vehicleID; }
    string getManufacturer() const { return manufacturer; }
    string getModel() const { return model; }
    int getYear() const { return year; }
 
    void setVehicleID(int id) { vehicleID = id; }
    void setManufacturer(string manu) { manufacturer = manu; }
    void setModel(string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }
 
    static int getTotalVehicles() { return totalVehicles; }
 
    virtual void display() const {
        cout << "Vehicle ID   : " << vehicleID << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model        : " << model << endl;
        cout << "Year         : " << year << endl;
    }
};
 
// Initialize static member
int Vehicle::totalVehicles = 0;

class Car : public Vehicle {
private:
    string fuelType;
 
public:
    Car() : Vehicle() {
        fuelType = "Petrol";
    }
 
    Car(int id, string manu, string mdl, int yr, string fuel)
        : Vehicle(id, manu, mdl, yr) {
        fuelType = fuel;
    }
 
    virtual ~Car() {}
 
    string getFuelType() const { return fuelType; }
    void setFuelType(string fuel) { fuelType = fuel; }
 
    void display() const override {
        Vehicle::display();
        cout << "Fuel Type    : " << fuelType << endl;
    }
};
 
class ElectricCar : public Car {
private:
    double batteryCapacity; 
 
public:
    ElectricCar() : Car() {
        batteryCapacity = 0.0;
        setFuelType("Electric");
    }
 
    ElectricCar(int id, string manu, string mdl, int yr, double battery)
        : Car(id, manu, mdl, yr, "Electric") {
        batteryCapacity = battery;
    }
 
    virtual ~ElectricCar() {}
 
    double getBatteryCapacity() const { return batteryCapacity; }
    void setBatteryCapacity(double battery) { batteryCapacity = battery; }
 
    void display() const override {
        Car::display();
        cout << "Battery (kWh): " << batteryCapacity << endl;
    }
};

class Aircraft {
private:
    double flightRange; // in km
 
public:
    Aircraft() { flightRange = 0.0; }
    Aircraft(double range) { flightRange = range; }
    virtual ~Aircraft() {}
 
    double getFlightRange() const { return flightRange; }
    void setFlightRange(double range) { flightRange = range; }
 
    virtual void displayAircraftInfo() const {
        cout << "Flight Range : " << flightRange << " km" << endl;
    }
};

class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar() : Car(), Aircraft() {}
 
    FlyingCar(int id, string manu, string mdl, int yr, string fuel, double range)
        : Car(id, manu, mdl, yr, fuel), Aircraft(range) {}
 
    ~FlyingCar() {}
 
    void display() const override {
        Car::display();
        displayAircraftInfo();
    }
};

class SportsCar : public ElectricCar {
private:
    double topSpeed; 
 
public:
    SportsCar() : ElectricCar() {
        topSpeed = 0.0;
    }
 
    SportsCar(int id, string manu, string mdl, int yr, double battery, double speed)
        : ElectricCar(id, manu, mdl, yr, battery) {
        topSpeed = speed;
    }
 
    ~SportsCar() {}
 
    double getTopSpeed() const { return topSpeed; }
    void setTopSpeed(double speed) { topSpeed = speed; }
 
    void display() const override {
        ElectricCar::display();
        cout << "Top Speed    : " << topSpeed << " km/h" << endl;
    }
};
 
class Sedan : public Car {
public:
    Sedan() : Car() {}
    Sedan(int id, string manu, string mdl, int yr, string fuel)
        : Car(id, manu, mdl, yr, fuel) {}
    ~Sedan() {}
 
    void display() const override {
        cout << "Vehicle Type : Sedan" << endl;
        Car::display();
    }
};

class SUV : public Car {
private:
    bool fourWheelDrive;
 
public:
    SUV() : Car() { fourWheelDrive = true; }
    SUV(int id, string manu, string mdl, int yr, string fuel, bool fwd)
        : Car(id, manu, mdl, yr, fuel) {
        fourWheelDrive = fwd;
    }
    ~SUV() {}
 
    bool getFourWheelDrive() const { return fourWheelDrive; }
    void setFourWheelDrive(bool fwd) { fourWheelDrive = fwd; }
 
    void display() const override {
        cout << "Vehicle Type : SUV" << endl;
        Car::display();
        cout << "4WD          : " << (fourWheelDrive ? "Yes" : "No") << endl;
    }
};

class VehicleRegistry {
private:
    static const int MAX_VEHICLES = 100;
    Vehicle* vehicles[MAX_VEHICLES];
    int count;
 
public:
    VehicleRegistry() { count = 0; }
 
    ~VehicleRegistry() {
        
        for (int i = 0; i < count; i++) {
            delete vehicles[i];
        }
    }
 
    bool addVehicle(Vehicle* v) {
        if (count >= MAX_VEHICLES) {
            cout << "Registry is full! Cannot add more vehicles.\n";
            return false;
        }
        vehicles[count] = v;
        count++;
        return true;
    }

    void displayAll() const {
        if (count == 0) {
            cout << "No vehicles registered yet.\n";
            return;
        }
        cout << "\n========== ALL REGISTERED VEHICLES ==========\n";
        for (int i = 0; i < count; i++) {
            cout << "\n--- Vehicle #" << (i + 1) << " ---\n";
            vehicles[i]->display();
        }
        cout << "===============================================\n";
    }
 
    void searchById(int id) const {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getVehicleID() == id) {
                cout << "\nVehicle Found:\n";
                vehicles[i]->display();
                return;
            }
        }
        cout << "\nNo vehicle found with ID: " << id << endl;
    }
 
    int getCount() const { return count; }
};

void addVehicleMenu(VehicleRegistry &registry) {
    int typeChoice;
    int id, year;
    string manufacturer, model, fuelType;
 
    cout << "\nSelect Vehicle Type to Add:\n";
    cout << "1. Car\n";
    cout << "2. ElectricCar\n";
    cout << "3. FlyingCar\n";
    cout << "4. SportsCar\n";
    cout << "5. Sedan\n";
    cout << "6. SUV\n";
    cout << "Enter choice: ";
    cin >> typeChoice;
 
    cout << "Enter Vehicle ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter Model: ";
    getline(cin, model);
    cout << "Enter Year: ";
    cin >> year;
 
    switch (typeChoice) {
        case 1: {
            cout << "Enter Fuel Type: ";
            cin.ignore();
            getline(cin, fuelType);
            registry.addVehicle(new Car(id, manufacturer, model, year, fuelType));
            break;
        }
        case 2: {
            double battery;
            cout << "Enter Battery Capacity (kWh): ";
            cin >> battery;
            registry.addVehicle(new ElectricCar(id, manufacturer, model, year, battery));
            break;
        }
        case 3: {
            double range;
            cout << "Enter Fuel Type: ";
            cin.ignore();
            getline(cin, fuelType);
            cout << "Enter Flight Range (km): ";
            cin >> range;
            registry.addVehicle(new FlyingCar(id, manufacturer, model, year, fuelType, range));
            break;
        }
        case 4: {
            double battery, speed;
            cout << "Enter Battery Capacity (kWh): ";
            cin >> battery;
            cout << "Enter Top Speed (km/h): ";
            cin >> speed;
            registry.addVehicle(new SportsCar(id, manufacturer, model, year, battery, speed));
            break;
        }
        case 5: {
            cout << "Enter Fuel Type: ";
            cin.ignore();
            getline(cin, fuelType);
            registry.addVehicle(new Sedan(id, manufacturer, model, year, fuelType));
            break;
        }
        case 6: {
            char fwdChoice;
            cout << "Enter Fuel Type: ";
            cin.ignore();
            getline(cin, fuelType);
            cout << "Four Wheel Drive? (y/n): ";
            cin >> fwdChoice;
            bool fwd = (fwdChoice == 'y' || fwdChoice == 'Y');
            registry.addVehicle(new SUV(id, manufacturer, model, year, fuelType, fwd));
            break;
        }
        default:
            cout << "Invalid choice! Vehicle not added.\n";
            return;
    }
    cout << "\nVehicle added successfully!\n";
}
 
int main() {
    VehicleRegistry registry;
    int choice;
 
    cout << "=================================================\n";
    cout << "        VEHICLE REGISTRY SYSTEM (C++)\n";
    cout << "=================================================\n";
 
    do {
        cout << "\n---------------- MAIN MENU ----------------\n";
        cout << "1. Add a Vehicle\n";
        cout << "2. View All Vehicles\n";
        cout << "3. Search Vehicle by ID\n";
        cout << "4. Show Total Vehicle Count (static member)\n";
        cout << "5. Exit\n";
        cout << "---------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
 
        switch (choice) {
            case 1:
                addVehicleMenu(registry);
                break;
            case 2:
                registry.displayAll();
                break;
            case 3: {
                int id;
                cout << "Enter Vehicle ID to search: ";
                cin >> id;
                registry.searchById(id);
                break;
            }
            case 4:
                cout << "\nTotal Vehicles in system (static counter): "
                     << Vehicle::getTotalVehicles() << endl;
                break;
            case 5:
                cout << "\nExiting Vehicle Registry System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 5);
 
    return 0;
}