#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a:";
cin>>a;
if(a>0){
    cout<<a<<"is positive"<<endl;
}else if(a<0){
    cout<<a<<"is negative"<<endl;
}
else{
    cout<<a<<"zero"<<endl;

}
return 0;
}