#include <iostream>
using namespace std;

int main() {
    
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int num[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    if(n > 0) {
        int last = num[n-1];
        for (int i = n-1; i > 0; i--) {
            num[i] = num [i-1];
        }
        num [0] = last;
    }
    
    cout << "After rotation: ";
    for (int i = 0; i < n; i++) {
        cout << num [i] << " ";
    }
    
    return 0;
}
