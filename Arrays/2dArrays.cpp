#include <iostream>
#include <string>
using namespace std;

int main() {

  int matrix[2][2] = {{1,2},
                      {3,4}};
                      
  cout << "1st coordinate: " << matrix[0][0] << endl;
  cout << "2nd coordinate: " << matrix[0][1] << endl;
  cout << "3rd coordinate: " << matrix[1][0] << endl;
  cout << "4th coordinate: " << matrix[1][1] << endl;

  return 0;
}
