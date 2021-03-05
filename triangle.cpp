
/* Name: Andrew Stade
Date: 9/16/2019
Section: 2 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include "triangle.h"

using namespace std;

Triangle::Triangle(int p, char q, char r)
// Initializes triangle in p, q, and r,
// p is length, q is border, r is fill.
{
    if (p < 1) // Ask for size integer
    {
        size = 1;
        p = 1;
    }
    if (p > 39)
    {
        size = 39;
        p = 39;
    }
    else
    {
        size = p;
    }
    if (q >= '!' || q <= '~') // Ask for border character
    {
        border = q;
    }
    else 
    {
        border = '#';
    }
    
    if (r >= '!' || r <= '~') // Ask for fill character
    {
        fill = r;
    }
    else 
    {
        fill = '*';
    }
}

int Triangle::GetSize() const
// Grab the size of the triangle
{
    if (size < 1)
    {
        return size;
    }
    if (size > 39)
    {
        return size;
    }
    else 
    { 
        return size;
    }
}

int Triangle::Perimeter() const
// Calculates and then returns the perimeter.
{
    return (size + size + size);
}

double Triangle::Area() const
// Computes the area of the equilateral triangle.
{
    return (sqrt(3)/4 * size * size);
}

void Triangle::Grow()
// Allows the triangle to grow by 1.
{
    if (size < 39)
    {
        size = size + 1;
    }
    else
    {
        size = size;
    }
}

void Triangle::Shrink()
// Allows the triangle to shrink by 1.
{
    if (size > 1)
    {
        size = size - 1;
    }
    else
    {
        size = size;
    }
}

void Triangle::SetBorder(char newB)
// Sets the border of the triangle to a new character.
{
    if (newB >= '!' && newB <= '~')
    {
        border = newB;
    }
    else 
    {
        border = '#';
        newB = '#';
    }
}


void Triangle::SetFill(char newF)
// Sets the fill of the triangle to a new character.
{
    if (newF >= '!' && newF <= '~')
    {
        fill = newF;
    }
    else 
    {
        fill = '*';
        newF = '*';
    }
}
    

void Triangle::Draw()
// Creates the triangle.
{
   int i;
   int shape = 2;
   int side = 4;
    
   for(i = shape; i <= size; i++) // Creates the triangle (except for bottom row)
   {
        for (int j = 0; j <= size-i; j++)
        {
            cout << " ";
        }
        if (i > shape)
        {
            cout << border << " ";
        }
        if (i > shape)
        {
            for (int k = side; k <= i; k++)
            {
            cout << fill << " ";
            }
        } 
       cout << border << " ";
       cout << endl; 
   }
   for (int l = side; l < side+size; l++) // Drawing the base of the triangle
   {
        cout << border << " ";
   }
 cout << endl;
}

void Triangle::Summary()
// Displays information about the triangle.
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Size of triangle's side = " << GetSize() << " units."; 
    cout << "\nPerimeter of triangle = " << Perimeter() << " units.";
    cout << "\nArea of triangle = " << Area() << " units.";
    cout << "\nTriangle looks like: \n"; Draw();
}

