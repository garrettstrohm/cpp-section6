
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    int small_rooms;
    int large_rooms;
    int small_room_cost;
    int large_room_cost;
    double cost;
    double tax;
    double total;
    
    small_room_cost = 25;
    large_room_cost = 35;
    cost = (small_room_cost * small_rooms) + (large_room_cost * large_rooms);
    tax = 6.6;
    total = cost * tax;
    
    
    cout << "Number of small rooms: ";
    cin >> small_rooms;
    cout << "Number of large rooms: ";
    cin >> large_rooms;
    
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << small_room_cost << endl;
    cout << "Price per large room: $" << large_room_cost << endl;
    cout << "Cost : $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    return 0;
}

