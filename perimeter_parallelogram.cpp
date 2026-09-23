// Create a program that will compute the perimeter of a parallelogram

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float perimeter, base, side;

    cout << "Enter the value of the base: ";
    cin >> base;
    
    cout << "Enter the value of the side: ";
    cin >> side;

    perimeter = 2 * (base + side);
    
    cout << "The perimeter of the parallelogram is " << perimeter;
    
    int x = getch();
    return(0);
}