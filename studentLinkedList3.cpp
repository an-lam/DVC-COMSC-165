#include <iostream>
using std::cin;
using std::cout;
using std::ios;
using std::endl;

#include <iomanip>

#include <algorithm>
using std::swap;

#include <string>
using std::string;

struct Student
{
  string  name;
  int     idNumber;
  float   gpa;
  Student *next;
};

void sortList(Student *);
void printStudents(Student *);

int main()
{
  Student *firstStudentPtr = NULL; // an empty linked list, C++11: nullptr
  
  ifstream fin;
  fin.open("studentList.txt");
 
  // Create nodes from input file
  while (true)
  {
    string buf;
    getline(fin, buf);
    if (buf == "EOF") break;

    Student *temp = new Student;
    temp->name = buf;

    fin >> temp->idNumber;
    fin.ignore(1000, 10);

	fin >> temp->gpa;
	
    temp->next = firstStudentPtr;
    firstStudentPtr = temp;
  }
  fin.close( );
 
  // Print student list.  Note: list size is not required
  printStudents(firstStudentPtr);
  
  // Sort the list
  sortList(firstStudentPtr);
  
  printStudents(firstStudentPtr);
  
  return 0;
}

/*************************************************************************
* Purpose:  Sort the list in alphabetical order
* Parameter:
*   firstStudentPtr (IN) - pointer to the head of the list
*
* Return: None
**************************************************************************/
void sortList(Student *firstStudentPtr)
{
  for (Student *p = firstStudentPtr; p; p = p->next)
    for (Student* q = p->next; q; q = q->next)
      if (q->name < p->name)
	  {
        // swap entire content
		swap(*p, *q);
		
        // swap ptr to original value
		swap(p->next, q->next);
	  }
}

/*************************************************************************
* Purpose:  Print student info in the linked list
* Parameter:
*   firstStudentPtr (IN) - pointer to the head of the list
*
* Return: None
**************************************************************************/
void printStudents(Student *firstStudentPtr)
{
  int index = 1;
  cout << "\nSeq.  Name             ID    GPA  " << endl;
  for (Student *nodePtr = firstStudentPtr; nodePtr; nodePtr = nodePtr->next, index++)
  {
   cout.width(5);
   cout << std::left << index;
   cout.width(18);
   cout << nodePtr->name;
   cout.width(6);
   cout << nodePtr->idNumber;
   cout.setf(ios::fixed); cout.precision(2);
   
   cout << nodePtr->gpa << endl;
  }
}


