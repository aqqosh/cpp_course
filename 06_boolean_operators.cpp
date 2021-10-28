#include <iostream>
using namespace std;
	
int main() {

    // variables
    int a = 5;
    bool b = 7;

    // equality
    cout << boolalpha << (a == b) << endl;
    cout << boolalpha << (a != b) << endl;

    // less than
    cout << boolalpha << (a < b) << endl;
    cout << boolalpha << (a <= b) << endl;


    // greater than
    cout << boolalpha << (a > b) << endl;
    cout << boolalpha << (a >= b) << endl;

    // another variables
    bool c = true;
    bool d = true;
    bool e = false;

    // && and
    cout << boolalpha << (c && d) << endl;
    cout << boolalpha << (c && d && e) << endl;

    // || or
    bool f = true;
    bool g = true;
    bool h = false;
    bool i = false;
    cout << boolalpha << (f || g) << endl;
    cout << boolalpha << (a || b || c) << endl;

    // ! not
    cout << boolalpha << (! true) << endl;

    /*
    If C++ can determine the result of a boolean expression 
    before evaluating the entire thing, it will stop and 
    return the value.
    */

    return 0;

}