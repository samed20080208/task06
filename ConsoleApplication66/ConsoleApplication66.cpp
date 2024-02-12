#include <iostream>
using namespace std;

class Animal {
public:
    string species;
    int age;
    bool isAlive;

    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    string breed;
    bool hasTail;

    void bark() {
        cout << "Dog is barking." << endl;
    }
};

//----------------------------------------------------------

class Animal {
public:
    string species;
    int age;
    bool isAlive;

    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Mammal : public Animal {
public:
    bool hasFur;
    string sound;

    void breathe() {
        cout << "Mammal is breathing." << endl;
    }
};

class Dog : public Mammal {
public:
    string breed;
    bool hasTail;

    void bark() {
        cout << "Dog is barking." << endl;
    }
};

//-----------------------------------------------------------------

class Person {
public:
    string name;
    int age;
    char gender;

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Address {
public:
    string street;
    string city;
    int zipCode;

    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", Zip Code: " << zipCode << endl;
    }
};

class Employee : public Person, public Address {
public:
    string company;
    double salary;

    void displayEmployeeInfo() {
        displayInfo();
        displayAddress();
        cout << "Company: " << company << ", Salary: $" << salary << endl;
    }
};

//-------------------------------------------------------------------------------------

class Vehicle {
public:
    string type;
    int year;
    bool isRunning;

    void start() {
        cout << "Vehicle is starting." << endl;
    }
};

class Car : public Vehicle {
public:
    string brand;
    string model;

    void drive() {
        cout << "Car is driving." << endl;
    }
};

class Bike : public Vehicle {
public:
    string brand;
    bool hasGears;

    void ride() {
        cout << "Bike is riding." << endl;
    }
};

