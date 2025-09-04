#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"enter a:";
    cin>>a;

    for(i=1;i<=10;i++){
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }
    return 0;
}