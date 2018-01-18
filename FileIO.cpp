/* GOAL: to practice writing and reading files.
** Read the contents of input.txt and then write to it.
**
** Change the contents of the file called input.txt
** Change the ifstream and ofstream to fstream
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    // create an output stream to write to the file
    // append the new lines to the end of the file
    ofstream myfileI("input.txt", ios::app);
    if(myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for reading";

    //create an input stream to write to the file
    ifstream myfileO("input.txt");
    if(myfileO.is_open())
    {
        while(getline(myfileO,line))
        {
            cout << line << endl;
        }
        myfileO.close();
    }
    else cout << "Unable to open file for reading";
    return 0;
}