//while loop

/*
Step 1: Start
Step 2: Declare variable a (1st term), b (2nd term), c (3rd term), n (no. of terms), i.
Step 3: Initialize variable a = 1, b = 1, i = 2 
Step 4: Read n from user 
Step 5: Print a and b
Step 6: while i < n 
	6.1 c = a + b
	6.2 print c 
	6.3 a = b, b = c 
	6.4 i = i + 1 
Step 7: Stop 
*/

#include<iostream>
using namespace std;
int main(){
    
    int a = 0, b = 1 , c, n, i = 2;
    
    cout<< "Number of terms: ";
    cin>> n;
    
    cout<< a << ", " << b << ", ";
    
    while(i < n){
        c = a + b;
        cout<< c << ", ";
        a = b, b = c;
        i++;
    }
    
    return 0;
}

//for

#include<iostream>
using namespace std;
int main(){
    
    int a = 0, b = 1, c, n;
    
    cout<< "Number of terms: ";
    cin>> n;
    
    cout << a << ", " << b << ", ";
    
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << ", ";
        a = b, b = c;
    }
    
    return 0;
}

