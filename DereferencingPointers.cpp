#include <iostream>

using namespace std;

int main()
{
    // This is an integer variable with value = 54
    int a = 54;

    // This is a pointer that holds the address of the variable 'a'.
    // If 'a' was a float, rather than int, so should be its pointer.
    int * pointerToA = &a;

    // If we were to print pointerToA, we'd obtain the address of 'a':
    cout << "pointerToA stores " << pointerToA << "\n";

    // If we want to know what is stored in this address, we can dereference pointerToA:
    cout << "pointerToA points to " << * pointerToA << "\n";

    return 0;
}