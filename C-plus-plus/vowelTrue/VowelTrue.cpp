#include <iostream>
#include <string>
using namespace std;

class Vowel
{
    private: string name;
public :
    void vowel(string Name)
    {
        name = Name;
        int value = name.length();
        if(value<=1)
        {
            if(name=="a"||name== "e"||name == "i"||name  =="o" ||name == "u"){
                cout<<"true"<<endl;
            } else{
                cout<<"false"<<endl;
                }
        }else{
            cout<<"Not a vowel please provide string with single letter"<<endl;
        }
    }
};

int main()
{
    Vowel myv;
    cout<<" please enter a single charactor "<<endl;
    string mys ;
    cin>>mys;
    myv.vowel(mys);
}
