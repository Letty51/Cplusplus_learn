/* GOAL: practice functions that do not return
** a value and do not accept parameters
*/

#include <iostream>

using namespace std;

void printMessage(); // Note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

// Note, the definition is conventionally placed AFTER main
void printMessage()
{
    cout << "HEY! I'm from a function!";
}