#include <iostream>
#include<string>
#include <vector>
using namespace std;


class Product {
protected:
    string name;
    float price;

public:
    void set_products() {
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product price: ";
        cin >> price;
        cin.ignore();
    }

    void display(){
        cout << "Product Name: " << name <<endl<< " Price: $" << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    cin.ignore();

    vector<Product> products(n); 
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for Product " << i + 1 << ":" << endl;
        products[i].set_products();
    }
    cout << "--- Product List ---"<<endl;
    for (int i = 0; i < n; ++i) {
        cout << "Product " << i + 1 << ": "<<endl;
        products[i].display();
    }

    return 0;
}