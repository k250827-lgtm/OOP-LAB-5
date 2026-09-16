#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    const int productCode;
    string productName;
    int quantity;
    static int warehouseCapacity;

public:
    Product(int code, string name, int qty)
        : productCode(code),
          productName(name),
          quantity(qty) {
    }

    void setProductName(string name) {
        productName = name;
    }

    string getProductName() const {
        return productName;
    }

    void setQuantity(int qty) {
        quantity = qty;
    }

    int getQuantity() const {
        return quantity;
    }

    static int getWarehouseCapacity() {
        return warehouseCapacity;
    }

    void display() const {
        cout << "Product Code: " << productCode << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Warehouse Capacity: "
             << warehouseCapacity << endl;
    }

    ~Product() {
        cout << "Product " << productCode
             << " has been removed from inventory." << endl;
    }
};

int Product::warehouseCapacity = 1000;

int main() {
    Product p1(501, "Laptop", 20);
    Product p2(502, "Keyboard", 50);

    p1.display();
    cout << endl;
    p2.display();

    cout << "\nWarehouse Capacity: "
         << Product::getWarehouseCapacity() << endl;

    return 0;
}

