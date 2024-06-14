/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int base;
    int altura;
    
public:
    Rectangle(int b=0, int a=0)
    {
        base = b;
        altura = a;
    }
    void setBase(int b)
    {
        base = b;
    }
    void setAltura(int a)
    {
        altura = a;
    }
    int getBase() {
        return base;
    }
    int getAltura() {
        return altura;
    }
    int area()
    {
        return base*altura;
    }
    int perimeter()
    {
        return 2*(base+altura);
    }
    void show()
    {
        cout<<"The area is: "<<this->area()<<endl;
        cout<<"The perimeter is: "<<this->perimeter()<<endl;
    }
};

class Cubo : public Rectangle
    {
    private:
        int fondo;
    
    public:
        Cubo(int b=0, int a=0, int f=0)
        {
            setBase(b);
            setAltura(a);
            fondo = f;
        }
        void setFondo(int f)
        {
            fondo = f;
        }
        int getFondo() {
            return fondo;
        }
        int volumen()
        {
            return getBase()*getAltura()*fondo;
        }
        void display()
        {
            cout<<"The volume is: "<<this->volumen()<<endl;
        }
        
    };

int main()
{
    Rectangle a1(10,5);
    Cubo a2(10,5,3);
    a1.show();
    a2.display();
    return 0;
}
