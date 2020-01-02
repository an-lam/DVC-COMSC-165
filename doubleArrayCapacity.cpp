#include <iostream>
using std::cin;
using std::cout;
using std::ios;

#include <string>
using std::string;

struct Student
{
  int age;
  string name;
  double gpa;
  Student *next;
};

void doubleArrayCapacity(Student**, int *); // the prototype

int main()
{
  int capacity = 3;
  Student *myClass = new Student[capacity];

  int i = 0;
  for (Student *p = nullptr; p; i++, p = p->next);

  // Fill in the array

  // &myClass: address of myClass which is pointer to Student)
  doubleArrayCapacity(&myClass, &capacity);

  delete [] myClass;
}

// **array:  address of a pointer pointing to Student struct
void doubleArrayCapacity(Student **studentArray, int *capacity)
{
  Student *temp = new Student[2 * *capacity]; // new, temporary array
  for (int i = 0; i < *capacity; i++) // copy from the original array...
    temp[i] = (*studentArray)[i]; // ...to the new, temporary array

  delete [] *studentArray; // release the original array back to the system
  *studentArray = temp; // change the contents of the pointer
  *capacity *= 2; // change the content at address pointed by capacity ptr
}
