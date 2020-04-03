#include <iostream>
#include <string>
using namespace std;

 class MAX
{
private :int a ;
    private :int b ;
    private :
        int c ;
    public:
    void Max(int A, int B, int C)
    {
        a = A;
        b = B;
        c = C;
        if(a>b && a > c)
        {
            cout<<a<<" is maximum "<<endl;
        }
        else if(b>a && b > c)
        {
            cout<<b<<" is maximum "<<endl;
        }
        else if(c > a && c && b)
        {
            cout<<c<<" is the maximum "<<endl;
        }

        else{cout<<"they are equal"<<endl;}
        }

};
int main()
{
    try{
    cout<<"please enter the first value "<<endl;
    int a ;
    cin>>a;
    if(!std::cin){
        throw; // exception for handling numeric number 
    }
    cout<<"please enter the second value "<<endl;
    int b ;
    cin >> b;
    if(!std::cin){
        throw; // exception for handling numeric number 
    }
    cout<<"please enter the third value"<<endl;
    int c;
    cin >> c;
    if(!std::cin){
        throw; // exception for handling numeric number 
    }
    MAX mymax;
    mymax.Max(a,b,c);
    }catch(int){
        cout<<"please enter numeric numbers [0,1,2,3,4,5,6,7,8,9]"<<endl;
    }
}
