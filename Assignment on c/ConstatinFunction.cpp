#include<iostream>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius);
float circlePerimeter(float radius);

int main()
{
    // PI = 3.0f : assignment of read-only variable 'PI'
    circleArea(7.0f);
    circlePerimeter(7.0f);

    return 0;
}

float circleArea(float radius)
{
    float Area = PI * radius * radius;
    cout<<"Area of circle is "<<Area<<endl;
    return Area;
}

float circlePerimeter(float radius)
{
    float circumference = 2* PI * radius;
    cout<<"Circumference of circle is "<<circumference<<endl;
    return circumference;
}