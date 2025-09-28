#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    // === Malaysia Food Delivery Calculator ===
    // Calculates total delivery cost based on food price, distance, and voucher.

    string foodName;
    double foodPrice = 0.0, distance = 0.0, deliveryFee, totalCost;
    char freeDelivery;

    // --- Input Section ---
    cout << "=== Malaysia Food Delivery Calculator ===\n\n";

    cout << "Enter food name: ";
    getline(cin, foodName); // input food name (supports spaces)

    // Food price input with validation
    while (true) {
        cout << "Enter food price (RM): RM ";
        cin >> foodPrice;
        if (!cin.fail() && foodPrice >= 0) break;

        cout << "Invalid input! Please enter a valid number.\n";
        cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }

    // Distance input with validation
    while (true) {
        cout << "Enter distance to delivery (km): ";
        cin >> distance;
        if (!cin.fail() && distance >= 0) break;

        cout << "Invalid input! Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Voucher input with validation
    do {
        cout << "Do you have free delivery voucher? (y/n): ";
        cin >> freeDelivery;

        if (freeDelivery != 'y' && freeDelivery != 'Y' &&
            freeDelivery != 'n' && freeDelivery != 'N') {
            cout << "Invalid choice! Please enter 'y' or 'n'.\n";
        }
    } while (freeDelivery != 'y' && freeDelivery != 'Y' &&
             freeDelivery != 'n' && freeDelivery != 'N');

    // --- Delivery Fee Logic ---
    if (freeDelivery == 'y' || freeDelivery == 'Y') {
        deliveryFee = 0.0; // free delivery
    } else {
        deliveryFee = 4.0 + (1.0 * distance); // RM 4 base + RM 1/km
    }

    totalCost = foodPrice + deliveryFee;

    // --- Output Section ---
    cout << "\n--- Order Summary ---\n";
    cout << left << setw(18) << "Food Item:" << foodName << endl;
    cout << left << setw(18) << "Food Price:" << "RM "
         << fixed << setprecision(2) << foodPrice << endl;
    cout << left << setw(18) << "Delivery Fee:" << "RM "
         << fixed << setprecision(2) << deliveryFee << endl;
    cout << left << setw(18) << "TOTAL:" << "RM "
         << fixed << setprecision(2) << totalCost << endl;
    cout << "----------------------\n";
    cout << "Thank you for ordering.\n";

    return 0;
}
