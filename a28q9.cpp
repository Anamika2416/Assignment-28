//Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type.
#include<iostream>
using namespace std;
class integer
{
    int x;
public:
    integer()
    {
    }

    integer(int a)
    {
        x=a;
    }
    operator int()
    {
        return x;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    integer obj;
    obj.display();
    int x=obj;
    cout<<"integer x= "<<x;
    return 0;
}
