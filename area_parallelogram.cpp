// Create a program that will compute the area of a parallelogram

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float area, base, height;

    cout << "Enter the value of the base: ";
    cin >> base;

    cout << "Enter the value of the height: ";
    cin >> height;

    area = base * height;

    cout << "The area of the parallelogram is " << area;

    int x = getch();
    return(0);
}