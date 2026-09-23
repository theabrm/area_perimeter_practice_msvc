// Create a program that will compute the perimeter of a circle

#include <iostream>
#include <conio.h>
#define pi 3.14159
using namespace std;

int main()
{
    float perimeter, radius;

    cout << "Enter the value of the radius: ";
    cin >> radius;

    perimeter = 2 * pi * radius;

    cout << "The perimeter of the circle is " << perimeter;

    int x = getch();
    return(0);
}