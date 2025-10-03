#include <iostream>
using namespace std;

int main() {
   
   char choice;
   
   cout<< "Input 'a' for an A lettered name."<< endl;
   cout<< "Input 'b' for a B lettered name."<< endl;
   cout<< "Input 'c' for a C lettered name."<< endl;
   cout<< "\nInput here: "; 
   
   cin>>choice;
   
   switch(choice){
       
       case 'a':
            cout<< "\nAnastasia";
        break;
        
        case 'b':
            cout<< "\nBella";
        break;
        
        case 'c':
            cout<< "\nCatherine";
        break;
        
        default:
            cout<< "\nNO NAME";
        break;
   }

    return 0;
}
