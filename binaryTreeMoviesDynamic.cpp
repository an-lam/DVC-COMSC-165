#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

struct Movie
{
  string sayThis;
  Movie *yes;
  Movie *no;
};

/*
                   Is it Animated?
			    yes/              \no
			      /                \
		Fish involved?             Romantic?
		 yes/    \no             yes/      \no
		   /      \                /        \
        Nemo     Lion King     Titanic   Star Wars
*/

int main()
{
  // all of the diagnoses
  // Create these nodes dynamically
  Movie *a = new Movie {"It's Star Wars"};
  Movie *b = new Movie {"It's Titanic"};
  Movie *c = new Movie {"It's Lion King"};
  Movie *d = new Movie {"It's Finding Nemo"};

  // all of the questions
  Movie *dc = new Movie {"Are fish involved?", d, c};
  Movie *ba = new Movie {"Is it a romatic film?", b, a};
  Movie *ef = new Movie{"Is it animated?", dc, ba};

  Movie *top = ef; // the full tree
  string buf;

  // the "challenge" to the user
  cout << "\nTell me about the movie you are watching and I'll identify it.\n";

  Movie *p = top; // move p through the tree
  while (true) // the p-loop
  {
    cout << p->sayThis; // could be the answer or could be another question
    if (p->yes == 0 && p->no == 0) break; // it was the answer -- we're done!
    cout << " [yes/no] ";

    getline(cin, buf);
    if (buf == "yes") p = p->yes;
    else if (buf == "no") p = p->no;
  }

  return 0;

}
