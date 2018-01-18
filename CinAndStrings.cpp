/* GOAL: practice std::cin for strings
** Write a program that prompts two users for their
** name, address, and phone number.
** Print the information to the console in the following format:
** name
** \/t\/t address
** \/t\/t phone number
*/

#include <iostream>
#include <string>

int main() {
    std::string userName1, userName2;
    std::string userAddress1, userAddress2;
    std::string phoneNumber1, phoneNumber2;

    std::cout << "Hello, please tell me your name?: ";
    std::getline(std::cin, userName1);
    std::cout << "Hello, " << userName1 << ". Please tell me your address?: ";
    std::getline(std::cin, userAddress1);
    std::cout << "Now, please tell me your phone number?: ";
    std::getline(std::cin, phoneNumber1);
    std::cout << "Thank you!" << std::endl;

    std::cout << "Hello, please tell me your name?: ";
    std::getline(std::cin, userName2);
    std::cout << "Hello, " << userName2 << ". Please tell me your address?: ";
    std::getline(std::cin, userAddress2);
    std::cout << "Now, please tell me your phone number?: ";
    std::getline(std::cin, phoneNumber2);
    std::cout << "Thank you!" << std::endl;

    std::cout << userName1 << "\n" << "\t\t" << userAddress1 << "\n" << "\t\t" << phoneNumber1 << std::endl;
    std::cout << userName2 << "\n" << "\t\t" << userAddress2 << "\n" << "\t\t" << phoneNumber2 << std::endl;

    return 0;
}