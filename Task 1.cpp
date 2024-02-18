#include<iostream>
using namespace std;
class Dog{
  private:
    string name;
    int age;
    string breed;
  public:
    void details(int a, string b, string n){
      age=a;
      breed=b;
      name=n;
      cout<<"***Dog Details***"<<endl<<"Name: "<<name<<"\nAge: "<<age<<" years\nBreed: "<<breed;
  }
};
int main(){
    int age;
    string name, breed;
Dog dog1;
cout<<"Input age, breed and name respectively: ";
cin>>age>>breed>>name;
dog1.details(age,breed,name);
  return 0;
}