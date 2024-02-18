#include<iostream>
#include<string>
using namespace std;
class Vehicle {
private:
    string make;
    string model;
    int year;
    int mileage;
public:
    Vehicle(string mk,string mdl,int yr,int ml):make(mk),model(mdl),year(yr),mileage(ml){}
    void setMake(string mk) {
        make = mk;
    }
    void setModel(string mdl) {
        model = mdl;
    }
    void setYear(int yr) {
        year = yr;
    }
    void setMileage(int ml) {
        mileage = ml;
    }
    void displayVehicleInfo() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " miles" << endl;
    }
    bool needsServicing() {
        return mileage >= 10000;
    }
};
int main() {
    Vehicle myVehicle("Toyota", "Corolla", 2024, 9000);
    cout << "Initial Vehicle Information:" << endl;
    myVehicle.displayVehicleInfo();
    if (myVehicle.needsServicing()) {
        cout << "Car needs servicing." << endl;
    } else {
        cout << "Car does not need servicing." << endl;
    }
    myVehicle.setModel("Camry");
    myVehicle.setYear(2023);
    myVehicle.setMileage(12000);
    cout << "\nUpdated Vehicle Information:" << endl;
    myVehicle.displayVehicleInfo();
    if (myVehicle.needsServicing()) {
        cout << "Car needs servicing." << endl;
    } else {
        cout << "Car does not need servicing." << endl;
    }
    return 0;
}
