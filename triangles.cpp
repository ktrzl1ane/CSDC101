//triangle

#include <iostream>
using namespace std;

int main()
{
   for(int row = 1; row <= 10; row++){ 
       
       for(int column = 1; column <= row; column++){
           cout<< "* ";
       }
       cout<< endl;
   } 
    return 0;
}

//inverted triangle

#include <iostream>
using namespace std;

int main()
{
   for(int row = 10; row >= 0; row--){ 
       
       for(int column = 1; column <= row; column++){
           cout<< "* ";
       }
       cout<< endl;
   } 
    return 0;
}
