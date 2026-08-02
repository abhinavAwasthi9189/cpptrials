#include <format>
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;

#define nn std::endl

int area(int s){return s*s;}

constexpr int volume(int s){ int a = area(s); return a*s;};

int main(){
    int k = 10;

    // i didn't know we have to do like this for binary in cpp. python it was easier i guess.
    cout << std::format("{:#b}", k) << nn; 
    cout << std::format("{:b}", k) << nn; 
    
    //here we caused an error using constexpr. we asked it to have a value but we are using a value that can't be know at compile time
    //constexpr makes it a true constant. constant at compile time not runtime.
    /*int a = 5;
    constexpr int vol {volume(a)}; 
    cout << vol << nn;*/
    
    std::vector<int> hello(10);
    cout << hello.size();
    cout << "today is the day i learned we caqn get multiple input in a line:" << nn;
    cin >> hello[0] >> hello[1] >> hello[2] >> hello[3] >> hello[4];

    std::vector prime{ 2, 3, 5, 7, 11 };
    int length { static_cast<int>(std::ssize(prime)) }; // static_cast return value to int
    std::cout << "length: " << length;


    return 0;
}


