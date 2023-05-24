#include <iostream>
using namespace std;
int main() {
    int predkosc = 12;
    int czas =5;
    while (predkosc <= 1230){
        predkosc *=2;
        czas *=3;
        cout<<"predkosc: "<<predkosc<<" czas: "<<czas;

    }
    return 0;
}
