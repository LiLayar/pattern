#include <iostream>
#include <string>

// Abstract base class
class Prototype {
public:
    virtual Prototype* clone() const = 0;
    virtual void printInfo() const = 0;
};

// Concrete class 1
class ConcretePrototype1 : public Prototype {
public:
    Prototype* clone() const override {
        return new ConcretePrototype1(*this);
    }

    void printInfo() const override {
        std::cout << "Concrete Prototype 1" << std::endl;
    }
};

// Concrete class 2
class ConcretePrototype2 : public Prototype {
public:
    Prototype* clone() const override {
        return new ConcretePrototype2(*this);
    }

    void printInfo() const override {
        std::cout << "Concrete Prototype 2" << std::endl;
    }
};

int main() {
    // Create instances of concrete prototypes
    ConcretePrototype1 prototype1;
    ConcretePrototype2 prototype2;

    // Clone the prototypes
    Prototype* clone1 = prototype1.clone();
    Prototype* clone2 = prototype2.clone();

    // Print information about the clones
    clone1->printInfo();
    clone2->printInfo();

    // Clean up memory
    delete clone1;
    delete clone2;

    return 0;
}