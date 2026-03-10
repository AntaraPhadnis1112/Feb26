#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    celsiusToFahrenheit(29);
    fahrenheitToCelsius(18);
    return 0;
}

float celsiusToFahrenheit(float c)
{
    
    float f = (c * 9/5) + 32;
    printf("Converted value Celsius to Fahrenheit is: %.2f \n", f);
    return f;
}
float fahrenheitToCelsius(float f)
{
    float c = (f - 32) * 5/9;
    printf("Converted value Fahrenheit to Celsius is: %.2f \n", c);
    return c;
}