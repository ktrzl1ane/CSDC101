#include <iostream>
using namespace std;

int main()
{
    int denominator_first_term, common_difference, next_term, n;
    
    cout<< "Enter the denominator of the first term: ";
    cin>> denominator_first_term;
    
    cout<< "Enter common difference: ";
    cin>> common_difference;
    
    cout<< "Enter no. of terms: ";
    cin>> n;
    
    cout<< "1/"<< denominator_first_term << ", ";
    
    while(denominator_first_term <= n){
        next_term = denominator_first_term + common_difference;
        cout<< "1/" << next_term << ", ";
        next_term = denominator_first_term;
        
    }
    
    return 0;
}
