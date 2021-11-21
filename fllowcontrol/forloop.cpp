#include<iostream>
using namespace std;

int main(){
    //Printing Numbers From 1 to 5
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    //Display a text 5 times
    for (int i = 1; i <= 5; ++i) {
        cout <<  "Hello World! " << endl;
    }
    //Find the sum of first n Natural Numbers
    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    //Range Based for Loop enabled since c++11
    /*int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }
  
 // infinite for loop
for(int i = 1; i > 0; i++) {
    cout<<"hi";
}*/
    return 0;
}