#include <iostream>
// Sources: None.

using namespace std;

int main() {

    const double PRICE = 12.5;
    const int BOX_SIZE = 20;

    float candy_placed_per_min;
    float candy_box_per_min;
    float box_per_hour;
    float price_value;


    cout << endl;
    cout << "------------------------------------------" <<endl;
    cout << "Lucy you got a lotta splainin' to do !!!!!" <<endl;
    cout << "------------------------------------------" <<endl;

    cout << endl;
    cout << "How many candies can Lucy and Ethel place per min? " << endl;
    cout << endl;
    cin >> candy_placed_per_min;

    cout << endl;
    cout << "Based on their performance at " << candy_placed_per_min << " candies placed per minute: "<< endl;

    candy_box_per_min = candy_placed_per_min / BOX_SIZE;

    cout << "They can produce  " << candy_box_per_min << " boxes per minute..  " << endl;

    box_per_hour = candy_box_per_min * 60;

    cout << "Which means " << box_per_hour << " boxes per hour.. " << endl;

    price_value = box_per_hour * PRICE;

    cout << "At " << box_per_hour << " per hour, and at $" << PRICE << " a box, that comes to a total value of: $" <<  price_value << endl;


    return 0;
}