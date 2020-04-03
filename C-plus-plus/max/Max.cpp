#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

 class MAX
{
private :
    vector<int> numbers;
    int answer;

    public:
        MAX(vector<int> Numbers)
        {
            numbers = Numbers;
        }

    public:
        Max(){}
    public:
        int Display()
        {
            for(int i =0 ; i < numbers.size();i++)
            {
                answer = numbers.at(0);
                for(int z = 0 ; z < numbers.size(); z++)
                {
                   int check = numbers.at(z);
                    if(check > answer)
                    {
                        answer = check;
                    }

                    else{answer = answer;}

                }

            }
            return answer;
        }
    public:
        int Display2(){
            int a = 5;
            int b = 6;
            cout<<a+" "+b<<endl;
            return max(a,b);

        }


};
int main()
{
    string answer;
    int answer2;
    int number;
    vector<int> numbers;
    cout<<"would you like to insert number on list and check the largest "<<endl;
    cout<<"please select 1 for yout to provide list and 2 to use given"<<endl;
    cin>>answer;
    try{
    if(answer2 == 1){
    while(!answer.empty())
        {
        cout<<"please enter a number into a list "<<endl;
        cin>>number;
        if(!std::cin){
        throw; // exception for handling numeric number 
    }
        if(number == 777)
        {
            break;
        }

        numbers.push_back(number);
        }
        if(numbers.size()>1)
        {


        MAX mymax(numbers);
        cout<<"==== results ===="<<endl;
        cout<<mymax.Display();
        }
        else{cout<<"you did not provide info \n thank you for your time "<<endl;}
    }else  if(answer2 == 2){
        MAX mymax();
        //cout<<mymax.Display2()<<endl;
    }
    }catch(int){
        cout<<"please enter the numeric numbers[0,1,2,3,4,5,6,7,8,9]"<<endl;
    }
}
