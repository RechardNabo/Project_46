#include <iostream>
#include <string>
using namespace std;
class Members{
    string lists[] =  {"x","f","5","zx","88","3","11"};
    string result;
    public:
            string word;
    public:
             Members(string Word){
        this.word = Word;
    }
    public:
            string check(){
                
    for(int i = 0 ; i <= 7 ; i++)
    {
        check = lists[i];
        if(this.word == check )
        {
            result = "it is a member ";
            break;
        }
        else{result = "its not a member ";}
    }
    return result;
  }
};

int main(void)
{
    
    cout<<"please enter the character you would like to check if exists in list"<<endl;
    string inner;
    cin>>inner;
    Member member;
    cout<<member.Check()<<endl;
}
