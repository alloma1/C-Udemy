
#include <iostream>

using namespace std;

class Rectangle
{
    
public: 

    void display()
    {
        cout<<"This is the area of Rectangle"<<endl;
    }
};
class Cubo:public Rectangle
{
   
public:
    void display()
    {
        cout<<"This is the volume of Cubo"<<endl;
    }

};

int main()
{
    Cubo d;
    Rectangle e;
    e.display();
    d.display();
    d.Rectangle::display(); //in this way it can be display the Rectanglemessage  
   
}
