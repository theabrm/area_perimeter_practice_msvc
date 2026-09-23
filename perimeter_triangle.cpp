// Create a program that will compute the perimeter of a triangle

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float perimeter, side1, side2, side3;

    cout << "Enter the value of the first side: ";
    cin >> side1;

    cout << "Enter the value of the second side: ";
    cin >> side2;

    cout << "Enter the value of the third side: ";
    cin >> side3;

    perimeter = side1 + side2 + side3;

    cout << "The perimeter of the triangle is " << perimeter;
    
    int x = getch();
    return(0);
}