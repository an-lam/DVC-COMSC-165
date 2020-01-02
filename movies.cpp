#include <algorithm>
using std::swap;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

#include <cstdlib>

string toLowerCase(string);

struct Movie
{
  string title; // getline
  int released; // year
  Movie* next;
};

int main()
{
  Movie* firstMovie = 0;

  Movie a = {"Star Wars", 1977};
  Movie b = {"get out", 2017};
  Movie c = {"Thor Ragnorok", 2018};
  Movie d = {"The Mummy", 1959};
  Movie e = {"The Cable Guy", 1996};
  int n = 0;

  a.next = firstMovie;
  firstMovie = &a;
  n++;

  b.next = firstMovie;
  firstMovie = &b;

  c.next = firstMovie;
  firstMovie = &c;

  d.next = firstMovie;
  firstMovie = &d;

  e.next = firstMovie;
  firstMovie = &e;

  for (Movie* p = firstMovie; p; p = p->next)
  {
    cout.width(20);
    cout << p->title;
    cout.width(8);
    cout << p->released << endl;
  }

  for (Movie* p = firstMovie; p; p = p->next)
    for (Movie* q = p->next; q; q = q->next)
     if (toLowerCase(q->title) < toLowerCase(p->title))
     {
       swap(*p, *q);
       swap(p->next, q->next);
     }

  cout << endl << endl;
  for (Movie* p = firstMovie; p; p = p->next)
  {
    cout.width(20);
    cout << p->title;
    cout.width(8);
    cout << p->released << endl;
  }

  Movie* p; // declare above loop so that it survives below the loop
  for (p = firstMovie; p; p = p->next)
    if (p->title == "Star Wars") break;
  if (p)
  {
    //cout << "Enter new year of release for " << p->title << ": ";
    //char buf[100];
    //cin >> buf; p->released = atoi(buf);
  }

  cout << endl << endl;
  int index = 1;
  for (Movie* p = firstMovie; p; p = p->next, index++)
  {
    cout.width(2);
    cout << index;
    cout.width(20);
    cout << p->title;
    cout.width(8);
    cout << p->released << endl;
  }

  int indexToEdit = 3; // from cin usually
  index = 1;
  for (p = firstMovie; p; p = p->next, index++) ///////////////////////
    if (index == indexToEdit) break;

  if (p)
  {
    cout << "Enter new year of release for " << p->title << ": ";
    char buf[100];
    cin >> buf; p->released = atoi(buf);
  }

  cout << endl << endl;
  index = 1;
  for (Movie* p = firstMovie; p; p = p->next, index++)
  {
    cout.width(2);
    cout << index;
    cout.width(20);
    cout << p->title;
    cout.width(8);
    cout << p->released << endl;
  }  

/*
  //Movie* p;
  Movie* prev;
  index = 1;
  for (p = firstMovie, prev = 0; p; prev = p, p = p->next, index++)
    if (index == indexToEdit) break;  
  if (p)
  {
    if (prev) prev->next = p->next; // skips over the node at p
    else firstMovie = p->next; // there's a new head, possibly zero
    n--;
  }

  cout << endl << endl;
  index = 1;
  for (Movie* p = firstMovie; p; p = p->next, index++)
  {
    cout.width(2);
    cout << index;
    cout.width(20);
    cout << p->title;
    cout.width(8);
    cout << p->released << endl;
  }  

  int n = 0;
  for (Movie* p = firstMovie; p; p = p->next, n++);
  cout << "Remove which movie? [1-" << n << "] ?:";

*/
}

string toLowerCase(string aCppString)
{
  int n = aCppString.length( );
  for (int i = 0; i < n; i++)
    aCppString[i] = tolower(aCppString[i]);
  return aCppString;
}