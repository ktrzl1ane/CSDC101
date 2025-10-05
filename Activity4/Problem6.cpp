/*
Problem 6: Switch problem 1 to 5
Combine all problems using switch statement

Sample Input:
What problem do you want to see? 1

Sample Output:
*Basic pricing Decision Runs*
*/

//Code:

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float money;
    int temperature;
    int cups_of_sugar, lemons;
    float cups, original_price, discount, final_price;
    char option;
    
    cout<< "Press 1 for Basic Pricing Decision"<< endl;
    cout<< "Press 2 for Weather-Based Discounts"<< endl;
    cout<< "Press 3 for Inventory Check"<< endl;
    cout<< "Press 4 for Bulk Purchase Discount"<< endl;
    cout<< "Press 5 for Player Movement"<< endl;
    cout<< "----------------------------------------------"<< endl;
    
    cout<< "What problem do you want to see? ";
    cin>> choice;
    
    switch(choice) {
        
        case 1:
            cout<< "\nEnter your money: ";
            cin>> money;
    
            if (money >= 1) {
                cout<< "Enjoy your lemonade!";
            }
    
            else {
                cout<< "Sorry, you need more money.";
            }
        break;
        
        case 2:
            cout<< "\nEnter today's temperature in Celsius: ";
            cin>> temperature;
    
            if(temperature >= 30) {
                cout<< "It's hot! Lemonade costs $0.80 today.";
            }
    
            else {
                cout<< "The Lemonade costs $1.00.";
            }
        break;
        
        case 3:
            cout<< "\nLemons: ";
            cin>> lemons;
            cout<< "Sugar: ";
            cin>> cups_of_sugar;
    
            if(lemons <= 0 || cups_of_sugar <= 0){
                cout<< "You can't make lemonade!";
            }
    
            else {
                cout<< "You're ready to sell lemonade!";
            }
        break;
        
        case 4:
            cout<< "\nHow many cups? ";
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
        break;
        
        case 5:
            cin>> option;
    
            switch(option) {
        
                case 'W':
                    cout<< "The location of the player is (0, 1).";
                break;
        
                case 'S':
                    cout<< "The location of the player is (0, -1).";
                break;
        
                case 'A':
                    cout<< "The location of the player is (-1, 0).";
                break;
        
                case 'D':
                    cout<< "The location of the player is (1, 0).";
                break;
                
                default:
                cout<< "Invalid input.";
            }
        break;
        
        default: 
            cout<< "Invalid input.";
        break;   
    }

    return 0;
}
