#include<iostream>
using namespace std;

int main(){
    //Display Numbers from 1 to 5
    int i = 1; 

    // while loop from 1 to 5
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }

    //Sum of Positive Numbers Only
    int number;
    int sum = 0;

    // take input from the user 
    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {
        // add all positive numbers
        sum += number;

        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    //do..while
    //Display Numbers from 1 to 5
    int ia = 1; 

    // do...while loop from 1 to 5
    do {
        cout << ia << " ";
        ++ia;
    }
    while (i <= 5);

    //Sum of Positive Numbers Only
    int numbers = 0;
    int sums = 0;

    do {
        sums += numbers;

        // take input from the user
        cout << "Enter a number: ";
        cin >> numbers;
    }
    while (numbers >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sums << endl;
    /*
    // infinite while loop
while(true) {
    // body of the loop
}

// infinite do...while loop

int count = 1;

do {
   // body of loop
} 
while(count == 1);
    */
    return 0;
}