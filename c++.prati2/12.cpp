
#include<iostream>
using namespace std;
int main(){
    
    
    for(int n=1;n<=50;n++){
        if(n%3==0){
            cout<<n<<"Fizz:"<<endl;
        }else if(n%5==0){
            cout<<n<<"Buzz:"<<endl;
        } else if(n%3==0 && n%5==0){
            cout<<n<<"FizzBuzz:"<<endl;
        }else{
            cout<<"ok"<<endl;
        }
    } 
    return 0;
}