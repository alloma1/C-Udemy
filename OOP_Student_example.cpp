#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathMark;
    int phyMark;
    int chemMark;
 

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathMark = m;
        phyMark = p;
        chemMark = c;
    }
    
    int total()
    {
        return mathMark+phyMark+chemMark;
    }
    char grade()
    {
        float avg;
        avg = total()/3.0;
        if(avg > 60.0)
            return 'A';
        else if(avg<=60.0 && avg>=40.0)
            return 'B';
        else
            return 'C';
    }

};



int main()
{
    int roll;
    string name;
    int math;
    int phy;
    int chem;
    
 
    cout<<"What is the roll number: ";
    cin>>roll;
    cout<<"Student name: ";
    cin>>name;
    cout<<"Enter the grades: ";
    cin>>math>>phy>>chem;

    Student s(roll, name, math, phy, chem);
    
    cout<<"Student got a Total Mark of "<<s.total()<<endl;
    cout<<"Student "<<name<<" final grade is "<<s.grade();
    
    return 0;
}
