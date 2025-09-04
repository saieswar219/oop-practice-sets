#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,d;
    cout<<"enter n:";
    cin>>n;
    int i=n;
    while(i!=0){
        
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        d=((a*3)+(b*3)+(c*3));

    }
    if(n==d){
        cout<<"amstrong num:";
    }else{
        cout<<"not";
    }

}