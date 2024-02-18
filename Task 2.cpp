#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person {
public:
    string name;
    int age;
};
class House {
public:
    int noofpersons;
    Person persons[15];
    void information() {
        cout << "Enter no of persons in house: ";
        cin >> noofpersons;
        for (int i = 0; i < noofpersons; i++) {
            cout << "Enter name of person " << i + 1 << ": ";
            cin >> persons[i].name;
            cout << "Enter age of person " << i + 1 << ": ";
            cin >> persons[i].age;
        }
    }
    void display() {
        cout << "\n****House Information****\n";
        for (int i = 0; i < noofpersons; i++) {
            cout << "*Person " << i+1 << ":   Name: " << persons[i].name <<setw(10)<< "  Age: " << persons[i].age << endl;
        }
    }
};

int main() {
    House details;
    details.information();
    details.display();
    return 0;
}