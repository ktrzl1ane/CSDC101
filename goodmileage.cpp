#include<iostream>// input and output library
using namespace std;// standard namespace for cin and cout

int main() {

    int gallons_used, starting_mileage,
        ending_mileage, distance_driven,
        average_miles_per_gallon;// define numeric values as variables

    cout<<"Enter gallons used: ";// output gallons used
    cin>> gallons_used;// get values for gallons used

    cout<<"Enter starting mileage: ";// output starting mileage
    cin>> starting_mileage; // get values for starting mileage

    cout<<"Enter ending mileage: ";// output ending mileage
    cin>> ending_mileage;// get values for ending mileage

    distance_driven = ending_mileage - starting_mileage;// set the value of distance driven as ending mileage - starting mileage

    average_miles_per_gallon = distance_driven / gallons_used;// set the value of average miles per galon as distance driven /  gallons used

cout<<"The average miles per gallon is: " << average_miles_per_gallon<< endl;// output average miles per gallon

//check for condition
if(average_miles_per_gallon > 25){
    cout<<"You are getting good gas mileage";//print if condition is met
}

else
    cout<<"You are NOT getting good gas mileage";//print if the condition is not met
    
}   
