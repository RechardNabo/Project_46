#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

     class Frequency
     {
     private:
       std:: vector<string>words;
        std::map<string,string> mywords;

     public:
         Frequency(vector<string> Words)
         {
            words = Words;
         }

     public :
        void Convert()
        {
            mywords.insert("merry","god");
            mywords.insert("christmas","jul");
            mywords.insert("and","och");
            mywords.insert("happy","gott");
            mywords.insert("new","nytt");
            mywords.insert("year","ar");
            for(int i = 0 ; i < words.size() ; i++)
            {
                    string myv = words.at(i);
                    cout<<mywords[myv]<<endl;
            }
        }

     };


int main()
{
    string word;
    vector<string> words;
    cout<<"would you like to convert songs from english to swedish / q toquit "<<endl;
    cin>>word;
    while(word != "q")
    {
        string value;
        cout<<"please enter a word"<<endl;
        cin>>word;
        if(word == "q")
        {
            break;
        }
        words.push_back(value);

    }
    int length = words.size();
    if(length<=1)
    {
        cout<<" no data to process ,\n thank you for your time "<<endl;
    }
    else
        {
            Frequency f(words);
            f.Convert();
        }

}
