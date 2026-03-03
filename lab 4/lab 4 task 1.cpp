muhammad qadeer khan
etea id 06067
#include <iostream>   
using namespace std; 

int main() {
    
    int day;  

    cout << "Enter a number between 1 and 7: ";
    cin >> day;   // User enters the number

    // Switch statement checks the value of day
    switch(day) {

        case 1:
            cout << "Monday";
            break;   // Stop here

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid number! Please enter between 1 and 7.";
            // This runs if user enters wrong number
    }

    return 0;   // Program ends successfully
}
