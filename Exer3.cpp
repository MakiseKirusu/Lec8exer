#include <iostream>
#include <string>
//--//
class Student {
    std::string name, major, id;
    int year{};
    double gpa{};
public:
    Student(std::string n, std::string m, std::string i,
            int y, double g)
        : name(std::move(n)), major(std::move(m)),
          id(std::move(i)), year(y), gpa(g) {}

    void display() const {
        std::cout << "Name : " << name   << '\n'
                  << "ID   : " << id     << '\n'
                  << "Major: " << major  << '\n'
                  << "Year : " << year   << '\n'
                  << "GPA  : " << gpa    << '\n';
    }
};

int main() {
    Student me("Nguyen Triet", "Computer Science", "10423180",
               2, 2.0);
    me.display();
    return 0;
}
