/*
1. Write a program that:

    Declares a boolean variable called my_bool.
    Initializes it to the boolean value of true.
    Prints the value of my_bool.
    Re-assigns my_bool to the value of test.
    Prints the value of my_bool.

Remember that the print value of true is 1 and the print 
value of false is 0. You should NOT use boolalpha << in your code!

2. Write a program that:

    Declares an int variable called my_int.
    Initializes it to the value of first_num.
    Prints the value of my_int.
    Re-assigns it to the value of second_num.
    Prints the value of my_int.
    Re-assigns it to the value of third_num
    Prints the value of my_int.

3. Write a program that:

    Prints the value of line1.
    On a new line, prints the value of line2.
    Make sure there is a new line after line2.

4. Write a program that:

    Declares a double variable called my_double.
    Initializes my_double to the value of 3.14.
    Prints the value of my_double.
    Re-assigns my_double to the value of number.
    Prints the value of my_double.

5. Use two cout statements to write the following string:
    'Okay, it is time to learn about operators.'

*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    bool test = atoi((argv[1]));

    int first_num = atoi((argv[1]));
    int second_num = atoi((argv[2]));
    int third_num = atoi((argv[3]));

    string line1 = (argv[1]);
    string line2 = (argv[2]);

    double number = atof(argv[1]);

    //add code below this line

    // pt.1
    bool my_bool;
    my_bool = true;
    cout << my_bool << endl;
    my_bool = test;
    cout << my_bool << endl;

    // pt.2
    int my_int;
    my_int = first_num;
    cout << my_int << endl;
    my_int = second_num;
    cout << my_int << endl;
    my_int = third_num;
    cout << my_int;

    // pt.3
    cout << line1 << endl;
    cout << line2 << endl;

    // pt.4
    double my_double;
    my_double = 3.14;
    cout << my_double << endl;
    my_double = number;
    cout << my_double;

    // pt.5
    string part1 = "Okay, it is time ";
    string part2 = "to learn about operators.";

    cout << part1;
    cout << part2 << endl;

    //add code above this line

    return 0;

}