#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *arr = (int*)malloc(5 * sizeof(int));

    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Integers are : ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    free(arr);

    return 0;
}
/*
    1- Why constructors are not called with malloc ?
       malloc only allocates raw memory. It does not call constructors, so objects of classes won’t be initialized properly.
    2- Why new is preferred in C++ ?
       new allocates memory and calls constructors, ensuring proper initialization of objects.
    3. Difference in return types and initialization -
       Return type: new returns a type-specific pointer, while malloc returns a void* that needs to be cast to the desired type.
       Initialization: new calls the constructor to initialize the object, whereas malloc only allocates memory and does not initialize it. 
    4- Why malloc cannot initialize complex types?
       malloc only provides memory; it cannot run constructors. Complex objects need constructors to set up internal state. 

*/