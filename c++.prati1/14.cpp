#include<iostream>
using namespace std;
int main(){
int i,n,isprime;
cout<<"prime num between 1 and 100"<<endl;

  for( n=2;n<=100;n++){
      isprime=1;
  }

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        
        }
    
    if(isprime==1){
        cout<<n<<"prime";
        
    }
    


    return 0;
}
