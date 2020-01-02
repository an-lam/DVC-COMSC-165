#include <iostream>
using std::cin;
using std::cout;
using std::ios;
using std::endl;

#include <string>
using std::string;

struct Student
{
  char grade;
  char course[13];
  int unit;
};

// Using C++ pass-by-refence
void doubleArrayCapacity(Student *&, int&); // the prototype

int main()
{
  int capacity = 3;

  Student *myClass = new Student[capacity];

	// Get data from user and fill in values for myClass

  //capacity *= 2;

  // Double the array capacity
  doubleArrayCapacity(myClass, capacity);

  delete [] myClass;
}

void doubleArrayCapacity(Student *&studentArray, int &capacity)
{

  Student *temp = new Student[2 * capacity]; // new, temporary array
  Student *anyElement;
  for (int i = 0; i < capacity; i++){ // copy from the original array...
    anyElement = temp + i; // temp + i * sizeof(Student)
    *anyElement = studentArray[i]; // ...to the new, temporary array
  }

  delete [] studentArray; // release the original array back to the system
  studentArray = temp; // forget where the original was -- remember the new...
  capacity *= 2; // ...and its capacity
}

