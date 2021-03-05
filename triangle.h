
/* Name: Andrew Stade
Date: 9/16/2019
Section: 2 */

class Triangle
{
public:
    Triangle(int p, char q = '#',  char r = '*');    // costructor with parameters
    
    // accessors
    int GetSize() const;
    int Perimeter() const;
    double Area() const;
    
    // mutators
    void Grow();
    void Shrink();
    
    void SetBorder(char newB);
    void SetFill(char newF);
    
    void Draw();
    void Summary();
   
private: 
    int size;
    char border;
    char fill;
    
};