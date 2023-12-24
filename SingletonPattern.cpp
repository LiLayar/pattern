class Singleton {
private:
    static Singleton* instance;

    // Private constructor to prevent instantiation
    Singleton() {}

public:
    // Static method to get the instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }
};

// Initializing the instance to nullptr
Singleton* Singleton::instance = nullptr;