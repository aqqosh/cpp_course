/*
When printf() is used, a specifier is needed in order to tell 
the system what type of data you want to print. The %d tells 
the system to print an integer and %f tells the system to print 
a floating point number. If you use an incorrect specifier, you 
will receive an error message. By default, floating point 
numbers contain six zeros after the decimal point if they are 
printed using printf().
The \n in printf() is equivalent to endl. They both print a 
newline character. Removing the \n from printf("%d \n", a); will 
delete the newline character and cause the variables a and b to
be printed side-by-side.

Incrementing a variable means to increase the value of a 
variable by a set amount. The most common incrementation you will 
see is when a variable increments itself by the value of 1.

String concatenation is the act of combining two strings together. 
This is done with the + operator.

Did you notice that you were able to subtract a bool from an int? 
Recall that a bool of true is actually an integer of 1 and false 
is actually 0. Thus, the system is able to add and subtract bools 
and ints. In addition, assigning b which is of type int to 3.1 
will force the variable to adopt the integer value of 3 instead. 
Remember that all ints disregard decimal places.

*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  //add code below this line
  // quick look into the operator +
    cout << 7 + 3 << endl;
  
    double a = 7.1;
    int b = +3;

    cout << a + b << endl;

    // look how cout print double
    int c = 1;
    double d = 1.0;
    cout << c << endl;
    cout << d << endl;

    //  comparing cout and printf
    int e = 1;
    double f = 1.0;
    cout << e << endl;
    cout << f << endl;
    printf("%d \n", e);
    printf("%f \n", f);

    // exploring incrementing
    int g = 0;
    int h = 0;
    g = g + 1;
    h++;
    cout << g << endl;
    cout << h << endl;

    // string concatenations
    string j = "This is an ";
    string k = "example string";
    string l = j + k;
    cout << l << endl;

    // substraction
    int m = 10;
    int n = 3;
    int o = m - n;
    cout << o << endl;

    int p = 10;
    p--;
    cout << p << endl;

    // division
    double r = 25.0;
    double s = 4.0;
    printf("%f \n", r / s);

    // modulo
    int modulo = 5 % 2;
    cout << modulo << endl;

    // miltiplication
    int t = 5;
    int u = 10;
    cout << t * u << endl;

    // type casting
    int numerator = 40;
    int denominator = 25;
    int number = 0;
    cout << boolalpha << (bool) number << endl;
    cout << numerator / denominator << endl;
    cout << (double) numerator / denominator << endl;

    // stoi()
    int v = 5;
    string w = "3";
    string x = "3.14";
    bool z = true;
    cout << v + stoi(w) << endl;

  //add code above this line
  
  return 0;
  
}