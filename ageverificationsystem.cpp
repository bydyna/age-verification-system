#include <iostream>

int main () 
{
    // OPENING MESSAGE
    std::cout << "====================================\n";
    std::cout << "      AGE VERIFICATION SYSTEM\n";
    std::cout << "====================================\n";

    // USER INPUT
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::getline(std::cin, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    // VERIFY AGE
    if (age >= 18) {
        std::cout << "Status : Adult \n";
        std::cout << "Message: Welcome, " << name << "!\n";
    }
    else {
        std::cout << "Status : Minor \n";
        std::cout << "Message: You are below 18. You cannot enter!\n";
    }

return 0; 
}