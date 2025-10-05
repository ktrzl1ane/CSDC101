/*
Problem 3: Inventory Check

Problem:
You can only sell lemonade if you have lemons and sugar.

Task:
Write a program that:

Ask the user how many lemons and how many cups of sugar they have.
If either lemons or sugar is 0 or less, 
	output: "You can't make lemonade!"
Otherwise,
	output: "You're ready to sell lemonade!"

Sample Input:
Lemons: 5
Sugar: 0

Sample Output:
You can't make lemonade!
*/

//Code:

#include <iostream>
using namespace std;

int main() {
    
    int cups_of_sugar, lemons;

	//Ask for inventory
    cout<< "Lemons: ";
    cin>> lemons;
    cout<< "Sugar: ";
    cin>> cups_of_sugar;

	//Check if ingredients are sufficient
    if(lemons <= 0 || cups_of_sugar <= 0){
        cout<< "You can't make lemonade!";
    }
    
    else {
        cout<< "You're ready to sell lemonade!";
    }
    
    return 0;
}


