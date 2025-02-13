#include "Person.hpp"
#include <iostream>
using namespace std;

int main() {
    Person p1;
    Person p2("Mary Johnson", 21);

    cout << p1 << endl;
    cout << p2 << endl;

    p1.setAge(60);
    p1.setName("Bob Williams");
    p2.hasBirthday();
    // p2.isValidAge(50);  method is private so cannot be accessed in main

    cout << "\nAfter updates ..." << endl;
    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}