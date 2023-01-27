#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
    cout<< "Enter 5 integers:";
    cin>>a>>b>>c>>d>>e;
    { 
    if(a>b && a>c && a>d && a>e)
    cout<<a<< " is largest" <<endl;
    if(b>c && b>d && b>e && b>a)
    cout<<b<< " is largest" <<endl;
    if(c>d && c>e && c>a && c>b)
    cout<<c<< " is largest" <<endl;
    if(d>e && d>a && d>b && d>c)
    cout<<d<< " is largest" <<endl;
    if(e>a && e>b && e>c && e>d)
    cout<<e<< " is largest" <<endl;
    }
    {
    if(a<b && a<c && a<d && a<e)
    cout<<a<< " is smallest" <<endl;
    if(b<c && b<d && b<e && b<a)
    cout<<b<< " is smallest" <<endl;
    if(c<d && c<e && c<a && c<b)
    cout<<c<< " is smallest" <<endl;
    if(d<e && d<a && d<b && d<c)
    cout<<d<< " is smallest" <<endl;
    if(e<a && e<b && e<c && e<d)
    cout<<e<< " is smallest" <<endl;
    }
    return 0;
}

