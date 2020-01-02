#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

int main() {
	int age;
	float temperature;
	
    string buf; // a C++ string
    cout << "Enter your age: "; // a prompt
    cin >> buf; 
	age = atoi(buf.c_str()); // input numbers using "string buffers"
    cout << "age = " << age << endl;
	
    cout << "What's the temperature today? "; // a prompt
    cin >> buf;
	temperature = atof(buf.c_str()); 
  
    cout << "temperature = " << temperature << endl;
  
    return 0;
}
