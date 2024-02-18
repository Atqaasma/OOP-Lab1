#include <iostream>
#include <string>
using namespace std;
class Dog {
private:
    string name;
    int age;
    string breed;
public:
    Dog(string n, int a, string b) : name(n), age(a), breed(b) {}

    void displayDetails() {
        cout << "Dog: " << name << ", Age: " << age << " years, Breed: " << breed << endl;
    }
};
class Person {
private:
    string name;
    int age;
    Dog* dog;
public:
    Person(string n, int a) : name(n), age(a), dog(nullptr) {}
    void setDog(Dog* d) {
        dog = d;
    }
    void displayDetails() {
        cout << "Person: " << name << ", Age: " << age << endl;
        if (dog != nullptr) {
            cout << "Owns: ";
            dog->displayDetails();
        }
        else {
            cout << "Does not own a dog." << endl;
        }
    }
    void changeDog(Dog* newDog) {
        if (dog != nullptr) {
            cout << name << " introduces a new dog:" << endl;
            dog->displayDetails();
            delete dog; 
        }
        else {
            cout << name << " does not own a dog." << endl;
        }
        dog = newDog; 
    }
    ~Person() {
        delete dog;
    }
};
int main() {
    Person person1("Ahmed",19);
    Dog* dog1 = new Dog("Luky", 3, "Pomeranian");
    person1.setDog(dog1);
    cout << "Initial details:" << endl;
    person1.displayDetails();
    Dog* newDog = new Dog("Leon", 2, "Bulldog");
    person1.changeDog(newDog);
    cout << "\nUpdated details:" << endl;
    person1.displayDetails();
    delete dog1;
    delete newDog;
    return 0;
}
