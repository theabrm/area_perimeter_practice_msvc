// Create a program that will compute the area of a rectangle

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float area, length, width;
    
    cout << "Enter the length of a rectangle: ";
    cin >> length;

    cout << "Enter the width of a rectangle: ";
    cin >> width;

    area = length * width;
    
    cout << "The area of the rectangle is " << area;
    
    int x = getch();
    return(0);
}