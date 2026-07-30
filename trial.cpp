#include <iostream>

using std::cout;
using std::cin;
using std::string;
#define  nn std::endl;


//---creating generic function
//first create a certain generic type.(here called template
//template <typename G,typename T>
template <typename T>

// it was a try for something. it didn't work but i learned
//G parser(T &a, G &b){return (G)a;}
int parser(T &a){return (int)*a;}

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
    

    {int *ptr = nullptr;
    if(ptr ==  nullptr){cout << "no value initialized" << nn;}
    ptr = &arr[7];
    if(ptr ==  nullptr){cout << "no value initialized" << nn;}
    else{cout << "you shall pass!!" << nn;}}
    
    {//-----DYNAMIC--MEMORY------
    //we start with a pointer. null is a good practice
    int *ptr = nullptr;
    // here new is the keyword that places it in heap. new <memory_type>
    ptr = new int;
    cin >> *ptr;
    cout << ptr << nn;
    // should delete it at the end.
    delete ptr;}

    string *ptr = nullptr;
    ptr = new string[10];
    for( int i=0; i<10; i++){std::getline(std::cin >> std::ws, *(ptr+i));}

    for( int i =0; i<10; i++){cout << *(ptr+i) << nn;}
    
    // add [] just after delete to delete the whole array at the same time.
    delete[] ptr;

    //here we try the generic function
    int pp = 3;
    int parsed = parser("101");
    cout << parsed << " " << typeid(parsed).name() << nn;

    return 0;
}

// apparently you can make parameters of a function const. so people know you are not suppopse to change it
// i have no function to use it on right now. so just leaving a comment.

// if you send a parameter you send only the value. for the address pass its reference using &val.
