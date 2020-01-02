#include <iostream> 
#include <string> 
using namespace std; 
  
#include <algorithm>
using std::sort;
  
void sortLoHi(int [], int);
 
int main() 
{ 
  // create an array with the days of the week 
  const int SIZE = 7; 
  string day[] = {"Monday", "Tuesday", "Wednesday", 
    "Thursday", "Friday", "Saturday", "Sunday"}; 
  
  // output contents of the array, in original order
  cout << "Unsorted: "; 
  int i; // reused in 3 following for-loops 
  for (i = 0; i < SIZE; i++) 
    cout << day[i] << ' '; 
  cout << endl; 

  // 2 nested for-loops to sort the array
  // Bubble sort algorithm
  for (i = 0; i < SIZE; i++) 
  {
    for (int j = i + 1; j < SIZE; j++) 
    { 
      if (day[i] > day[j]) 
      { 
        // swap code 
        string temp = day[i]; 
        day[i] = day[j];   
        day[j] = temp; 
		// swap(day[i], day[j]);	
      } // if 
    } // for 
  } // for 

  
  // output contents, in alphabetical order
  cout << "Sorted: "; 
  for (i = 0; i < SIZE; i++) 
    cout << day[i] << ' '; 
  cout << endl; 
  
  // Array is passed by reference
  int scores[] = {100, 68, 20, 78, 99};
  sortLoHi(scores, 5);
  cout << "Sorted scores: "; 
	
  for (i = 0; i < 5; i++) 
    cout << scores[i] << ' '; 
  cout << endl;
} // main 

void sortLoHi(int scoreArray[], int size)
{
	// Calling library function to sort
	sort(scoreArray, scoreArray + size);
}




