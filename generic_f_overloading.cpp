#include <iostream>
using namespace std;

// Generic function for percentage-based discount
template <typename T>
T applyDiscount(T price, double discountPercentage) {
    return price - (price * discountPercentage / 100);
}

// Overloaded function for fixed amount discount
double applyDiscount(double price, double discountAmount, bool isFixed) {
    return price - discountAmount;
}

// Overloaded function for VIP customers (Extra 5% discount)
template <typename T>
T applyDiscount(T price, double discountPercentage, string customerType) {
    if (customerType == "VIP") {
        discountPercentage += 5;  // Extra 5% discount for VIPs
    }
    return price - (price * discountPercentage / 100);
}

int main() {
    double price1 = 100.0;
    int price2 = 200;

    cout << "Original Price: $" << price1 << endl;
    cout << "After 10% Discount: $" << applyDiscount(price1, 10.0) << endl;
    cout << "After $15 Fixed Discount: $" << applyDiscount(price1, 15.0, true) << endl;
    cout << "After 10% Discount for VIP: $" << applyDiscount(price1, 10.0, "VIP") << endl;

    cout << "\nOriginal Price: $" << price2 << endl;
    cout << "After 20% Discount: $" << applyDiscount(price2, 20.0) << endl;
    cout << "After 20% Discount for VIP: $" << applyDiscount(price2, 20.0, "VIP") << endl;

    return 0;
}
/*
Original Price: $100
After 10% Discount: $90
After $15 Fixed Discount: $85
After 10% Discount for VIP: $85

Original Price: $200
After 20% Discount: $160
After 20% Discount for VIP: $150

*/