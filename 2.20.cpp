#include <iostream>
using namespace std;
int main()
{
	float r, d, c, a;
    cout<< "Enter value of radius:";
    cin>>r;
    d=(2*r);
    cout<< "Diameter of circle =" <<d <<endl;
    c=(2*3.142*r);
    cout<< "Circumference of circle =" <<c <<endl;
    a=(3.142*r*r);
    cout<< "Area of circle =" <<a <<endl;
    return 0;
}

