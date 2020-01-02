#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

struct TimeOfDay
{
  int hour;
  int minute;
  int second;
};

int main( )
{
  int age;
  double gpa;
  char grade;
  bool isEnrolledIn165;
  string name;
  TimeOfDay classStart;
  int scores[100];
  int *intPtr = scores;   // Assigning entire array ?
  scores[1] = 10;

  cout << "The memory location of \"int age\": " << &age << endl;
  cout << "The memory location of \"double gpa\": " << &gpa << endl;
  cout << "The memory location of \"char grade\": " << &grade << endl;
  cout << "The memory location of \"bool isEnrolledIn165\": " << &isEnrolledIn165 << endl;
  cout << "The memory location of \"string name\": " << &name << endl;
  cout << "The memory location of \"TimeOfDay classStart\": " << &classStart << endl;
  cout << "The memory location of \"int scores[100] using array name\": " << scores << endl;
  cout << "The memory location of \"int scores[100] using &\": " << &scores << endl;
  cout << "The memory location of \"scores[0]\": " << &scores[0] << endl;
  cout << "The memory location of \"scores[1]\": (+4 from score[0]) " << (scores + 1) << endl;
  cout << "The content of \"scores[1]\": " << *(scores + 1) << endl;
  cout << "intPtr = " << intPtr << endl;
  intPtr++;  // increment by 1 ?
  cout << "intPtr ++: " << intPtr << endl;

}
