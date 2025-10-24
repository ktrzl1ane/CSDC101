#include <iostream>
#include <string>
using namespace std;

int main() {

/*
  int cars[5] = {1, 44, 4, 55, 16};
  
  cout << "the first car is " << cars[0] << endl;
  cout << "the second car is " << cars[1] << endl;
  cout << "the third car is " << cars[2] << endl;
  cout << "the fourth car is " << cars[3] << endl;
  cout << "the fifth car is " << cars[4] << endl;
  
*/
/*
  string clothes[5] = {"Uniqlo", "Penshoppe", "RRJ", "ForMe", "ChromeHearts"};
  
  cout << "the first brand is " << clothes [0] << endl;
*/

/*
int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << numbers[i] << endl;
    }
  */
  
  int grade[4] = {90, 95, 100, 85};
  int max = grade[0];
  
  for (int i = 0; i < 4; i++) {
    if (grade[i] > max)
      max = grade [i];
  }
  
  cout << max << endl;

  return 0;
}
