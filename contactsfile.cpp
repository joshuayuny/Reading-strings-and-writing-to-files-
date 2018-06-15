// Reading strings and writing to files 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Array library
void writeArray(string array[], int num, string filename);
int main()
{
  string filename; 
  int num;
  cout << "How many names will be stored in the address book? ";
  cin >> num;
// the parameters for the array
  string array[num];
  cin.ignore();
  for(int row=0; row < num; row++)
  {
   cout << "Name " << row+1 << ": ";
   getline(cin, array[row]);
  }
// Asking user input file names
  cout << "What filename do you want to use for the address book?";
  getline(cin, filename);
  writeArray(array, num, filename);
  return 0;
}

// Prototype of array
void writeArray(string array[], int size, string filename)
{
// Creates new file filename
  ofstream outputFile;
  outputFile.open(filename);
  // Printing out how the size this array has
  outputFile << size << endl;
//Prints out all the names inside the single array starting from 0 - 3 
  for(int Arry=0; Arry < size; Arry++)
  {
     outputFile << array[Arry] << endl;
  }
// Enters back and close the file
  outputFile.close();
}

