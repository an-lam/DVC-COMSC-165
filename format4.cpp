#include <iostream>
using std::cout;
using std::endl;
using std::ios;

int main( )
{
  // column widths of 2, 13, and 11, with gaps of 1 before each
  cout << "  #     model        make\n";
  cout << " -- ------------- -----------\n";
 
  // car 1 
  cout.width(3); // sends the "1" to fit into 3 spaces, landing under the "#"
  cout << '1';

  // counting from after the "#" to the "l" in model, 10 spaces
  cout << "   "; // skip the gap PLUS ident the "model" column by 2-spaces
  cout.width(11); // applies to Ford only, filling to the end of the "model" column
  cout.setf(ios::left); // says until unset
  cout << "Ford"; // the "F" aligns under the 3rd dash of the "model" column
 
  // counting from after the "l" in "model, to 2 spaces after the "e" in "make"
  cout << "   "; // skip the gap PLUS ident the "make" column by 2-spaces
  cout.width(12); // applies to Mustang only, allowing spill-over of up to 2 spaces
  cout << "Mustang" << endl;
 
  // car 2 
  cout.width(3);
  cout.unsetf(ios::left); // back to right-justification
  cout << '2';
 
  cout << "   "; 
  cout.width(11);
  cout.setf(ios::left);
  cout << "Volkswagen";
 
  cout << "   "; 
  cout.width(12);
  cout << "Golf" << endl; 
} 