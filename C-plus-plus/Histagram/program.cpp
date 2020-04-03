#include <iostream>
#include <string>
using namespace std;


int main()
{
    try{
    string grapher = "*";
    int number1,number2,number3;
    cout<<"please enter first data for graph in number"<<endl;
    cin>>number1;
    if(!std::cin){
        throw;
    }
    cout<<"please enter 2nd data for graph"<<endl;
    cin>>number2;
    if(!std::cin){
        throw
    }
    cout<<"please enter last data for graph"<<endl;
    cin>>number3;
    if(!std::cin){
        throw;
    }
    }catch(int){
        cout<<"please enter the numeric number for data [0,1,2,3,4,5,6,7,8,9] "<<endl;
    }
    int  mylist [] = {a,b,c};
    for( int i = 0 ; i <=3 ; i++)
        {
            cout<<"\n "<<endl;
            for(int z = 0 ; z<=mylist[i] ;z++)
                {
                    cout<<grapher;
                }
        }
}
