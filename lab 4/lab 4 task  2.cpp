muhammad qadeer khan
etea id 06067
#include <iostream>   // This is used for input and output
using namespace std;  // This allows us to use cout and cin

int main() 
{
    char grade;   // This variable will store the grade

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;   // Take grade input from user

    // Switch statement checks the grade
    switch(grade)
    {
        case 'A':   // If grade is A
            cout << "Excellent";
            break;  // Stop here

        case 'B':   // If grade is B
            cout << "Very Good";
            break;

        case 'C':   // If grade is C
            cout << "Good";
            break;

        case 'D':   // If grade is D
            cout << "Pass";
            break;

        case 'F':   // If grade is F
            cout << "Fail";
            break;

        default:    // If any other letter is entered
            cout << "Invalid Grade";
    }

    return 0;   // Program ends successfully
}
