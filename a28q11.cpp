//Create a class Marks that have one member variable marks and one member function that will print marks. We know that we can access member functions using (.) dot operator. Now you need to overload (->) arrow operator to access that function
#include<iostream>
using namespace std;
class Marks
{
    int m;
public:
    Marks(){}
    Marks(int a)
    {
        m=a;
    }
    void setdata(int a)
    {
        m=a;
    }
    int getdata()
    {
        return m;
    }
    void display()
    {
        cout<<"marks is : "<<m<<endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks m(50);
    m.display();
    m->display();
    return 0;
}
