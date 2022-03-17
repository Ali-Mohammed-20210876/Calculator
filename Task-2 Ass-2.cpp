// hello programmer this is a small calculator I made for calc the (+ _ * ? ^ and sqrt)
//made by Ali Mohammed
// an Iraqi developer
//ID: 20210876
// For Assignment 2 task-2 to FCAI Cairo University in Egypt


#include <iostream>
#include <cmath>


// to write it just a once
using namespace std;
int main() {
    // the operator (+ _ * ? ^ and sqrt)
    char op;
    
    // number 1 and 2
    int num1, num2;
    
    // welcome messege and how to use the calc
    cout << " Ahlan ya user ya Habibi \n"
            "I am number calc \n"
            "Please enter the math problem to solve\n"
            "\n"
            "Note :\n"
            " +  addition \n"
            "- subtracting \n"
            "/ dividing\n"
            "* multiply\n"
            "% modelos\n"
            "^ power\n"
            "s sqrt\n";
    
    // input 
    cout << "enter a number and then an operator and then a number : \n ";
    cin >> num1 >> op >> num2;

// using break for make only one switch then stop
    switch (op) {
        
// if the op is [+] it' s add
        case '+':
            cout << "The value of " << num1  << " + " << num2 << " = " << num1 + num2;
            break;
            
            
// if the op is [-] it' s subtract
        case '-':
            cout << "The value of " << num1  << " - " << num2 << " = " << num1 - num2;
            break;


// if the op is [/] it' s divide
        case '/':
            cout << "The value of " << num1  << " / " << num2 << " = " << num1 / num2;
            break;

// if the op is [*] it' s power
        case '*':
            cout << "The value of " << num1  << " * " << num2 << " = " << num1 * num2;
            break;

// if the op is [%] it' s modelos
        case '%':
            cout << "The value of " << num1  << " % " << num2 << " = " << num1 % num2;
            break;


// if the op is [^] it's power
        case '^':
            cout << "The value of " << num1  << " ^ " << num2 << " = " << pow(num1, num2);
            break;

// if the op is [+] it' s square root
        case 's':
            cout << "The sqrt of  " << num1 << ": = " << sqrt(num1) << "\n" << "The sqrt of : " << num2 << ": = " << sqrt(num2);


    }

}