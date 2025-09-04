
#include<iostream>
using namespace std;
int main(){
    int a,digit,largest=0;
    cout<<"enter a:";
    cin>>a;
    if(a<0){
        a=-a;
    }
    do{
        digit=a%10;
        if(digit>largest){
            largest=digit;
        }
        a=a/10;
} while(a>0);
cout<<largest<<endl;
return 0;
}
