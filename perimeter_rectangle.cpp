// Create a program that will compute the perimeter of a rectangle

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float perimeter, length, width;

    cout << "Enter the length of a rectangle: ";
    cin >> length;

    cout << "Enter the width of a rectangle: ";
    cin >> width;

    perimeter = 2 * (length + width);

    cout << "The perimeter of the rectangle is " << perimeter;

    int x = getch();
    return(0);
}