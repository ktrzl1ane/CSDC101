#include <iostream>
using namespace std;

int main() {
    
    // Number 1:
    int numbers[5] = {5, 1, 4, 2, 3};
    
    // Number 2:
    cout << "Before _________: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Number 3:
    // Outer loop;
    for (int i = 0; i < 4; i++) { //
        
        // Inner loop:
        for(int j = 0; j < 4; j++) { //
        
            // 
            if(numbers[j] > numbers[j + 1]){
            
                //
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    //Number 4:
    cout << "After ________: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}
