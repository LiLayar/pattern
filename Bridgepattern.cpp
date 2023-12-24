// Abstraction class
class Abstraction {
protected:
    Implementor* implementor;
public:
    virtual void operation() = 0;
    void setImplementor(Implementor* imp) {
        implementor = imp;
    }
};

// Implementor class
class Implementor {
public:
    virtual void operationImpl() = 0;
};

// Concrete Abstraction class
class ConcreteAbstraction : public Abstraction {
public:
    void operation() override {
        implementor->operationImpl();
    }
};

// Concrete Implementor class
class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() override {
        // Implementation for ConcreteImplementorA
    }
};

// Concrete Implementor class
class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() override {
        // Implementation for ConcreteImplementorB
    }
};