#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter n:";
    cin>>n;
    int i=1;
    while(i<=n){
    
        fact=fact*i;
        i++;
       
    }
     cout<<fact<<endl; 
}