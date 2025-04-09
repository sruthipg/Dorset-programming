#include <iostream>
#include <string>
using namespace std;

// Template class for Inventory
template <typename T>
class Inventory {
private:
    T item;
    int quantity;

public:
    Inventory(T i, int q) : item(i), quantity(q) {}

    void displayItem() {
        cout << "Item: " << item << ", Quantity: " << quantity << endl;
    }

    void updateQuantity(int q) {
        quantity += q;
        cout << "Updated Quantity: " << quantity << endl;
    }
};

// Clothes class
class Clothes {
private:
    string type;
    string size;

public:
    Clothes(string t, string s) : type(t), size(s) {}

    friend ostream& operator<<(ostream& os, const Clothes& c) {
        os << c.type << " (Size: " << c.size << ")";
        return os;
    }
};

// Food class
class Food {
private:
    string name;
    string expiryDate;

public:
    Food(string n, string e) : name(n), expiryDate(e) {}

    friend ostream& operator<<(ostream& os, const Food& f) {
        os << f.name << " (Expires: " << f.expiryDate << ")";
        return os;
    }
};

// Electronic class
class Electronic {
private:
    string device;
    string brand;

public:
    Electronic(string d, string b) : device(d), brand(b) {}

    friend ostream& operator<<(ostream& os, const Electronic& e) {
        os << e.brand << " " << e.device;
        return os;
    }
};

int main() {
    // Clothes Inventory
    Clothes shirt("T-Shirt", "M");
    Inventory<Clothes> clothesInv(shirt, 30);
    clothesInv.displayItem();
    clothesInv.updateQuantity(10);

    cout << "-----------------------------" << endl;

    // Food Inventory
    Food apple("Apple", "2025-04-10");
    Inventory<Food> foodInv(apple, 100);
    foodInv.displayItem();
    foodInv.updateQuantity(-20);

    cout << "-----------------------------" << endl;

    // Electronics Inventory
    Electronic phone("Smartphone", "Samsung");
    Inventory<Electronic> electronicsInv(phone, 15);
    electronicsInv.displayItem();
    electronicsInv.updateQuantity(5);

    return 0;
}
