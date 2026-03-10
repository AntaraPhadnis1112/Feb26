#include <iostream>
using namespace std;

int main() {
    int num = 10;
    cout << "Original num: " << num << endl;

    int *ptr = &num;
    *ptr = 20; 
    cout << "After pointer modification: " << num << endl;

    int &ref = num;
    ref = 30; 
    cout << "After reference modification: " << num << endl;

    return 0;
}
/*
    1- Pointer stores address of a variable; reference is an alias to a variable.
       Pointer can be changed to point to another variable; reference cannot be reseated.
    2- References are just another name for the original variable. Once created, they always refer to the same variable.
       Pointers store addresses, so you can make a pointer point to a different variable anytime.
    3- A reference must always refer to a valid object; it cannot exist without linking to a variable.
*/