#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <string>
using std::string;

struct Student
{
  int age;
  string name;
  double gpa;
};

typedef Student* StudentPtr;
typedef int * intPtr;

void doubleArrayCapacity(StudentPtr *, int *); // the prototype

int main()
{
  int capacity = 3;
  // Student *myClass = new Student[capacity];
  StudentPtr   myClass = new Student[capacity];
	
  // Fill in the array
  
  doubleArrayCapacity(&myClass, &capacity);
  cout << "capacity = " << capacity << endl;
}

void doubleArrayCapacity(StudentPtr *array, int *capacity)
{
  StudentPtr temp = new Student[2 * *capacity]; // new, temporary array
  for (int i = 0; i < *capacity; i++) // copy from the original array...
    temp[i] = array[i]; // ...to the new, temporary array
	
  delete [] array; // release the original array back to the system
  array = temp; // forget where the original was -- remember the new...
  *capacity *= 2; // ...and its capacity
}