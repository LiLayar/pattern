#include <iostream>
using namespace std;

// Abstract Product
class Product {
public:
    virtual void use() = 0;
};

// Concrete Product A
class ConcreteProductA : public Product {
public:
    void use() {
        cout << "Using Concrete Product A" << endl;
    }
};

// Concrete Product B
class ConcreteProductB : public Product {
public:
    void use() {
        cout << "Using Concrete Product B" << endl;
    }
};

// Factory
class Factory {
public:
    virtual Product* createProduct() = 0;
};

// Concrete Factory A
class ConcreteFactoryA : public Factory {
public:
    Product* createProduct() {
        return new ConcreteProductA();
    }
};

// Concrete Factory B
class ConcreteFactoryB : public Factory {
public:
    Product* createProduct() {
        return new ConcreteProductB();
    }
};

int main() {
    // Create Factory A
    Factory* factoryA = new ConcreteFactoryA();
    // Create Product A
    Product* productA = factoryA->createProduct();
    // Use Product A
    productA->use();

    // Create Factory B
    Factory* factoryB = new ConcreteFactoryB();
    // Create Product B
    Product* productB = factoryB->createProduct();
    // Use Product B
    productB->use();

    return 0;
}