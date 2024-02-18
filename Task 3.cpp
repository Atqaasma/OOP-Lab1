#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Define the Dog class
class Dog {
private:
    string name;
    int age;
    string breed;
public:
    void setDetails(string n, int a, string b) {
        name = n;
        age = a;
        breed = b;
    }
    void displayDetails() {
        cout << "\n***Dog Details***" << endl;
        cout << "Name: " << name << "\nAge: " << age << " years\nBreed: " << breed << endl;
    }
};
// Person class
class Person {
private:
    string name;
    int age;
    Dog dog; 
public:
    void setDetails(string n, int a, Dog d) {
        name = n;
        age = a;
        dog = d;
    }
    void displayDetails() {
        cout << "\n***Person Details***" << endl;
        cout << "Name: " << name << "\nAge: " << age << endl;
        dog.displayDetails();
    }
};
// House class
class House {
private:
    string address;
    Person owner;
public:
    void setDetails(string addr, Person p) {
        address = addr;
        owner = p;
    }
    void displayDetails() {
        cout << "\n***House Details***" << endl;
        cout << "Address: " << address << endl;
        owner.displayDetails();
    }
};
int main() {
    Dog dog1;
    dog1.setDetails("Luky", 3, "Pomeranian");
    Person person1;
    person1.setDetails("Atqa", 18, dog1);
    House house1;
    house1.setDetails("123 Main St", person1);
    cout << "\nScenario Details:" << endl;
    house1.displayDetails();
    return 0;
}
