#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}
/*
C++ override Identifier

C++ 11 has given us a new identifier override that is very useful to avoid bugs while using virtual functions.

This identifier specifies the member functions of the derived classes that override the member function of the base class.

For example,

class Base {
   public:
    virtual void print() {
        // code
    }
};

class Derived : public Base {
   public:
    void print() override {
        // code
    }
};
If we use a function prototype in Derived class and define that function outside of the class, then we use the following code:

class Derived : public Base {
   public:
    // function prototype
    void print() override;
};

// function definition
void Derived::print() {
    // code
}
Use of C++ override

When using virtual functions, it is possible to make mistakes while declaring the member functions of the derived classes.

Using the override identifier prompts the compiler to display error messages when these mistakes are made.

Otherwise, the program will simply compile but the virtual function will not be overridden.

Some of these possible mistakes are:

Functions with incorrect names: For example, if the virtual function in the base class is named print(), but we accidentally name the overriding function in the derived class as pint().
Functions with different return types: If the virtual function is, say, of void type but the function in the derived class is of int type.
Functions with different parameters: If the parameters of the virtual function and the functions in the derived classes don't match.
No virtual function is declared in the base class.*/
