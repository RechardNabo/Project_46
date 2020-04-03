#include <iostream>
#include <string>
using namespace std;
class Math
{
    private: int a,b,c,d;

    public :
        void Sum(int A , int B , int C, int D)
        {
            a=A;
            b=B;
            c=C;
            d=D;
            int answer = a+b+c+d;
            cout<<"Sum of all numbers is "<<a<<endl;
        }
    public:
        void Multi(int A , int B , int C, int D)
        {
            int a1,b1,c1,d1;
            a1=A;
            b1=B;
            c1=C;
            d1=D;
            int answer = a*b*c*d;
            cout<<"product of all numbers is "<<answer<<endl;
        }
};

int main()
{
    try{
    int a,b,c,d;
    cout<<"please  enter the first value"<<endl;
    cin>>a;
        if(!std::cin){
            throw;
        }
    cout<<"please enter the second value "<<endl;
    cin>>b;
        
        if(!std::cin){
            throw;
        }
    cout<<"please enter the third value "<<endl;
    cin>>c;
        
        if(!std::cin){
            throw;
        }
    cout<<"please enter the last value"<<endl;
    cin>>d;
        
        if(!std::cin){
            throw;
        }
    Math math;
    math.Sum(a,b,c,d);
    math.Multi(a,b,c,d);
    }catch(int){
        cout<<"please enter numeric value [0,1,2,3,4,5,6,7,8,9]"<<endl;
    }
}
