#include <iostream>

// Abstract Product A
class AbstractProductA {
public:
    virtual void operationA() = 0;
};

// Concrete Product A1
class ConcreteProductA1 : public AbstractProductA {
public:
    void operationA() override {
        std::cout << "Concrete Product A1 operation A" << std::endl;
    }
};

// Concrete Product A2
class ConcreteProductA2 : public AbstractProductA {
public:
    void operationA() override {
        std::cout << "Concrete Product A2 operation A" << std::endl;
    }
};

// Abstract Product B
class AbstractProductB {
public:
    virtual void operationB() = 0;
};

// Concrete Product B1
class ConcreteProductB1 : public AbstractProductB {
public:
    void operationB() override {
        std::cout << "Concrete Product B1 operation B" << std::endl;
    }
};

// Concrete Product B2
class ConcreteProductB2 : public AbstractProductB {
public:
    void operationB() override {
        std::cout << "Concrete Product B2 operation B" << std::endl;
    }
};

// Abstract Factory
class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

// Concrete Factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA1();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB1();
    }
};

// Concrete Factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA2();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB2();
    }
};

int main() {
    // Create Concrete Factory 1
    AbstractFactory* factory1 = new ConcreteFactory1();

    // Create Concrete Product A1
    AbstractProductA* productA1 = factory1->createProductA();
    productA1->operationA();

    // Create Concrete Product B1
    AbstractProductB* productB1 = factory1->createProductB();
    productB1->operationB();

    // Create Concrete Factory 2
    AbstractFactory* factory2 = new ConcreteFactory2();

    // Create Concrete Product A2
    AbstractProductA* productA2 = factory2->createProductA();
    productA2->operationA();

    // Create Concrete Product B2
    AbstractProductB* productB2 = factory2->createProductB();
    productB2->operationB();

    return 0;
}