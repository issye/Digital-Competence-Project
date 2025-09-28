#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Header Decoration
    cout << "╔══════════════════════════════════════╗\n";
    cout << "║     MALAYSIA FOOD DELIVERY CALC      ║\n";
    cout << "╚══════════════════════════════════════╝\n\n";

    // Input section
    string foodName;
    double foodPrice, distance, deliveryFee, totalCost;
    char freeDelivery;

    cout << "Please enter your order details\n";
    cout << "----------------------------------------\n";

    cout << "Food name: ";
    getline(cin, foodName);

    cout << "Food price (RM): RM ";
    cin >> foodPrice;

    cout << "Distance to delivery (km): ";
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
    cout << "\n╔══════════════════════════════════════╗\n";
    cout << "║              ORDER SUMMARY            ║\n";
    cout << "╚══════════════════════════════════════╝\n";

    cout << left << setw(18) << "Food Item:" << foodName << endl;
    cout << left << setw(18) << "Food Price:" << "RM " << fixed << setprecision(2) << foodPrice << endl;
    cout << left << setw(18) << "Delivery Fee:" << "RM " << fixed << setprecision(2) << deliveryFee << endl;
    cout << "----------------------------------------\n";
    cout << left << setw(18) << "TOTAL:" << "RM " << fixed << setprecision(2) << totalCost << endl;
    cout << "----------------------------------------\n";
    cout << "Thank you for ordering with us!\n";
    cout << "Your food is on the way!\n";
    cout << "----------------------------------------\n";

    return 0;
}
