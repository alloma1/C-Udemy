#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;
 /*
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
  */ 
    //Complex add(Complex c) //first option is using the word "add"
    Complex operator+(Complex c)
    {
        Complex temp;
        
        temp.real=c.real+real;
        temp.imaginary=c.imaginary+imaginary;
        
        return temp;
    }
   
};

int main()
{
    Complex c1,c2,c3;
    
    c1.real=10;
    c1.imaginary=5;
    c2.real=1;
    c2.imaginary=20;
    
    c3 = c1+c2; //the operator "+" response as a function
    cout<<c3.real<<" + i"<<c3.imaginary<<endl;
    
    c3 = c2+c1; //the operator "+" response as a function
    cout<<c3.real<<" + i"<<c3.imaginary<<endl;
 
 
    return 0;
}
