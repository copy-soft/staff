#include <iostream>
#include <string>

// Component (Coffee) interface
class Coffee {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

// Concrete Component (Basic Coffee)
class BasicCoffee : public Coffee {
public:
    std::string getDescription() const override {
        return "Basic Coffee";
    }

    double cost() const override {
        return 2.00;
    }
};

// Decorator (Base class for decorators)
class CoffeeDecorator : public Coffee {
protected:
    Coffee* coffee;

public:
    CoffeeDecorator(Coffee* c) : coffee(c) {}

    virtual std::string getDescription() const override {
        return coffee->getDescription();
    }

    virtual double cost() const override {
        return coffee->cost();
    }

    virtual ~CoffeeDecorator() {
        delete coffee;
    }
};

// Concrete Decorator (Milk)
class Milk : public CoffeeDecorator {
public:
    Milk(Coffee* c) : CoffeeDecorator(c) {}

    std::string getDescription() const override {
        return coffee->getDescription() + ", Milk";
    }

    double cost() const override {
        return coffee->cost() + 0.50;
    }
};

// Concrete Decorator (Sugar)
class Sugar : public CoffeeDecorator {
public:
    Sugar(Coffee* c) : CoffeeDecorator(c) {}

    std::string getDescription() const override {
        return coffee->getDescription() + ", Sugar";
    }

    double cost() const override {
        return coffee->cost() + 0.25;
    }
};


// Concrete Decorator (WhippedCream)
class WhippedCream : public CoffeeDecorator {
public:
    WhippedCream(Coffee* c) : CoffeeDecorator(c) {}

    std::string getDescription() const override {
        return coffee->getDescription() + ", Whipped Cream";
    }

    double cost() const override {
        return coffee->cost() + 1.00;
    }
};

// Client code
int main() {
    Coffee* coffee = new BasicCoffee();
    std::cout << coffee->getDescription() << " - $" << coffee->cost() << std::endl;

    coffee = new Milk(coffee);
    std::cout << coffee->getDescription() << " - $" << coffee->cost() << std::endl;

    coffee = new Sugar(coffee);
    std::cout << coffee->getDescription() << " - $" << coffee->cost() << std::endl;

    coffee = new WhippedCream(coffee);
    std::cout << coffee->getDescription() << " - $" << coffee->cost() << std::endl;

    delete coffee; // Clean up

    return 0;
}



