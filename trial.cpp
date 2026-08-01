#include <iostream>

using std::cout;
using std::cin;
using std::string;
#define  nn std::endl;


struct coordinates{int x;int y;};

void printcord(coordinates A){
    std::swap(A.x,A.y);
    cout << A.x << nn;
    cout << A.y << nn;
}

void printcoord(coordinates &A){
    std::swap(A.x,A.y);
    cout << A.x << nn;
    cout << A.y << nn;
}

int main(){

    //unlike c in cpp we only write struct name not whole struct name thing.
    coordinates A;
    A.x = 5;
    A.y=7;

    //this is all about passing by value and passing by reference. one the changes made be also in the original value. other not.
    printcord(A);
    cout << A.x << nn;
    cout << A.y << nn;
    printcoord(A);
    cout << A.x << nn;
    cout << A.y << nn;

}


