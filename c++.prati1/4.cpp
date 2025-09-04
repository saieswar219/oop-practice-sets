#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a and b,c";
    cin>>a>>b>>c;
    if(a>b & a>c){
        cout<<a<<"a is largest"<<endl;

    }else if(b>c & b>c){
        cout<<b<<"b is largest"<<endl;
    }
    else{
        cout<<c<<"c is largest"<<endl;
    }
    return 0;
}