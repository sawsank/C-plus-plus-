/* However, there is another way of passing arguments to a function where the actual values of arguments are not passed.
 Instead, the reference to values is passed.*/
// function that takes value as parameter

void func1(int numVal) {
    // code
}

// function that takes reference as parameter
// notice the & before the parameter
void func2(int &numRef) {
    // code
}

int main() {
    int num = 5;

    // pass by value
    func1(num);

    // pass by reference
    func2(num);

    return 0;
}