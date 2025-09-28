#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string foodName;
    double foodPrice, distance, deliveryFee, totalCost;
    char freeDelivery;

    cout << "=== Malaysia Food Delivery Calculator ===\n\n";

    cout << "Enter food name: ";
    getline(cin, foodName);

    cout << "Enter food price (RM): RM ";
    cin >> foodPrice;

    cout << "Enter distance to delivery (km): ";
    cin >> distance;

    cout << "Do you have free delivery voucher? (y/n): ";
    cin >> freeDelivery;

    // Delivery fee logic
    if (freeDelivery == 'y' || freeDelivery == 'Y') {
        deliveryFee = 0.0;
    } else {
        deliveryFee = 4.0 + (1.0 * distance);
    }

    totalCost = foodPrice + deliveryFee;

    // Output section
    cout << "\n--- Order Summary ---\n";
    cout << left << setw(18) << "Food Item:" << foodName << endl;
    cout << left << setw(18) << "Food Price:" << "RM " << fixed << setprecision(2) << foodPrice << endl;
    cout << left << setw(18) << "Delivery Fee:" << "RM " << fixed << setprecision(2) << deliveryFee << endl;
    cout << left << setw(18) << "TOTAL:" << "RM " << fixed << setprecision(2) << totalCost << endl;
    cout << "----------------------\n";
    cout << "Thank you for ordering.\n";

    return 0;
}
