#include <iostream>
#include <string>
using namespace std;


int main()
{
    string lists1[] =  {"x","f","5","zx","88","3","11"};
    string lists2[] =  {"a","f","g","zxh","44","11","3"};
    string lists3[] =  {"e","h","k","y","100","6","0"};
    for( int x=0 ; x< lists1.length(); x++){
        cout<<" "+lists1[x];
    }
    for( int x=0 ; x< lists1.length(); x++){
        cout<<" "+lists2[x];
    }
    for( int x=0 ; x< lists1.length(); x++){
        cout<<" "+lists3[x];
    }
    cout<<"welcome please press [enter] to display common member within two lists or enter any key the press [enter] to exit"<<endl;
    string input;
    cin>>input;
    if(input =="")
    {
        for(int i = 0 ; i <= 7 ; i++)
        {
            cout<<lists1[i]<<endl;
            cout<<lists2[i]<<endl;
            cout<<lists3[i]<<endl;
        }

        for(int i = 0 ; i <= 7 ; i++)
        {
            string checker = lists1[i];
            for(int z = 0 ; z <= 7 ; z++)
            {
                if(checker == lists2[z])
                {
                    cout<<" there is a common member from list 1 to list 2"<<endl;
                    break;
                }
                else{cout<<"there is no common member from list 1 to list 2"<<endl;}
            }
            string checker2 = lists2[i];
            for(int i = 0 ; i <= 7 ; i++ )
            {
                if(checker2 == lists1[i])
                {
                    cout<<" there is a common member from list 1 to list 2"<<endl;
                    break;
                }
                else{cout<<"there is no common member from list 1 to list 2";}
            }
        }
    }
    else
        {
            cout<<"thank you for your time :"<<endl;
        }
}
