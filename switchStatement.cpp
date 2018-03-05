/* GOAL: understand the switch statement in C++
** This example does not use a break statement between 
** the possibilities, which means all menu items below 
** the selected one are executed.
*/

#include <iostream>

int main()
{
    char menuItem;
    std::cout << "Choose your holiday package: \n";
    std::cout << "L: luxury package. \n";
    std::cout << "S: standard package. \n";
    std::cout << "B: basic package. \n";

    std::cin >> menuItem;
    std::cout << menuItem << "\n";
    std::cout << "The " << menuItem << " package includes: \n";

    switch(menuItem)
    {
        case 'L' :
        {
            std::cout << "\t Spa Day \n";
            std::cout << "\t Sailboat Tour \n";
        }
        case 'S' :
        {
            std::cout << "\t City Tour \n";
            std::cout << "\t Complimentary Happy Hour \n";
        }
        case 'B' :
        {
            std::cout << "\t Airport Transfers \n";
            std::cout << "\t Complimentary Breakfast \n";
            break;
        }
        default : std::cout << "Please select the L,S,B package. \n";
    }

    return 0;
}