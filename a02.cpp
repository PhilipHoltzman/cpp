// a02
// Philip Holtzman
//Sources: None.

#include <iostream>
#include <iomanip>



using namespace std;

int main() {

    string empName;
    float hourlyWage;
    float hoursPerWeek;
    float taxPercentage;
    float grossPay;
    float taxWithheld;
    float netPay;


    // header
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "         Paycheck Calculator       " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;


    cout << "Please enter the employees name: " << endl;
    getline(cin, empName);
    cout << endl;

    cout << "Please enter hourly wage: " << endl;
    cin >> hourlyWage;
    cout << endl;

    cout << "Please enter the amount of hours worked this week: " << endl;
    cin >> hoursPerWeek;
    cout << endl;

    cout << "What percentage does employee pay in taxes: " << endl;
    cin >> taxPercentage;
    cout << endl;

    // calculating variables
    grossPay = hoursPerWeek * hourlyWage;
    taxWithheld = taxPercentage * grossPay;
    netPay = grossPay - taxWithheld;


    // These rows are very finnicky depending on the length of the name of the employee

    cout << setw(8) << "Employee"
         << setw(12) << "Wage"
         << setw(12) << "Hours"
         << setw(12) << "Gross Pay"
         << setw(12) << "Tax%"
         << setw(18) << "Tax Withheld"
         << setw(12) << "Net Pay"
         << endl;


    cout << endl;
    cout << fixed << showpoint << setprecision(2)
         << setw(10) << empName
         << setw(12) << hourlyWage
         << setw(12) << hoursPerWeek
         << setw(12) << grossPay
         << setw(12) << taxPercentage
         << setw(12) << taxWithheld
         << setw(18) << netPay
         << endl;

    return 0;
}