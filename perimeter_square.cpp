// Create a program that will compute the perimeter of a square

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float perimeter, side;

    cout << "Enter the value of the side: ";
    cin >> side;

    perimeter = 4 * side;

    cout << "The perimeter of the square is " << perimeter;

    int x = getch();
    return(0);
}