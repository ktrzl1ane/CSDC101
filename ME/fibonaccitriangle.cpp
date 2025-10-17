#include <iostream>
using namespace std;

int main() {
  
  int first = 0, second = 1, next, rows;
  
  cout<< "Enter number of rows: ";
  cin>> rows;
  
  for(int i = 1; i <= rows; i++){
  
    for(int j = 1; j <= i; j++){
    cout<< first << " ";
  
    next = first + second;
    first = second;
    second = next;
    }
    
    cout<< endl;
  }
  
  return 0;
}
  
