#include <iostream>
#include <memory>

class Animal {
public:
    virtual void walk() = 0;
};

class Cat : public Animal {
public:
    void walk() override {
        std::cout << "Cat walking..." << std::endl;
    }
};

class Dog : public Animal {
public:
    void walk() override {
        std::cout << "Dog walking..." << std::endl;
    }
};

int main() {
    auto cat = std::make_unique<Cat>();
    auto dog = std::make_unique<Dog>();
    cat->walk();
    dog->walk();
    return 0;
}
