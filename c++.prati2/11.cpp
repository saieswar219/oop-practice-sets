#include<iostream>
using namespace std;
int main(){
    int a,b,p=1;
    cout<<"enter a and b:";
    cin>>a>>b;
    int i=0;
    while(i<b){
        p=p*a;
        i++;
        
    }
    cout<<a<<"^"<<b<<"="<<p;
    return 0;
}