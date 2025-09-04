#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=n;i!=0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;
      
    }
     cout<<rev<<endl; 
    return 0;
}
