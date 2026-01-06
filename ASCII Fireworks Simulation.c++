#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    srand(time(0));
    for(int i=0;i<10;i++){
        system("clear"); // "cls" for Windows
        int x=rand()%20, y=rand()%10;
        for(int r=0;r<y;r++) cout<<endl;
        for(int c=0;c<x;c++) cout<<" ";
        cout<<"* BOOM *\n";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    return 0;
}
