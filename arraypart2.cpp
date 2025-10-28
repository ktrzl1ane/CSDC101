#include <iostream>
#include <string>
using namespace std;

int main() {

/*
  string number_words[5] = {"one", "two", "three", "four", "five"};
  int number_input;
  
  cout << "Enter a number from 1 to 5: ";
  cin >> number_input;
  
  number_input -= 1; // number_input = number_input - 1
  cout << number_words [number_input] << endl;
*/

/*
  string number_words[6] = {"zero","one", "two", "three", "four", "five"};
  int number_input;
  
  cout << "Enter a number from 1 to 5: ";
  cin >> number_input;
  cout << number_words [number_input] << endl;
*/


  string number_words[6] = {"zero","one", "two", "three", "four", "five"};
  int number_input;
  char choice;
  
  do{
  cout << "Enter a number from 1 to 5: ";
  cin >> number_input;
  cout << number_words [number_input] << endl;
  cout << "Do you want to convert another number? y/n: ";
  cin >> choice;
  cout << endl;
  } while (choice == 'y');

  return 0;
}
