#include<iostream>
using namespace std;
int main(){
    int a,rev=0,rem,temp;
    cout<<"enter a:";
    cin>>a;
    temp=a;
    for(int i=a;i!=0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;
    }
    if(temp=rev){
         cout<<temp<<" is a palindrome:"<<endl;
    }else{
        cout<<temp<<" is not a palindrome:";
    }
    }
