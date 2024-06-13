/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Rationale
{
private:
    int num;
    int den;
    
public:
    Rationale(int n=0, int d=1)
    {
        num = n;
        den = d;
    }
    Rationale(Rationale &f)
    {
        num = f.num;
        den = f.den;
    }
    void setNum(int n) 
    {
        num = n;
    }
    void setDen(int d) 
    {
        den = d;
    }
    int getNum() {return num;}
    int getDen() {return den;}
    friend Rationale operator+(Rationale f1, Rationale f2);
    friend ostream & operator<<(ostream &os, Rationale &f);
    
};

ostream & operator<<(ostream &os, Rationale &f)
{
    os<<f.num<<"/"<<f.den;
    return os;
}
Rationale operator+(Rationale f1, Rationale f2)
{
    Rationale t;
    t.num = f1.num*f2.den + f1.den*f2.num;
    t.den = f1.den * f2.den;
    return t;
}    
int main()
{
    Rationale c1(10,20);
    Rationale c2(5,20);
    Rationale c3;
    cout<<c3.getNum()<<"/"<<c3.getDen()<<endl;
    c3 = c1+c2;
    
    cout<<c3.getNum()<<"/"<<c3.getDen()<<endl;
    cout<<c1<<"+"<<c2<<"="<<c3<<endl;
    return 0;
}

