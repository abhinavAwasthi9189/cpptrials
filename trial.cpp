#include <iostream>

using std::cout;
using std::cin;

#define  nn std::endl;

int num = 5;

//we have created overloading functions here, same name different variables.
int area( int radius){ return (radius*num);}
int area( int l, int b){ return (l*b);}

int main(){
    int num;
    cin >> num;
    
    cout << num << nn;

    // writting '::' before a variable name induces its global value
    cout << ::num<< nn;

    /*int k;
    cin >> k;
    cout << ::k << nn;
    i added this think to see if a variable is called globally but only exisits locally can it be called like this.
    it tells its wrong before compilation
    */

    
    cout << area(4) << nn;

    int arr[] = {1,2,3,4,5,6};
    int ar[] = {};
    int a[6];

    cout << sizeof(ar) << nn;
    cout << sizeof(a) << nn;
    cout << sizeof(arr) << nn;

    for( int i =0; i<6;i++){
        cin >> a[i];
    }
    
    cout << nn;

    // .....for each loop.....
    for(int i : a){
        cout << i << nn;
    }
    

    return 0;
}
