/* Now I would like you to do a switch statement with breaks between the cases.
** Create a program that asks the user for two float numbers.
** Then asks the user if they would like to:
** add the numbers;
** subtract the numbers;
** multiply the numbers;
** divided the numbers.
** The program should then print the numbers with the chosen operation and the solution.
*/

#include <iostream>

int main()
{
    float in1, in2;
    char op;
    
    std::cout << "Please enter two numbers: \n";
    std::cin >> in1;
    std::cin >> in2;
    std::cout << "Please enter the operation '+' or '-' or '*' or '/': \n";
    std::cin >> op;

    switch(op)
    {
        case '+' : std::cout << in1 << "+" << in2 << "=" << in1+in2 << "\n"; break;
        case '-' : std::cout << in1 << "-" << in2 << "=" << in1-in2 << "\n"; break;
        case '*' : std::cout << in1 << "*" << in2 << "=" << in1*in2 << "\n"; break;
        case '/' : std::cout << in1 << "/" << in2 << "=" << in1/in2 << "\n"; break;
        default : std::cout << "Illegal operation!!!\n";
    }

    return 0;
}