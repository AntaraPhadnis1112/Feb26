#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    const int employeeId;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {}

    void display() {
        cout << "Employee ID: " << employeeId
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Antara", 50000.0f);
    e1.display();

    Employee e2(102, "Prajakta", 60000.0f);
    e2.display();

    return 0;
}
/*
1-Why must const members be initialized in initializer list?
Const members cannot be assigned later; they must get a value at the time of creation.

2-What happens if you try to assign the value of a const member inside constructor body?
It causes a compile-time error, because const members cannot be modified after creation.

3-Why is initializer list faster than assignment?
The initializer list directly initializes members, whereas assignment first creates default values and then changes them, which is less efficient.

*/