#include <iostream>

class Animal {
public:
    virtual void speak() {
        printf("Hello world!\n");
    }
};

class Dog: public Animal {
public:
    void speak() override {
        printf("ruff\n");
    }
};

class Cat: public Animal {
public:
    void speak() override {
        printf("meow\n");
    }
};

int main() {
    Animal* kitpes[2];

    kitpes[0] = new Cat();
    kitpes[1] = new Dog();

    for (int i = 0; i < 2; i++) {
        kitpes[i]->speak();
    }

    return 0;
}