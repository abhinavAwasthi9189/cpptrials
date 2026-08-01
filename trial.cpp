#include <iostream>

using std::cout;
using std::cin;
using std::string;
#define  nn std::endl;

//we can create an name = int connecttion so that with enum when the name comes the value we get the the int.
enum value{one = 1, three = 3, fourteen = 14};

class git{
    // we create python like indentation and inside which we write which are public and which are private.
    public:
        int reponum;
        string name;
        

    private:
        string password;
    
    public:
        git(string naam, int val){name = naam; reponum = val;}
        void gitadd(){reponum++;}
        void get_passwd(string paswd){password = paswd;}
        bool check(string passwd){return password==passwd;}
};

int main(){
    
    //so we give a value of enume here. same as struct in most casses but we can do equals to with both types
    value x = one;
    

    // we can use both the condition the name or the int.
    if(x==one){cout << "true" <<nn;}
    if(x==1){cout << "true" <<nn;}

    git abhinav("abhinav",10);
    cout << abhinav.name << " " << abhinav.reponum << nn;
    abhinav.get_passwd("peigon");
    cout << abhinav.check("yctyv") << "  " << abhinav.check("peigon") << nn;
    abhinav.gitadd();
    abhinav.gitadd();
    abhinav.gitadd();
    cout << abhinav.name << " " << abhinav.reponum << /*abhinav.password <<*/nn;

    return 0;
}


