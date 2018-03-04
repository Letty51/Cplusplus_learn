/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters 'q'  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include <sstream>
#include <time.h> // added for the random number generator seed
#include <cstdlib> // added to use the rand function

using namespace std;

int main()
{
    int target;
    string userString;
    int guess = -1;

    srand(time(NULL)); //set the seed for the random number generator
    target = rand() % 100 + 1; //generate the 'random' number

    while(guess != target)
    {
        cout << "Guess a number between 0 and 100 : ";
        getline(cin, userString);
        //convert to an int
        stringstream(userString) >> guess;
        cout << userString << "\n";

        //Note I had to use double quetes around "q"
        //because it is a string
        if(userString == "q")
        {
            cout << "good bye!";
            cout << "The number is " << target << "\n";
            break;
        }

        if(guess > target)
        {
            cout << "Your guess is too high. \n";
        }
        else if(guess < target)
        {
            cout << "Your guess is too low. \n";
        }
        else
        {
            cout << "You guessed the target! \n";
        }
    }

    return 0;
}
