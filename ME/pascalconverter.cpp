#include <iostream>
using namespace std;

int main() {
  
  int option, decision;
  float value, result;
   
  do{
  
    cout<< "\n=== Pressure Unit Converter ==="<< endl;
    cout<< "1. Pascal to Bar"<< endl;
    cout<< "2. Pascal to PSI"<< endl;
    cout<< "3. Bar to Pascal"<< endl;
    cout<< "4. PSI to Pascal"<< endl;
    cout<< "5. Exit"<< endl;
    cout<< "Choose an option: ";
    cin>> option;
    
    switch(option){
        
        case 1://Pascal to Bar
            cout<< "\nEnter value in Pascal: ";
            cin>> value;
            result = value / 100000;
            cout<< "Result: "<< result<< " bar"<< "\n";
        break;
        
        case 2:
            cout<< "\nEnter value in Pascal: ";
            cin>> value;
            result = value / 6894.76;
            cout<< "Result: "<< result<< " psi"<< "\n";
        break;
        
        case 3:
            cout<< "\nEnter value in Bar: ";
            cin>> value;
            result = value * 100000;
            cout<< "Result: "<< result<< " pascals"<< "\n";
        break;
        
        case 4:
            cout<< "\nEnter value in PSI: ";
            cin>> value;
            result = value * 6894.76;
            cout<< "Result: "<< result<< " pascals"<< "\n";
        break;
        
        case 5:
          return 0;
        break;
        
        default:
          cout<< "Wrong input, follow the instructions."<< endl;
        break;
      }
      
      cout<< "\nDo you want to convert again? (Press any key-Yes, 0-No): ";
      cin>> decision;
      
    } while (decision != 0);
        cout<< "Thank you for using the program."<< endl;
  
  return 0;
}
  
