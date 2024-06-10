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
        
        /// C O N  S T R U C T O R S /////
        /* Non paramterized
        Rectangle()
        {
            base = 1;
            altura = 1;
        }
        */
        // paramterized
        Rectangle(int b=1, int a=1)
        {
            setBase(b);
            setAltura(a);
        }
        
        /*when it is time to call in the main function:
        Rectangle r;
        
        Rectangle r();
        */
        // Copy constructor
        Rectangle(Rectangle &rect)
        {
            base = rect.base;
            altura = rect.altura;
        }
        
        /*when it is time to call in the main function:
        Rectangle r;
        
        Rectangle r(10,5);
        
        */
    };
int main()
{
    Rectangle r1; //desparametrizado, it's function is disregarded 
                  //when the parametrizado initialize the values
    Rectangle r2(10,5); //parametrizado
    Rectangle r3(r2); //Copy constructor
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
    
