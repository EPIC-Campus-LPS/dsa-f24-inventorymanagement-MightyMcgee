#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Item{
private:
    string name;
    int quantity;
    double price;
public:
    Item(string n, int q, double p) : name(n), quantity(q), price(p) {}
    void displayItem(){
        cout << "Name: " << name << "\nQuantity: " << quantity << "\nPrice: " << price << endl;
    }
    void addItem(int amount){
        quantity = quantity+amount;
    }
    void removeItem(int amount){
        quantity = quantity-amount;
    }
    double calculateTotalValue(){
        cout << quantity*price;
    }
};
class Inventory{
private:
    vector<Item> items;
    int itemCount;
public:
    Inventory() {}
    void addItem(const Item& newItem){
        items.push_back(item);
    }
};
int main() {
    Item A("a",1,1.99);
    A.displayItem();
    A.addItem(1);
    A.displayItem();
    A.removeItem(1);
    A.displayItem();
    A.calculateTotalValue();
    return 0;
}