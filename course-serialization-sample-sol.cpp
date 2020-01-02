// Sample student
// Assignment 6, Adv Programming with C & C++
// Editor(s) used: Xcode
// Compiler(s) used: Apple LLVM

#include <iostream>
using std::cin;
using std::cout;
using std::ios;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <string>
using std::string;
using std::getline;

#include <cstdlib>


struct Course {
  string name;
  int units;
  int year;
  char grade;
};


// Declaring function prototypes.
void create_course_object(string, int, Course[]);
void create_table(Course[], int);
int serialize_up(Course[]);
void serialize_down(Course[], int);
void print_id();


/* * * * * * * * * *
/
/ Function: Main function
/
* * * * * * * * * */
int main() {
  print_id();

  const int CAPACITY = 101; // Declaring course array capacity to be 100.
  string temp_name;
  Course all_courses[CAPACITY]; // Creating array and setting its capacity to const declared above.
  int size = 0; // Declaring current size of array to be 0.
  ifstream fileExists("courses.txt"); // Creating a "file" object to test its existence.

  if (fileExists.good()) {
    size = serialize_up(all_courses); // If file already exists from previous program, then run serialize_up().
  }

  while (size < CAPACITY) { // While the array size is less than its capacity, prevent out of index error.
    create_table(all_courses, size);
    cout << "\nEnter course #" << size + 1 << " [Enter Q to exit]: ";
    getline(cin, temp_name);
    temp_name = temp_name.substr(0, 10); // Truncating user string input to max 10 characters.
    if (temp_name == "Q" || temp_name == "q") {
      serialize_down(all_courses, size); // If user enters "q" or "Q", then serialize previous user input in program iteration and close.
      return 0;
    }
    create_course_object(temp_name, size, all_courses);
    size++; // Increment size of array by 1 after course object is placed in array.
  }
}


/* * * * * * * * * *
/
/ Function: Creates single course object and inserts it into all_courses[] array.
/ Parameters:
/   temp_name (IN): course name
/   size (IN): course array size
/   all_courese (INOUT): array of courses
/ Return: NONE
/
* * * * * * * * * */
void create_course_object(string temp_name, int size, Course all_courses[]) { // Pass course name, size of array, and array itself into function.
  string buffer;
  all_courses[size].name = temp_name; // Setting temp course object name equal to user input parameter.
  cout << "What year did " << all_courses[size].name << " take place? (ex. 2018) ";
  cin >> buffer;
  all_courses[size].year = atoi(buffer.c_str()); // Setting user input to temp course object year.
  if (all_courses[size].year < 1970 || all_courses[size].year > 3000) { // Year cannot be prior to 1970 nor further than 3000.
    all_courses[size].year = 0;
  }
  cin.ignore(1000, 10);
  cout << "How many units was " << all_courses[size].name << "? (ex. 4) ";
  cin >> buffer; all_courses[size].units = atoi(buffer.c_str()); // Setting user input to temp course object units.
  if (all_courses[size].units < 0 || all_courses[size].units > 9) { // Units cannot be greater than 10 or less than 0.
    all_courses[size].units = 0;
  }
  cin.ignore(1000, 10);
  cout << "What grade did you receive in " << all_courses[size].name << "? [Enter P for in-progress or planned] ";
  cin >> all_courses[size].grade; // Setting user input to temp course object grade.
  if (isdigit(all_courses[size].grade)) { // Checking if grade is a non-integer.
    all_courses[size].grade = '?';
  }
  cin.ignore(1000, 10);
}


/* * * * * * * * * *
/
/ Function: Outputs course table header and all courses in the all_courses[] array.
/
/ Parameters:
/   size (IN): course array size
/   all_courses (IN): array of courses
/ Return: NONE
* * * * * * * * * */
void create_table(Course all_courses[], int size) { // Array and size of array act as parameters to cout the course table.
  cout << "\nCourse     Year Units Grade\n";
  cout << "---------- ---- ----- -----\n";
  for (int i = 0; i < size; i++) {
    cout.setf(ios::left); cout.width(11); cout << all_courses[i].name;
    cout.unsetf(ios::left); cout.width(4); cout << all_courses[i].year << " ";
    cout << "  " << all_courses[i].units << "   ";
    cout << "  " << all_courses[i].grade << "\n";
  }
}


/* * * * * * * * * *
/
/ Function: Serializes up from courses.txt into all_courses[] array and returns the size of the array after serialization.
/
/   all_courses (OUT): array of courses
/ Return:
/   size of the course array
* * * * * * * * * */
int serialize_up(Course all_courses[]) {
  ifstream fin; // Declaring ifstream object.
  fin.open("courses.txt");
  int size = 0; // Always starting array size at 0.
  while (fin.good()) { // While fin object is still in file.
    string buffer;
    getline(fin, buffer); // Setting getline() to buffer to check for EOF.
    if (buffer == "EOF") break; // If buffer is "EOF", break from loop into main().
    all_courses[size].name = buffer;
    fin >> all_courses[size].year;
    fin.ignore(1000, 10);
    fin >> all_courses[size].units;
    fin.ignore(1000, 10);
    fin >> all_courses[size].grade;
    fin.ignore(1000, 10);
    size++; // Increment array size by 1 for every course object inserted into array.
  }
  fin.close(); // Close file.
  return size; // Return size of array for current run of program.
}


/* * * * * * * * * *
/
/ Function: Serializes down current version of all_courses[] array into courses.txt
/
* * * * * * * * * */
void serialize_down(Course all_courses[], int size) {
  ofstream fout; // Declaring ofstream object.
  fout.open("courses.txt");
  for (int i = 0; i < size; i++) { // While the loop iteration is less than size of array itself.
    fout << all_courses[i].name << "\n";
    fout << all_courses[i].year << "\n";
    fout << all_courses[i].units << "\n";
    fout << all_courses[i].grade << "\n";
  }
  fout << "EOF\n"; // Serializing "EOF" to file to indicate end-of-file manually
  fout.close(); // Close file.
}


/* * * * * * * * * *
/
/ Function: Outputs identification comment block in main().
/
* * * * * * * * * */
void print_id() {
  cout << "Sample student\n";
  cout << "Assignment 6, Adv Programming with C & C++\n";
  cout << "Editor(s) used: Xcode\n";
  cout << "Compiler(s) used: Apple LLVM\n";
  cout << "File: " << __FILE__ << "\n";
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}
