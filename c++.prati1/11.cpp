#include<iostream>
using namespace std;
int main(){
int mark;
cout<<"enter a mark";
cin>>mark;
for(int i=0;i<=100;i++){
    if(mark>=90 && mark<=100){
        cout<<mark<<"grade A"<<endl;
    }else if(mark>=80 && mark<90){
        cout<<mark<<"grade B"<<endl;
    }else if(mark>=70 && mark<80){
        cout<<mark<<"grade C"<<endl;
    }else if(mark>=60 && mark<70){
        cout<<mark<<"grade D"<<endl;
    }else if(mark<60){
        cout<<mark<<"grade F"<<endl;
    }
    return 0;
}
}