/*
Create a C++ program to model a Student Result System.

Create a base class Student that contains:
A protected data member rollNo
A constructor that initializes rollNo
A virtual function display() that prints the roll number.

Create a derived class Result that:
Inherits from Student
Has an additional data member marks
Uses a constructor to initialize both rollNo and marks
Overrides the display() function to print both roll number and marks.

In the main() function:
Create an object of the Result class.
Use a base class pointer to refer to the derived object (Upcasting).
Call the display() function using the base class pointer.

Answer the following questions:
Which constructor will be called first: Student or Result?
Does the program demonstrate early binding or late binding?
Why is the display() function declared as virtual
*/

#include<iostream>
using namespace std;

class Student
{
    protected:
    int rollNo;

    public:
    Student(int rollNo):rollNo(rollNo){}
    virtual void display()
    {
        cout<<"Roll NO : "<<rollNo<<endl;
    }
};
class StudentResult
{
private:
    /* data */
public:
    StudentResult(/* args */);
    ~StudentResult();
};

StudentResult::StudentResult(/* args */)
{
}

StudentResult::~StudentResult()
{
}
