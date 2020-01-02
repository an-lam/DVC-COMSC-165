#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

const int MAX_CLASS_SIZE = 40; // array's capacity

struct Instructor
{
  string name;
  string discipline; // like Computer Science
};

struct Student
{
  string name; // okay to reuse an attribute name in another struct
  int studentID; // use zero to signify "not-in-use"
  int score;
};

struct Classroom
{
  string roomNumber;
  int seatingCapacity;
  Instructor instructor;
  Student students[MAX_CLASS_SIZE];
  int numberOfStudents; // the partially-filled array size
};

string hasPerfectScore(Student [], int size);

int main( )
{
  Classroom classroom {"E-160", 48}; // everything else zeroed or blanked out!

  Student student1 {"Jack Smith", 1231232, 70}; // C++11 syntax
  classroom.students[0] = student1; // copy Jack into the zeroth position in the classroom
  classroom.numberOfStudents++;

  Student student2 {"Joan Doe", 1223454, 90}; // C++11 syntax
  classroom.students[1] = student2; // copy Joan into the first position in the classroom
  classroom.numberOfStudents++;

  classroom.students[2] = {"Siri A.", 1112211, 100}; // C++11 also allows this!
  classroom.numberOfStudents++;

  // taking roll
  for (int i = 0; i < classroom.numberOfStudents; i++)
    cout << classroom.students[i].name << "? Here!\n";

  cout << hasPerfectScore(classroom.students, classroom.numberOfStudents)
       << "have perfect scores" << endl;

  return 0;
}

string hasPerfectScore(Student students[], int size)
{
  string names = "";

  for (int i = 0; i < size; i++)
    if (students[i].score == 100)
	  names += students[i].name + " ";

  if (names == "")
     names = "None ";

  return names;
}
