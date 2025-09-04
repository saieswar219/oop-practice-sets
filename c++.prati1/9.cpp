#include<iostream>
using namespace std;
int main(){
int a;
cout << "Enter n: ";
    cin >> a;
int factorial=1;
for(int i=1;i<=a;i++){
    factorial=factorial*i;
}
cout<<"factorial"<<a<<"is"<<factorial<<endl;
return 0;
}