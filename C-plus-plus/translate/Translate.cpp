#include <iostream>
#include <string>
using namespace std;
class Translate
{
    private: string myword;
    public:
        void translate(string Myword)
    {
        myword = Myword;
        for(int i=0 ; i< myword.length();i+=2)
        {
            myword.insert(i,"o");
        }
        cout<<"new translated word is "<<myword<<endl;
    }
};

int main()
{

    cout<<"please enter the word you would like to translate "<<endl;
    string word;
    cin>>word;
    Translate trs;
    trs.translate(word);
}
