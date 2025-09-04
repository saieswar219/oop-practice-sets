#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=n;i!=0;i=i/10){
        rem=i%10;
        sum=sum+rem;
    }
    cout<<"sum of digits:"<<sum<<endl;
    return 0;
}