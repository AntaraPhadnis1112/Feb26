#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks;

public:
    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    Student(int r, string n, int m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        marks = 0;
    }
    void printDetails() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {

    Student s1;
    s1.printDetails();

    Student s2(101, "Antara", 95);
    Student s3(102, "Ravi", 88);
    s2.printDetails();
    s3.printDetails();

    Student s4(103, "Sneha");
    s4.printDetails();

    return 0;
}
/*
1- When does compiler generate a default constructor?
If no constructor is defined by the programmer, the compiler automatically generates a default constructor.

2-When does it NOT generate one?
If you define any constructor (parameterized or otherwise), the compiler does not generate a default constructor.

3-Can constructors be overloaded?
Yes, constructors can be overloaded; you can have multiple constructors with different parameters in the same class.
*/