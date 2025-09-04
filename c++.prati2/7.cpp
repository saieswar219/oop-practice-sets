#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime=true;
    cout<<"enter n:";
    cin>>n;
    if(n<=1){
        isprime=false;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }
    if(isprime){
        cout<<n<<"is prime:"<<endl;
    }else{
        cout<<n<<" is not a prime";
    }
}