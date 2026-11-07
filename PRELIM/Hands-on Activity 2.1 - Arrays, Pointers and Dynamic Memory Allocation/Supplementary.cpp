#include <iostream>
#include <iomanip>
#include <string>

class GroceryItem {
protected:
    std::string itemName;
    double unitPrice;
    int itemQuantity;

public:
    GroceryItem(const std::string& itemName = "", double unitPrice = 0, int itemQuantity = 0)
        : itemName(itemName), unitPrice(unitPrice), itemQuantity(itemQuantity) {}
    
	GroceryItem(const GroceryItem& other)
        : itemName(other.itemName),
          unitPrice(other.unitPrice),
          itemQuantity(other.itemQuantity) {}

    GroceryItem& operator=(const GroceryItem& other) {
        if (this != &other) {
            itemName = other.itemName;
            unitPrice = other.unitPrice;
            itemQuantity = other.itemQuantity;
        } 
		return *this;
    }

    virtual ~GroceryItem() {}

    double calculateSum() const {
        return unitPrice * itemQuantity;
    }

    virtual std::string getType() const = 0;

    virtual void display() const {
        std::cout << std::left << std::setw(12) << getType()
                  << std::setw(15) << itemName << std::setw(10) 
				  << ("PHP " + std::to_string((int)unitPrice))
                  << std::setw(8) << ("x" + std::to_string(itemQuantity))
                  << "PHP " << calculateSum() << std::endl;
    }
};

class Fruit : public GroceryItem {
public:
    Fruit(const std::string& itemName, double unitPrice, int itemQuantity)
        : GroceryItem(itemName, unitPrice, itemQuantity) {}

    Fruit(const Fruit& other)
        : GroceryItem(other) {}

    Fruit& operator=(const Fruit& other) {
        GroceryItem::operator=(other);
        return *this;
    }

    std::string getType() const override {
        return "Fruit";
    }

    ~Fruit() override {
        std::cout << "Fruit \"" << itemName << "\" deleted." << std::endl;
    }
};

class Vegetable : public GroceryItem
{
public:
    Vegetable(const std::string& itemName, double unitPrice, int itemQuantity)
        : GroceryItem(itemName, unitPrice, itemQuantity) {}

    Vegetable(const Vegetable& other)
        : GroceryItem(other) {}

    Vegetable& operator=(const Vegetable& other) {
        GroceryItem::operator=(other);
        return *this;
    }

    std::string getType() const override {
        return "Vegetable";
    }

    ~Vegetable() override {
        std::cout << "Vegetable \"" << itemName << "\" deleted." << std::endl;
    }
};

double totalSum(GroceryItem* groceryList[], int listSize)
{
    double total = 0;

    for (int index = 0; index < listSize; index++) {
        if (groceryList[index] != nullptr) {
            total += groceryList[index]->calculateSum();
        }
    }

    return total;
}

void lines() {
    for (int i = 0; i < 61; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void displayList(GroceryItem* groceryList[], int listSize) {
    lines();
    std::cout << "\t\t    JENNA'S GROCERY LIST" << std::endl;
    lines();

    std::cout << std::left
              << std::setw(12) << "Type" << std::setw(15) << "Item"
              << std::setw(10) << "Price" << std::setw(8) << "Qty"
              << "Subtotal" << std::fixed << std::setprecision(2) << std::endl;
    lines();

    for (int index = 0; index < listSize; index++) {
        if (groceryList[index] != nullptr) {
            groceryList[index]->display();
        }
    }

    lines();
    std::cout << "Total Amount: PHP "
              << std::fixed << std::setprecision(2)
              << totalSum(groceryList, listSize) << std::endl;
    lines();
    std::cout << std::endl;
}

int main() {
    const int LIST_SIZE = 4;

    GroceryItem* groceryList[LIST_SIZE];

    groceryList[0] = new Fruit("Apple", 10, 7);
    groceryList[1] = new Fruit("Banana", 10, 8);
    groceryList[2] = new Vegetable("Broccoli", 60, 12);
    groceryList[3] = new Vegetable("Lettuce", 50, 10);

    std::cout << "=================== INITIAL GROCERY LIST ====================" 
				<< std::endl << std::endl;

    displayList(groceryList, LIST_SIZE);

    std::cout << "- Deleting Lettuce..." << std::endl;
    std::cout << "- ";

    delete groceryList[3];
    groceryList[3] = nullptr;

    std::cout << std::endl << std::endl 
				<< "=================== UPDATED GROCERY LIST ====================" 
				<< std::endl << std::endl;

    displayList(groceryList, LIST_SIZE);

    for (int index = 0; index < LIST_SIZE - 1; index++) {
        std::cout << "- ";
		delete groceryList[index];
        groceryList[index] = nullptr;
    }
    std::cout << std::endl;

    return 0;
}