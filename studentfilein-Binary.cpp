#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;  // need this for file input
using std::ofstream;   // need this for file output
using std::fstream;

#include <iostream>
using std::ios;

#include <string>
using std::string;

#include <cstring> // need it for strcpy

#define NAME_LENGTH  32

struct Student
{
  int age;
  char name[NAME_LENGTH];
  double gpa;
};

int main()
{
  int capacity = 2;
  Student *students = new Student[capacity]; // declare the struct-based object
  int index = 0;
  int size = 0;

  students[index].age = 21;
  students[index].gpa = 3.80;
  strncpy((students[index]).name, "Jane Smith", NAME_LENGTH-1);
  //strcpy((char *)&students[index].name, "Jane Smith");

  cout << "Here's our new student:\n";
  cout << "Name: " << students[index].name << endl;
  cout << "Age:  " << students[index].age << " years\n";
  cout << "GPA:  " << students[index].gpa << endl;

  index++;
  students[index].age = 19;
  students[index].gpa = 2.80;
  strncpy(students[index].name, "Alexa A", NAME_LENGTH-1);

  cout << "Here's another new student:\n";
  cout << "Name: " << students[index].name << endl;
  cout << "Age:  " << students[index].age << " years\n";
  cout << "GPA:  " << students[index].gpa << endl;

  cout << "Done" << endl;

  // return 0;
  fstream fout;
  string filename = "studentList.dat";
  fout.open(filename.c_str(), ios::binary|ios::out);
  // Write the array index
  size = index + 1;
  fout.write(reinterpret_cast<char*>(size), sizeof(int));
  // Write data
  fout.write(reinterpret_cast<char*>(students), (size) * sizeof(Student));
  fout.close(); // done with the file


  // Open the file for reading
  fstream fin;
  fin.open(filename.c_str(), ios::binary|ios::in);
  int newsize;
  Student *newstudents;

  if (fin.good())
  {
    fin.read(reinterpret_cast<char*>(&newsize), sizeof(int));
	newstudents = new Student[newsize];
    fin.read(reinterpret_cast<char*>(newstudents), (newsize) * sizeof(Student));
	//fin.read((void *)students, newsize*sizeof(Student));
	cout << "newsize = " << newsize << endl;
  }
  else
  {
      cout << "Error opening: " << filename << endl;
  }

  cout << "\n---------Data from the binary file: \n";
  for (int i=0; i < size; i++)
  {
	cout << "Name: " << newstudents[i].name << endl;
    cout << "Age:  " << newstudents[i].age << " years\n";
    cout << "GPA:  " << newstudents[i].gpa << endl;
	cout << endl;
  }

  return 0;
}
