#include <iostream>
//using namespace std; NO GOOD PRACTICE TO DO CAN CAUSE ERROR


//it is like a way for us to make set out of values.
namespace one{int x=7;}
namespace two{int x=77;}

typedef std::string str;

int main(){
    using std::cout;

    cout << "hello vuld" << "\n"; //we are pressing values into the things endl means endline.
    int x;
    x = 5;
    cout << x << "\n";
    str str = "heyyy";
    cout <<  str << " " << x << " why are you so bad at everything that you do?"<<"\n";
    {int x = 10;cout<<x<<"\n";}

    int a=5;    // copy initaialisation
    int b (5);   // direct initaialisation
    int c {5};   // initialize a LIST OF VALUE
    int d {};    // empty list initialization
   

    //even using name space here the original value takes priority
    using namespace one;
    cout<<x<<"\n";
    
    //but we can call value via namespace name
    cout<<two::x<<"\n";
    return 0;
}
