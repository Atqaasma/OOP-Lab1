#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class House {
private:
    string address;
    Person* residents[7]; //maximum no. of residents= 7
public:
    House(string addr) : address(addr) {
        for (int i = 0; i < 5; ++i) {
            residents[i] = nullptr;
        }
    }
    void addResident(Person* person) {
        for (int i = 0; i < 5; ++i) {
            if (residents[i] == nullptr) {
                residents[i] = person;
                return;
            }
        }
        cout << "House is full. Cannot add more residents." << endl;
    }
    void displayHouseInfo() {
        cout << "House Address: " << address << endl;
        cout << "Residents:" << endl;
        for (int i = 0; i < 5; ++i) {
            if (residents[i] != nullptr) {
                residents[i]->displayDetails();
            }
        }
    }
};
class Neighborhood {
private:
    House* houses[10]; 
public:
    Neighborhood() {
        for (int i = 0; i < 10; ++i) {
            houses[i] = nullptr;
        }
    }
    void addHouse(House* house) {
        for (int i = 0; i < 10; ++i) {
            if (houses[i] == nullptr) {
                houses[i] = house;
                return;
            }
        }
        cout << "Neighborhood is full. Cannot add more houses." << endl;
    }
    void displayNeighborhoodInfo() {
        cout << "Neighborhood Information:" << endl;
        for (int i = 0; i < 10; ++i) {
            if (houses[i] != nullptr) {
                houses[i]->displayHouseInfo();
                cout << endl;
            }
        }
    }
};
int main() {
    Person person1("John", 35);
    Person person2("Alice", 28);
    Person person3("Bob", 40);
    House house1("123 Main St");
    House house2("456 Elm St");
    house1.addResident(&person1);
    house1.addResident(&person2);
    house2.addResident(&person3);
    Neighborhood neighborhood;
    neighborhood.addHouse(&house1);
    neighborhood.addHouse(&house2);
    neighborhood.displayNeighborhoodInfo();
    return 0;
}
