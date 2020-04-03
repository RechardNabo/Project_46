#include <iostream>
#include <string>

using namespace std;
class Reverse
{
private:
    string word;
    string reverser;
public:
    Reverse(string Word)
    {
        word =Word;
    };

    void reversers()
    {
        int length = word.length();
        for(int i = length-1; i >= 0; i--)
        {
            reverser = word.at(i);
            cout<<reverser;
        }

    }
};
int main()
{
    string word;
    cout<<"please enter the word you would like to reverse "<<endl;
    cin>>word;
    Reverse re(word);
    cout<<"reversed word is :"<<endl;
    re.reversers();
}

