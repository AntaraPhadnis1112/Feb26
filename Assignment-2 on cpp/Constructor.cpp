#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box(int length, int width, int height) {
        this->length = length;  
        this->height = height;
    }

    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume() {
        return length * width * height;
    }
};

int main() {
    Box box1(2, 3, 4);
    cout << "Volume of box1 (constructor): " << box1.volume() << endl;
    Box box2(1, 1, 1);
    box2.setDimensions(5, 6, 7);
    cout << "Volume of box2 (setDimensions): " << box2.volume() << endl;

    return 0;
}
/*
    1- Initialization sets a value when the variable is created. Some members like const or references cannot be assigned later.
    2- Initialization is preferred in constructors, for const or reference members, and for efficiency.

*/