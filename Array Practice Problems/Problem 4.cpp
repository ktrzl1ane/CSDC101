#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int num[n], sum = 0, even_count = 0, odd_count = 0;
    cout << "Enter elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> num[i];
        sum += num[i];
        
        if (num[i] % 2 == 0) {
            even_count++;
        } 
        else {
            odd_count++;
        }
    }
    
    int min = num[0];
    int max = num[0];

    for(int i = 1; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
        else if (num[i] > max) {
            max = num[i];
        }
    }
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;
    
    return 0;
}
