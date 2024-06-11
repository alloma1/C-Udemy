#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imaginary = i;
        
    }
    
    void display()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }
    
    friend Complex operator+(Complex c1, Complex c2);
};
    //Complex add(Complex c) //first option is using the word "add"

Complex operator+(Complex c1, Complex c2)
{
        Complex temp;
        
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        
        
        return temp;
}
   

int main()
{
    Complex c1(10,5),c2(1,20),c3;

    c3 = c1+c2; //the operator "+" response as a function
    c3.display();
    
    c3 = operator+(c1,c2); //the operator "+" response as a function
    c3.display();
    
 
    return 0;
}
