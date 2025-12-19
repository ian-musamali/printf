#include <iostream>

void printUserInfo()
{
    std::string name;
    int age;
    
    std::cin >> name >> age;
    std::cout << "Hello, " << name << "! You are " << age << " years old.";
    
}
