#include <iostream>
using namespace std;

int main() {
    
    int n, min, max;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int num[n], sum = 0, even_count = 0, odd_count = 0;
    cout << "Enter elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> num[i];
        
        if (num[i] < num[0]) {
            min = num[i];
        }
        
        else if (num[i] > num[0]) {
            max = num[i];
        }
        
        sum += num[i];
        
        if (num[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
        
    }
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;
    
    return 0;
}
