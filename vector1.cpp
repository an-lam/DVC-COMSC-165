#include <iostream>

#include <vector>
using namespace std;

const int MAX_NUM = 5; 
int main()
{
	// you can substitute <double> with any datatype
	vector<double> studentScores(MAX_NUM);  // initial size
	int size, capacity, i;
 
    for (i = 0; i < MAX_NUM; i++)
    {
        cout << "Enter score for student #" << i+1  << ": " << flush;
        cin >> studentScores[i];
    }
	
	// Add scores beyond the initial size
	studentScores.push_back(99);
	studentScores.push_back(100);
	
	size = studentScores.size();
	capacity = studentScores.capacity();
	
	cout << "array size = " << size << endl;
    cout << "array capacity = " << capacity << endl;
 
    for (i = 0; i < size; i++)
    {
        cout << "Student #" << i+1  << ": " << studentScores[i] << endl ;
    }

    return 0;
}
