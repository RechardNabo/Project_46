#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
private:
    string word;
public:
    Palindrome( string Word)
    {
        word = Word;
    };

    public :
        void palindrome(string Word )
        {
            string reverser;
            for(int i = word.length()-1 ; i >= 0 ; i--)
            {
                reverser = word.at(i);
                cout<<reverser;
            }
            if(reverser == Word )
            {
                cout<<"\n true is is palindrome "<<endl;
            }
            else{cout<<"\n false it is not palindrome "<<endl;}

        }
};


int main(void)
{

        string word;
        cout<<"please enter a word to  check if its palindrome"<<endl;
        cin>>word;
        Palindrome pr(word);
        cout<<" results : "<<endl;
        pr.palindrome(word);

}
