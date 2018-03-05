/* GOAL: Practice array manipulation in C++.
** The user will input 40 integers.
** Put them into an array.
** Then print the array in the order the numbers were entered.
** Then print in reverse order.
** Then sort the array in ascending order and print it.
** The each print of the array should separate the numbers in the array by one space.
** For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userInput[40];

    cout << "Please enter 40 numbers: \n";
    for(int i = 0; i < 40; i++)
    {
        cin >> userInput[i];
    }

    cout << "\nThe array is: \n";
    for(int j = 0; j < 40; j++)
    {
        cout << userInput[j] << " ";
    }

    // print the array in reverse order
    cout << "\nThe array in reverse order is: \n";
    for(int k = 39; k >= 0; k--)
    {
        cout << userInput[k] << " ";
    }

    cout << "\nThe array in ascending order is: \n";
    for(int m = 0; m < 40; m++)
    {
        for(int n = 0; n < 39 - m; n++)
        {
            if(userInput[n] > userInput[n + 1])
            {
                int temp;
                temp = userInput[n];
                userInput[n] = userInput[n + 1];
                userInput[n + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }

    return 0;
}