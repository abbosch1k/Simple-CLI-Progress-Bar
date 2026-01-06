#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int x=0;x<100;x++) {
        int y = (int)(10+10*sin(x*0.2));
        for (int i=0;i<y;i++) cout << " ";
        cout << "*" << endl;
    }
    return 0;
}
