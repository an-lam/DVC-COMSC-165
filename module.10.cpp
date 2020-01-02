#include <algorithm>
using std::swap;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::getline;
using std::string;

#include <cctype> // for tolower
#include <cstdlib> // for atoi

struct Student
{
  string name;
  int testScore;
  Student* next;
};

// prototypes
void serializeUp(Student*&);
void serializeDown(Student*);
void deallocateStudents(Student*&);
void addStudent(Student*&);
void updateStudent(Student*);
void removeStudent(Student*&); // head pointer may change
void listStudents(Student*);
void sortByName(Student*);
void sortByScore(Student*);
string toLowerCase(string);

int main()
{
  Student* firstStudent = 0; // an empty list
  serializeUp(firstStudent);
  
  while (true)
  {
    // a menu of user options
    cout << "\n\nMENU\n";
    cout << "A add a student\nU update a student\nR remove a student\nL list all students\nS arrange by score\nN arrange by name\nX exit\n...your choice: ";
    char userChoice;
    cin >> userChoice;
    cin.ignore(1000, 10); // needed because this program has both cin>> and getline
    userChoice = tolower(userChoice); // so we only have to check == lowercase char
      
    if (userChoice == 'x') break;
    if (userChoice == 'a') addStudent(firstStudent);
    else if (userChoice == 'u') updateStudent(firstStudent);
    else if (userChoice == 'r') removeStudent(firstStudent);
    else if (userChoice == 's') sortByScore(firstStudent); 
    else if (userChoice == 'n') sortByName(firstStudent);
    else if (userChoice == 'l') listStudents(firstStudent);
  }
  
  serializeDown(firstStudent);
  deallocateStudents(firstStudent);
}

// read from the disk
void serializeUp(Student*& head)
{
  ifstream fin;
  fin.open("studentList.txt");
  if (!fin.good()) return;
    
  while (true)
  {
    string buf;
    getline(fin, buf);
    if (buf == "EOF") break;

    Student* temp = new Student;
    temp->name = buf;

    fin >> temp->testScore;
    fin.ignore(1000, 10);

    temp->next = head;
    head = temp;
  }
  fin.close();
}

// write to the disk
void serializeDown(Student* head)
{
  ofstream fout;
  fout.open("studentList.txt");
 
  for (Student* p = head; p; p = p->next)
  {
    fout << p->name << "\n";
    fout << p->testScore << "\n";
  }
  fout << "EOF\n";
  fout.close();
}

// add a new node to the beginning of the list
void addStudent(Student*& head)
{
  Student* temp = new Student;
  
  cout << "\nEnter a students's name: ";
  getline(cin, temp->name);
  
  string buf;
  cout << "Enter a test score for " << temp->name << " [0-100]: ";
  cin >> buf; temp->testScore = atoi(buf.c_str()); // using the string buffer method
  cin.ignore(1000, 10);
  
  // link the new node into the list
  temp->next = head;
  head = temp;
}

// prompt user for new name and score, update size (aliased to "n" here)
void updateStudent(Student* head)
{
  string name;
  cout << "Enter the name of the student to update: ";
  getline(cin, name);
  
  // locate the student
  Student* p; // declare above loop so that it survives below the loop
  for (p = head; p; p = p->next)
    if (p->name == name) break;

  if (p)
  {
    cout << "\nEnter the student's updated name: ";
    getline(cin, p->name);

    char buf[100];
    cout << "Enter the student's updated test score [0-100]: ";
    cin >> buf; p->testScore = atoi(buf);
    cin.ignore(1000, 10);    
  }
  else
    cout << "Student named [" << name << "] not found\n";
}

void removeStudent(Student*& head)
{
  string name;
  cout << "Enter the name of the student to remove: ";
  getline(cin, name);
  
  // locate the student
  Student* p, *prev; // declare above loop so that it survives below the loop
  for (p = head, prev = 0; p; prev = p, p = p->next)
    if (p->name == name) break;

  if (p)
  {
    if (prev) prev->next = p->next;
    else head = p->next;
    delete p;
  }
  else
    cout << "Student named [" << name << "] not found\n";
}

void listStudents(Student* head)
{
  for (Student* p = head; p; p = p->next)
  {
    cout.width(20);
    cout << p->name << "'s score is";
    cout.width(4);
    cout << p->testScore << " out of 100\n";
  }
}

void sortByName(Student* head)
{
  for (Student* p = head; p; p = p->next)
    for (Student* q = p->next; q; q = q->next)
      if (toLowerCase(q->name) < toLowerCase(p->name))
      {
        swap(*p, *q);
        swap(p->next, q->next);        
      }
}

void sortByScore(Student* head) 
{
  for (Student* p = head; p; p = p->next)
    for (Student* q = p->next; q; q = q->next)
      if (q->testScore < p->testScore)
      {
        swap(*p, *q);
        swap(p->next, q->next);        
      }
}

void deallocateStudents(Student*& head)
{
  while (head)
  {
    Student* p = head; // node to deallocate
    head = head->next; // new head node
    delete p; // now deallocate the old head
  }  
}

string toLowerCase(string aCppString) // per module 7
{
  int n = aCppString.length();
  for (int i = 0; i < n; i++)
    aCppString[i] = tolower(aCppString[i]);
  return aCppString;
}