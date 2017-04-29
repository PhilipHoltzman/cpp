// Philip Holtzman
// Assignment #3 Ice Cream and Candy Store
// Sources: none

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // constants
    const float CHOC_PRICE = 3.05;
    const float STRAW_PRICE = 3.15;
    const float VAN_PRICE = 2.86;
    const float LOLLYPOP_PRICE = .79;
    const float GUMDROP_PRICE = .65;


    // reg variables
    char flavor_choice;
    int num_scoops;
    int lollypops;
    int gumdrops;
    float icecream_total;
    float lollypop_total;
    float gumdrop_total;
    float final_total;

    // header and user input

    cout << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "          Welcome to Philips Ice Cream and Candy Store" << endl;
    cout << endl;
    cout << "               Chocolate Ice Cream is $3.05" << endl;
    cout << "               Strawberry Ice Cream is $3.15" << endl;
    cout << "               Vanilla Ice Cream is $2.86" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "What flavor would you like? (C)hocolate, (S)trawberry, or (V)anilla: " << endl;
    cin >> flavor_choice;
    cout << endl;

    cout << "How many scoops would you like? " << endl; // this question should really come before the flavor question
    cin >> num_scoops;
    cout << endl;

    cout << "Lollypops are $0.79. How many lollypops would you like?: " << endl;
    cin >> lollypops;
    cout << endl;

    cout << "Gumdrops are $0.65. How many packages would you like?: " << endl;
    cin >> gumdrops;
    cout << endl;

    cout << "---------------------------------------------------------------------" << endl;
    cout << "Thank you for your order: " << endl;

    // Ice Cream Calculations

    if (num_scoops >= 1 && flavor_choice == 'c' || flavor_choice == 'C' ) {
        icecream_total = num_scoops * CHOC_PRICE;
        cout << fixed << showpoint << setprecision(2)
             << num_scoops << " scoops of Chocolate at $3.05, charge  $" << icecream_total << endl;
    }
    else  if (num_scoops >= 1 && flavor_choice == 's' || flavor_choice == 'S' ) {
        icecream_total = num_scoops * STRAW_PRICE;
        cout << fixed << showpoint << setprecision(2)
             << num_scoops << " scoops of Strawberry at $3.15, charge  $" << icecream_total << endl;
    }
    else  if (num_scoops >= 1 && flavor_choice == 'v' || flavor_choice == 'V' ) {
        icecream_total = num_scoops * VAN_PRICE;
        cout << fixed << showpoint << setprecision(2)
             << num_scoops << " scoops of Vanilla at $2.86, charge  $" << icecream_total << endl;
    }
    else
        icecream_total = 0;


    // Lollypop Calculations


    if (lollypops >= 1) {
        lollypop_total = lollypops * LOLLYPOP_PRICE;
        cout << fixed << showpoint << setprecision(2)
             << lollypops << " lollypops at $0.79, charge  $" << lollypop_total << endl;
    }
    else
        lollypop_total = 0;

    // Gumdrop calculation

    if (gumdrops >= 1) {
        gumdrop_total = gumdrops * GUMDROP_PRICE;
        cout << fixed << showpoint << setprecision(2) << gumdrops << " package of gumdrops at $0.65, charge  $" << gumdrop_total << endl;
    }
    else
        gumdrop_total = 0;


    // Total

    final_total = gumdrop_total + lollypop_total + icecream_total;

    cout << endl;
    cout << fixed << showpoint << setprecision(2) << "Total Charge: $" << final_total << endl;


    cout << "---------------------------------------------------------------------" << endl;
    cout << "Thanks for shopping at Philips Candy Shop, Enjoy!!" << endl;
    cout << endl;


    return 0;
}