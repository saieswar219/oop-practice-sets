#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem,temp;
    cout<<"enter n:";
    cin>>n;
    temp=n;
    for(int i=n;i!=0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;
    }
    if(temp==rev){
        cout<<temp<<" is a palindrome:"<<endl;
    }else{
        cout<<temp<<" is not a palindrome:";
    }
}
