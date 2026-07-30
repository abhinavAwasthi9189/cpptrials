#include <cstddef>
#include <iostream>

using std::cout;
using std::cin;

#define  nn std::endl;

int main(){
    int arr[100];
    
    // fill a whole part of memory with a certain value. 
    // fill(starting adress, ending adress, value)
    // ussually you will give array name as start and name+ size for the end(or whatever index you want to fill till).
    // same as range end-1 is the last value seen.
    std::fill(arr,arr+50,11);
    std::fill(arr+50,arr+100,12);
    
    int x =0;
    for(int i : arr){
        if( x==50){cout << "yes" << nn;}
        cout << i << nn;
        x++;
    }
    
    // i thought at start that i can put a pointer at start of array by just adr = &arr.
    // but apparently
    int* adr;
    adr = &arr[0];

    for( int i=0; i<100; i++){
        cout << *(adr+i) << nn;
    } 
    

    int *ptr = nullptr;
    if(ptr ==  nullptr){cout << "no value initialized" << nn;}
    ptr = &arr[7];
    if(ptr ==  nullptr){cout << "no value initialized" << nn;}
    else{cout << "you shall pass!!" << nn;}

    return 0;
}

// apparently you can make parameters of a function const. so people know you are not suppopse to change it
// i have no function to use it on right now. so just leaving a comment.

// if you send a parameter you send only the value. for the address pass its reference using &val.
