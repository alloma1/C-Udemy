//OOP_before_constructors
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
        void setBase(int b)
        {
            if (b<0)
                base=1;
            else
                base=b;
        }
        void setAltura(int a)
        {
            if (a<0)
                altura=1;
            else
                altura=a;
        }
        int getBase()
        {
            return base;
        }
        int getAltura()
        {
            return altura;
        }
        int area()
        {
            return base*altura;
        }
        int perimetro()
        {
            return base*2+altura*2;
        }
    };
int main()
{
    Rectangle r1, r2;
    Rectangle *p;
    Rectangle *p1;
    Rectangle *ptr = new Rectangle;
    p = new Rectangle;
    r1.setBase(10);
    r1.setAltura(20);
    cout<<r1.area()<<endl;
    
    p->setBase(20);
    p->setAltura(20);
    cout<<p->area()<<endl;
    cout<<p->perimetro()<<endl;
    
    p1 = &r2;
    p1->setBase(-30);
    p1->setAltura(10);
    cout<<"La base es: "<<r2.getBase()<<endl;
    cout<<"La altura es: "<<r2.getAltura()<<endl;
    cout<<"Area por r2 "<<r2.area()<<endl;
    cout<<"Perimetro por r2 "<<r2.perimetro()<<endl;
    cout<<"Area por p1 "<<p1->area()<<endl;
    cout<<"Perimetro por p1 "<<p1->perimetro()<<endl;
    
    r2.setBase(15);
    r2.setAltura(30);
    cout<<r2.area()<<endl;
    cout<<"Area por p1 "<<p1->area()<<endl;
    
    ptr->setBase(5);
    ptr->setAltura(2);
    cout<<"using a(p) memory "<<ptr->area()<<endl;
    cout<<"using Heap memory "<<ptr->perimetro()<<endl;
    return 0;
}
