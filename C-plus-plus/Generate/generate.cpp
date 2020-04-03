#include <iostream>
#include <string>
using namespace std;
class Generate
{
    int counter ;
    string chara ;
public :
    Generate(int Counter, string Chara)
    {
        chara = Chara;
        counter = Counter;
    }
public:
    void generater()
    {
        for(int i = 0 ; i <= counter ; i++)
        {
            chara = chara;
            cout<<chara;
        }

    }
};

int main()
{
    try{
    string word;
    int number_of_words;
    cout<<"please enter the number of string you want to print "<<endl;
    cin>>number_of_words;
    if(!std::cin){
        throw;
    }
    cout<<"please enter the char you would like to print "<<endl;
    cin>>cr;
    }catch(int){
        cout<<"please enter numeric number for of string [0,1,2,3,4,5,6,7,8,9]"<<endl;
    }
    Generate gene(cou,cr);
    gene.generater();
}
