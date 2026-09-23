// Create a program that will compute the area of a circle

#include <iostream>
#include <conio.h>
using namespace std;

const float pi = 3.14159;

int main()
{
    float area, radius;

    cout << "Enter the value of the radius: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "The area of the circle is " << area;
    
    int x = getch();
    return(0);
}