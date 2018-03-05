#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout << "What is your favourite winter sport?: \n";
    std::cout << "1. Skiing \n2. Sledding \n3. Sitting by the fire \n4. Drinking hot chocolate \n";
    std::cout << "\n\n";

    switch(menuItem)
    {
        case(1): std::cout << "Skiing?! Sounds dangerous!\n"; break;
        case(2): std::cout << "Sledding?! Sounds like work!\n"; break;
        case(3): std::cout << "Sitting by the fire?! Sounds warm!\n"; break;
        case(4): std::cout << "Drinking hot chocolate?! Yum!\n"; break;
        default: std::cout << "Enter a valid menu item.\n";
    }

    char begin;
    std::cout << "\n\n";
    std::cout << "Where do you want to begin?\n";
    std::cout << "B. At the beginning? \nM. At the middle? \nE. At the end? \n\n";
    begin = 'M';

    switch(begin)
    {
        case('B'): std::cout << "Once upon a time there was a wolf.\n";
        case('M'): std::cout << "The wolf hurt his leg.\n";
        case('E'): std::cout << "The wolf lived happily everafter.\n";
    }

    return 0;
}