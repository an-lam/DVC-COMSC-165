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
  char *temp;
};

void doubleArrayCapacity(Student *&, int&); // the prototype

int main()
{
  int capacity = 3;
  Student *myClass = new Student[capacity];
	
  // Double the array capacity
  doubleArrayCapacity(myClass, capacity);
  
  Student *testClass = new Student[2];
  testClass[0].temp = new char[10];
  char *savePtr = testClass[0].temp;  // save address 
  testClass[0].temp[0] = 'A';
  testClass[0].temp[1] = 'B';
  testClass[0].temp[2] = 0;
  testClass[0].unit = 10;
  
  cout << testClass[0].temp << endl;
  
  delete [] testClass;
  cout << testClass[0].unit << endl;
  
  cout << savePtr << endl;  // Test to see if it was deleted
  
  
}

void doubleArrayCapacity(Student *&studentArray, int &capacity)
{
  Student *temp = new Student[2 * capacity]; // new, temporary array
  for (int i = 0; i < capacity; i++) // copy from the original array...
    temp[i] = studentArray[i]; // ...to the new, temporary array
  
  delete [] studentArray; // release the original array back to the system
  studentArray = temp; // forget where the original was -- remember the new...
  capacity *= 2; // ...and its capacity
}

