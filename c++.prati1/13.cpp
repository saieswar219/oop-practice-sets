#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a";
cin>>a;
bool isPrime=true;
if(a<=1){
    cout<<a<<"not prime";
    
}else {
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            isPrime=false;
            break;
        }
    } if (isPrime){
            cout << a << " is Prime";
}
        else{
            cout << a << " is NOT Prime";
    }

    return 0;

}
}