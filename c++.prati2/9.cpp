#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int i=n;
    do{
        if(n>=0){
        cout<<"enter n:";
        cin>>n;
        i++;
      }else{
        cout<<"ok";
        break;
      }

    }
    while(i>=0);
    return 0;
}