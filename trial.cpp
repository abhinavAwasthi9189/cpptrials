#include <iostream>
//using namespace std; NO GOOD PRACTICE TO DO CAN CAUSE ERROR

using std::cout;
using std::cin;

#define  nn std::endl;

//we have created overloading functions here, same name different variables.
int area( int radius){ return (radius*radius);}
int area( int l, int b){ return (l*b);}

int main(){

    int l;
    cin >> l;
    int b;
    cin >> b;

    int k1=area(l);
    int k2=area(l,b);

    cout << k1 << " " << k2 << nn;
    
    return 0;
}
