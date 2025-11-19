#include <iostream>
using namespace std;


int main () {
    
    int n;
   
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " numbers: ";
    
    int num [n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> num [i];
        sum += num [i];
    }
    
    float Mean = sum / n;
    cout << "Mean = " << Mean;
    
    return 0;
}
