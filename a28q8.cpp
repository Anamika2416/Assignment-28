#include<bits/stdc++.h>
using namespace std;
class coords3D
{
    int x,y,z;
public:
    coords3D(int a,int b,int c)
    {
        x=a;y=b;z=c;
    }
    void display()
    {
        cout<<endl<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
    }
    coords3D()
    {

    }
    coords3D operator,(coords3D c)//c3 will be assigned to c4 without this function also but if we have to alter anything then we need to create this function
    {
        coords3D t;
        t.x=c.z;
        t.y=c.y;
        t.z=c.x;
        return t;
    }
};
int main()
{
   coords3D c1(1,2,3);
   coords3D c2(4,5,6),c3(3,4,5);
    coords3D c4=(c1,c2,c3);
    c4.display();
    return 0;
}
