#include<iostream>
using namespace std;
int main(){
    int marks,avg,sum=0,count=0;
    cout<<"marks:";
        cin>>marks;
    if(marks>0){
        cout<<"marks:";
        cin>>marks;
        sum=sum+marks;
        count++;
    }
    avg=sum/count;
    if(marks>0){
        cout<<avg;
    }
}