#include <iostream>
#include <string>
//--//
class Animal {
protected:
    std::string name;
    int age{};
public:
    void set_value(const std::string& n, int a) { name = n; age = a; }
};

class Zebra : public Animal {
public:
    void show() const {
        std::cout << "Zebra " << name << ", " << age
                  << " years old – native to African savannas.\n";
    }
};

class Dolphin : public Animal {
public:
    void show() const {
        std::cout << "Dolphin " << name << ", " << age
                  << " years old – lives in the Atlantic Ocean.\n";
    }
};

int main() {
    Zebra z; z.set_value("Zed", 5); z.show();
    Dolphin d; d.set_value("Dolly", 8); d.show();
    return 0;
}
