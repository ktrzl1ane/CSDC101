#include <iostream>
using namespace std;

int main() {
  
  int number, result, choice;
  
  do{ 
    cout<< "Enter a number: ";
    cin>> number;
  
    for(int i = 1; i <= 10; i++){
      result = number * i;
      cout << number << " x " << i << " = " << result << endl;
    }
    
    cout<< "\nDo you want to try another number? (1-Yes, 0-No): ";
      cin>> choice;
      cout<< endl;
    }
    
  while(choice == 1);
    cout<< "Thank you for using the program!"<< endl;
  
  return 0;
}
