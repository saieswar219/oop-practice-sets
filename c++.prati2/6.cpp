#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"enter n:";
    cin>>n;
    int i=n;
    do{
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    while(i!=0);
      cout<<rev<<endl;

}