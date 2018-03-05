/* For this program print for each variable
** print the value of the variable,
** then print the address where it is stored.
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    string givenString;
    char givenChar;

    cout << "Enter an int variable:";
    cin >> givenInt;
    cout << "\nThe value is " << givenInt << ", and the address where it is stored is " << &givenInt << "\n";
    cout << "\nEnter a float variable:";
    cin >> givenFloat;
    cout << "\nThe value is " << givenFloat << ", and the address where it is stored is " << &givenFloat << "\n";
    cout << "\nEnter a double variable:";
    cin >> givenDouble;
    cout << "\nThe value is " << givenDouble << ", and the address where it is stored is " << &givenDouble << "\n";
    cout << "\nEnter a char:";
    cin.ignore(); // use cin.ignore(); so cin will ignore the characters in the buffer leftover from the givenDouble
    cin >> givenChar;
    /* C++标准库中I/O类对输出操作符<<重载，在遇到字符型指针时会将其当做字符串名来处理，输出指针所指的字符串。
    ** 既然这样，我们就别让他知道那是字符型指针，所以得进行类型转换，
    ** 即：希望任何字符型的指针变量输出为地址的话，都要作一个转换，即强制 (char *) 转换成 (void *)
    */
    cout << "\nThe value is " << (char) givenChar << ", and the address where it is stored is " << (void *) &givenChar << "\n";
    cout << "\nThe value is " << (char) givenChar << ", and the address where it is stored is " << (int *) &givenChar << "\n";
    cout << "\nThe value is " << givenChar << ", and the address where it is stored is " << &givenChar << "\n";
    cout << "\nEnter a string:";
    cin.ignore();
    getline(cin,givenString);
    cout << "\nThe value is " << givenString << ", and the address where it is stored is " << &givenString << "\n";

    return 0;
}