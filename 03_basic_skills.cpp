/*
This exercise could not have been done 
using string concatenation (by problem statement)
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string greeting = argv[1];
  string dayOfWeek = argv[2];
  string month = argv[3];
  int day = atoi(argv[4]);
  int currentWaitMinutes = atoi(argv[5]);
  
  //add code below this line
  
  cout << greeting;
  string line1 = " Today is ";
  cout << line1;
  cout << dayOfWeek;
  string gap1 = ", ";
  cout << gap1;
  cout << month;
  string gap2 = " ";
  cout << gap2;
  cout << day;
  string gap3 = ".";
  cout << gap3 << endl;
  string line2 = "The current wait time is ";
  cout << line2;
  cout << currentWaitMinutes;
  string line3 = " minutes.";
  cout << line3;
  
  //add code above this line
  
  return 0;
  
}