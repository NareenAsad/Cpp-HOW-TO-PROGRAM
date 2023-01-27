#include <iostream>
using namespace std;
int main ()
{
	int num;
    cout<< "Enter 4-digit number:";
    cin>>num;
    cout<<num%10<< "  ";
    num=num/10;
    cout<<num%10<< "  ";
    num=num/10;
    cout<<num%10<< "  ";
    num=num/10;
    cout<<num%10<< "  ";
    num=num/10;
    return 0;
}

