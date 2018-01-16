/* Enum example */

#include <iostream>

using namespace std;

int main() {
    // define MONTH as having 12 possible values
    enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    // define bestMonth as a variable type MONTH
    MONTH bestMonth;

    // assign bestMonth one of the values of MONTH
    bestMonth = Jan;

    // now we can check the value of bestMonth just like any other variable
    if(bestMonth == Jan)
    {
        cout << "I'm not so sure January is the best month.\n";
    }

    return 0;
}