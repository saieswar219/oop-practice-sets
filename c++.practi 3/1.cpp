#include<iostream>
#include<string>
using namespace std;
 class students{
 private:
    string name;
    int age;
 public:
    void set_values(string nm,int ag){
        name=nm;
        age=ag;
    }
    void get_values(void){
        cout<<"name:"<<name<<" age:"<<age<<endl;
    }
 };
 int main(){
    students s1;
    s1.set_values("sai",18);
    s1.get_values();
 }