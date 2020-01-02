#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

struct Diagnostic 
{
  string sayThis;
  Diagnostic *yes;
  Diagnostic *no;
  Diagnostic *other; // e.g., not fully
  string otherWording; // wording for "other" (if in use) e.g., "not fully"
};

int main()
{
  // all of the diagnoses
  Diagnostic a = {"Take 2 aspirin and see me in the morning."};
  Diagnostic b = {"The patient is probably okay."};
  Diagnostic c = {"Check the dosage."};
  Diagnostic d = {"Patient may just need coffee."};
  Diagnostic e = {"The patient is deceased."};
  Diagnostic f = {"Patient is just sleeping."};
 
  // all of the questions
  Diagnostic g = {"Is the patient in pain?", &a, &b};
  Diagnostic h = {"Is the patient cold to the touch?", &e, &f};
  Diagnostic i = {"Is the patient on medication?", &c, &d};
  Diagnostic j = {"Is the patient conscious?", &g, &h, &i, "not fully"}; 
  
  Diagnostic* top = &j; // the full tree
 
  Diagnostic* p = top; // move p through the tree
  while (true)
  {
    cout << p->sayThis; // could be a question OR a diagnosis
    if (p->yes == 0 && p->no == 0 && p->other == 0) break; // it's a diagnosis
 
    // show user options, considering that there may not be an "other"
    cout << " [yes/no";
    if (p->other) cout << '/' << p->otherWording;
    cout << "] ";

    // get user's answer
    string buf;
    getline(cin, buf);

    // advance the p pointer
    if (buf == "yes") p = p->yes;
    else if (buf == "no") p = p->no;
    else if (p->other != 0 && buf == p->otherWording) p = p->other;
    // else p is not advanced and the last question is asked again
  }
  cout << "\n\n"; // for nice vertical spacing on the console screen 
} 