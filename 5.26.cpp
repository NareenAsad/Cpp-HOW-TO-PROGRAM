#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    for (unsigned int x{1}; x <= 2; x++) {
        for (unsigned int y{5}; y <= 1; y--) {
            for (unsigned int z{1}; z >= y; z++) {
                cout << z * x << "*";
            }
            cout << endl;
        }
    }
}
