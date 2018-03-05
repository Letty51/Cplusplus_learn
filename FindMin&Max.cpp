/* Find the Min and Max and Average of 15 numbers that a user will input.
** The numbers range from 0 to 100.
** We will do it now for paractice and again later when we learn arrays and functions.
** So you do not have to keep all 15 numbers stored in memory.
** HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{
    float userInput = 0;
    float min = 100;
    float max = 0;
    float sum = 0;
    // scanf("%d",&min)

    // get the numbers from user
    for(int i = 0; i < 15; i++)
    {
        cout << "Enter a number: ";
        cin >> userInput;
        cout << userInput << "\n";
        sum += userInput;

        if(userInput < min)
        {
            min = userInput;
        }

        if(userInput > max)
        {
            max = userInput;
        }
    }

    cout << "the Min and Max and Average of 15 numbers are: " << min << ", " << max << ", " << sum/15.0 << "\n";

    return 0;
}