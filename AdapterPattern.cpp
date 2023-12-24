#include <iostream>

// Target interface
class Target {
public:
    virtual void request() = 0;
};

// Adaptee class
class Adaptee {
public:
    void specificRequest() {
        std::cout << "Adaptee's specific request" << std::endl;
    }
};

// Adapter class
class Adapter : public Target {
private:
    Adaptee* adaptee;

public:
    Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

    void request() override {
        adaptee->specificRequest();
    }
};

// Client code
int main() {
    Adaptee* adaptee = new Adaptee();
    Target* target = new Adapter(adaptee);

    target->request();

    delete target;
    delete adaptee;

    return 0;
}