#include <iostream>
// using namespace std: // you can use the namespace here instead of [std::... line] everytime u requre input or output
class Palindrom{
public:
    int Num , n, rev;
    Palindrom(int Num){
    this->Num = Num;
    }
public:
    void reverse_number(){
        n = this->Num;
        while(n!=0){
            rev = (rev * 10)+(n % 10);
            n /=10;
        }
        if(this->Num == rev){
            std::cout<<"The number is a pallindrom : "<<this->Num<<std::endl;
        }else{
            std::cout<<"The number is  not a pallindrom : "<< this->Num<<std::endl;
        }
    }
};
int main(){
    int number;
    std::cout<<"please neter the number to check palindrome :"<<std::endl;
    std::cin>>number;
    Palindrom palindrom(number);
    palindrom.reverse_number();
}
