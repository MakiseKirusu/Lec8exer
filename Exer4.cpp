#include <iostream>
#include <string>
//----//
class Person {
    int age{};
public:
    void Greet() const { std::cout << "Hello!\n"; }
    void SetAge(int n) { age = n; }
    int  GetAge() const { return age; }
};

class Student : public Person {
public:
    void GoToClasses() const { std::cout << "I'm going to class.\n"; }
    void ShowAge()     const {
        std::cout << "My age is: " << GetAge() << " years old.\n";
    }
};

class Teacher : public Person {
    std::string subject;
public:
    void SetSubject(const std::string& s) { subject = s; }
    void Explain() const { std::cout << "Explanation begins.\n"; }
};

class StudentAndTeacherTest {
public:
    static int main() {
        Person p;
        p.Greet();

        Student s;
        s.SetAge(21);
        s.Greet();
        s.ShowAge();
        s.GoToClasses();

        Teacher t;
        t.SetAge(30);
        t.SetSubject("OOP");
        t.Greet();
        t.Explain();

        return 0;
    }
};

int main() { return StudentAndTeacherTest::main(); }
