
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
    d.display();  //This way works
   
}
