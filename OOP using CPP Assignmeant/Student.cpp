#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;
    char grade;
public:
    void calculateGrade()
    {
        if (marks >=90 && marks<=100)
            grade = 'A';
        else if (marks >=80 && marks<=89)
            grade = 'B';
        else if (marks >=70 && marks<=79)
            grade = 'C';
        else if (marks >=60 && marks<=69)
            grade = 'D';
        else
            grade = 'F';
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()const
    {
        return name;
    }


    void setRollNo(int rollNo)
    {
        this->rollNo= rollNo;
    }
    int getRollNo()const
    {
        return rollNo;
    }

    void setMarks(float marks)
    {
        this->marks= marks;
    }
    float getMarks()const
    {
        return marks;
    }

    void setGrade(char grade)
    {
        this->grade = grade;
    }
    char getGrade()const
    {
        return grade;
    }
};

int main()
{
    Student s;
    
    int rollNo;
    cout << "Enter roll number: ";
    cin >> rollNo;
    s.setRollNo(rollNo);

    cin.ignore();
    
    string name;
    cout<<"Student Name : ";
    getline(cin, name);
    s.setName(name);

    float marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    s.setMarks(marks);

    s.calculateGrade();

    
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade() << endl;

}

