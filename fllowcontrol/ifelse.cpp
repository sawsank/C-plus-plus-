#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // checks if the number is positive
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    cout << "This statement is always executed.";

    //if...else Statement
     if (number >= 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    else {
        cout << "You entered a negative integer: " << number << endl;
    }
    cout << "This line is always printed.";
    
    //if...else...else if statement
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    } 
else if (number < 0) {
      cout << "You entered a negative integer: " << number << endl;
     } 
else {
        cout << "You entered 0." << endl;
    }
     cout << "This line is always printed.";
     
     //Nested if
    // outer if condition
    if (number != 0) {
        
        // inner if condition
        if ((number % 2) == 0) {
            cout << "The number is even." << endl;
        }
         // inner else condition
        else {
            cout << "The number is odd." << endl;
        }  
    }
    // outer else condition
    else {
        cout << "The number is 0 and it is neither even nor odd." << endl;
    }
    cout << "This line is always printed." << endl;
    return 0;
}