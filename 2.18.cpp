# include <iostream>
using namespace std;
int main()
{
	int a, b;
    cout<< "Enter two numbers:";
    cin>>a>>b;
    if(a != b) {
    cout<< "a is not equal to b" <<endl;
    }
    if(a<b) {
    cout<< "a is smaller than b" <<endl;
    } 
    if(b<a) {
    cout<< "b is smaller than a" <<endl;
    }
    return 0;
}

