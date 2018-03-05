/* Write a program that asks a user for five numbers.
** Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    float num[5];
    float sum = 0;
    int i;

    std::cout << "Please enter five numbers: \n";
    for(i=0; i<5 ; i++)
    {
        std::cin >> num[i];
        sum += num[i];
    }

    std::cout << "The sum of the five numbers is " << sum << "\n";
    std::cout << "The average of the five numbers is " << sum/5 << "\n";

    return 0;
}