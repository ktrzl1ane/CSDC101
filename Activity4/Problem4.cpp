/*
Problem 4: Bulk Purchase Discount

Problem:
Customers get discounts based on how many cups they buy:
1–4 cups: No discount
5–9 cups: 10% discount
10+ cups: 20% discount
Each cup is $1.

Task:

Write a program that:
Ask how many cups the customer wants.
Calculates the total cost with the correct discount.
Outputs the final price.

Sample Input:
How many cups? 7

Sample Output:
Total cost: $6.30
*/

//Code:

#include <iostream>
using namespace std;

int main()
{
    float cups, original_price, discount, final_price;
    
    cout<< "How many cups? ";
    cin>> cups;
    
     original_price = cups;
     
    if(cups >= 1 && cups <= 4) {
        cout<< "Total cost: $"<< original_price;
    }
    
    else if (cups >= 5 && cups <= 9) {
        discount = original_price * 0.10;
        final_price = original_price - discount;
        cout<< "Total cost: $"<< final_price;
    }
        
    else if(cups >= 10) {
        discount = original_price * 0.20;
        final_price = original_price - discount;
        cout<< "Total cost: $"<< final_price;
    }

    return 0;
}
