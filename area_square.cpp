// Create a program that will compute the area of a square

#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    float area, side;

    cout << "Enter the value of the measured side of a square: ";
    cin >> side;

    area = side * side;

    cout << "The area of the square is " << area;

    int x = getch();
    return(0);
}