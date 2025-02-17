#include <iostream>
#include <string>

// Component (Coffee) interface
class Ака {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

// Concrete Component (Basic Coffee)
class disassembledАка : public Ака {
public:
    std::string getDescription() const override {
        return "ака разобранный";
    }

    double cost() const override {
        return 2.00;
    }
};

// Decorator (Base class for decorators)
class АкаДекоратор : public Ака {
protected:
    Ака* ak;

public:
    АкаДекоратор(Ака* c) : ak(c) {}

    virtual std::string getDescription() const override {
        return ak->getDescription();
    }

    virtual double cost() const override {
        return ak->cost();
    }

    virtual ~АкаДекоратор() {
        delete ak;
    }
};

// Concrete Decorator (Milk)
class Магазин : public АкаДекоратор {
public:
    Магазин(Ака* c) : АкаДекоратор(c) {}

    std::string getDescription() const override {
        return ak->getDescription() + ", Магазин";
    }

    double cost() const override {
        return ak->cost() + 0.50;
    }
};

// Concrete Decorator (Sugar)
class ДульныйТормозКомпенсатор : public АкаДекоратор {
public:
    ДульныйТормозКомпенсатор(Ака* c) : АкаДекоратор(c) {}

    std::string getDescription() const override {
        return ak->getDescription() + ", ДульныйТормозКомпенсатор";
    }

    double cost() const override {
        return ak->cost() + 0.25;
    }
};


// Concrete Decorator (WhippedCream)
class WhippedCream : public АкаДекоратор {
public:
    WhippedCream(Ака* c) : АкаДекоратор(c) {}

    std::string getDescription() const override {
        return ak->getDescription() + ", Whipped Cream";
    }

    double cost() const override {
        return ak->cost() + 1.00;
    }
};

// Client code
int main() {
    Ака* ak = new disassembledАка();
    std::cout << ak->getDescription() << std::endl;

    ak = new Магазин(ak);
    std::cout << ak->getDescription() << std::endl;

    ak = new ДульныйТормозКомпенсатор(ak);
    std::cout << ak->getDescription() << std::endl;

    //coffee = new WhippedCream(coffee);
    //std::cout << coffee->getDescription() << " - $" << coffee->cost() << std::endl;

    delete ak; // Clean up

    return 0;
}



