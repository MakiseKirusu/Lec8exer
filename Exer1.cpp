#include <iostream>
//--//
class Mother {
public:
    virtual void display() { std::cout << "I'm the mother.\n"; }
};

class Daughter : public Mother {
public:
    void display() override { std::cout << "I'm the daughter.\n"; }
};

int main() {
    Daughter d;
    d.display();
    return 0;
}

