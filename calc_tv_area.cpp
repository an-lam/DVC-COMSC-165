// Alvin Le
// Assignment 3, Adv Programming with C & C++
// Editor(s) used: Microsoft Visual Studio 2015
// Compiler(s) used: Local Windows Debugger

#include <iostream>
using std::cout;
using std::cin;
using std::ios;

#include <string>
using std::string;

#include <cmath>

double hypotenuse; // Declaring double hypotenuse for TV measurement input from user.

// Declaring prototypes for functions to be used in main().
void print_id();
double calc_area(double);
string buffer;

int main() {
  print_id();
  cout << "Enter the diagonal size of your favorite TV, in inches: ";
  cin >> buffer; hypotenuse = atof(buffer.c_str());
  cin.ignore(1000, 10);
  cout << "The area of a " << hypotenuse << " inch TV is ";
  cout.setf(ios::fixed); // Setting precision to be 1 decimal point after the user input has already been printed.
  cout.precision(1);
  cout << calc_area(hypotenuse) << " inches";
  cout << "\n\nPlease press ENTER or RETURN to close the program.";
  cin.get();
}

double calc_area(double hypotenuse) {
  double height; // Declaring doubles for height and width.
  double width;
  // This is a combination of the assumed width:height ratio of 16:9 and the Pythagorean Theorem.
  // height = 9/16 * width, height^2 + width^2 = hypotenuse^2
  height = (hypotenuse * 9.0) / sqrt(16.0 * 16.0 + 9.0 * 9.0);
  width = (16.0 / 9.0) * height;
  return height * width;
}

void print_id() {
  cout << "Alvin Le\n";
  cout << "Assignment 3, Adv Programming with C & C++\n";
  cout << "Editor(s) used: Microsoft Visual Studio\n";
  cout << "Compiler(s) used: Local Windows Debugger\n";
  cout << "File: " << __FILE__ << "\n";
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}
