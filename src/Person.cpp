#include "Person.hpp"

bool Person::isValidAge(int newAge)
{
    if ((newAge>=0)&&(newAge<=120))
        return true;
    else
        return false;
}

Person::Person()
{
    name = "John Doe";
    age = 42;
}

Person::Person(string newName, int newAge): name(newName), age(newAge)
{
    // Now uses constructor initialization list
}

string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return this->age;
}

void Person::setName(string name)
{
    this->name = name; // using the this pointer
}

void Person::setAge(int newAge)
{
    if (isValidAge(newAge))
        age = newAge;
    else
        age = 0; // or just not set it ie. retain the old value
}

void Person::hasBirthday()
{
    age++;
}

ostream& operator<<(ostream& os, const Person& person) {
    os << person.name << " is " << person.age << " years old.";
    return os;
}
