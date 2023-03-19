//Create a Distance class having 2 instance variable feet and inches. Also create default constructor and parameterized constructor takes 2 variables . Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.
#include<iostream>
using namespace std;
class distancee
{
    float feet,inches;
public:
    distancee()
    {
        cout<<"DC called"<<endl;
    }
    distancee(float a,float b):feet(a),inches(b)
    {
        cout<<"PC called"<<endl;
    }
    operator()(float a,float b,float c)
    {
        feet=a+c+5;
        inches=a+b+15;
    }
    void display()
    {
        cout<<"Inches= "<<inches;
        cout<<"Feet= "<<feet;
    }
};
int main()
{
    distancee d1(7.6,8.0);
    d1.display();
    d1(3,2,4);
    d1.display();
    return 0;
}
