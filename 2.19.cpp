#include <iostream>
using namespace std;
int main()
{
	int x,y,z,sum,prod;
    float avg;
    cout<<"Enter three values:";
    cin>>x>>y>>z;
    sum=(x+ y+ z);
    prod=(x*y*z);
    cout<< "Sum is:" <<sum<<endl;
    cout<< "Avg is:" << (x+ y+ z)/3<<endl;
    cout<< "Product is:" <<prod<<endl;
    if(x<y && x<z) {
    cout<< "x is smaller"<<endl;	
    }
    if(y<z && y<x) {
    cout<< "y is smaller"<<endl;	
    }
    if(z<x && z<y) {
    cout<< "z is smaller"<<endl;	
    }
    if(x>y && x>z) {
    cout<< "x is larger"<<endl;	
    }
    if(y>z && y>x) {
    cout<< "y is larger"<<endl;	
    }
    if(z>x && z>y) {
    cout<< "z is larger"<<endl;	
    }
    return 0;
}

