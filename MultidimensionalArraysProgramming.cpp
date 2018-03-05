/* GOAL: practice using multidimensional arrays.
** Write a program that will accept values for a 4×4 array and a vector of size 4.
** Use the dot product to multiply the array by the vector.
** Print the resulting vector.
*/

#include <iostream>

using namespace std;

int main()
{
    // TODO: multiply a 4×4 array with vector of size 4.
    // Print the resultant product vector.

    // array dimensions must be known at compile time.
    // use const int to set the row and col numbers
    const int row = 4;
    const int col = 4;

    int arr[row][col];
    int vector[row], product[row];
    int sum = 0;

    // get the values for the array from the user
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "\narr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // get the value for the vector from the user
    for(int i = 0; i < row; i++)
    {
        cout << "\nvector[" << i << "] = ";
        cin >> vector[i];
    }
    sum = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum += (arr[i][j] * vector[i]);
        }
        product[i] = sum;
        sum = 0;
    }

    for(int i = 0; i < row; i++)
    {
        cout << "product[" << i << "] = " << product[i] << "\n";
    }

    return 0;
}