#include<iostream>
#include<string>
using namespace std;
class bankaccount{
private:
    string name;
    int accnum;
    double balance;
    
public:
    void set_values(string na, int an,double bn){
        name=na;
        accnum=an;
        if(bn>=0){

        balance=bn;
        }else{
            cout<<"error:"<<endl;
            balance=0;
        }
    
    }
    double get_balance(void){
        cout<<"name:"<<name<<" accnum:"<<accnum<<" balance:"<<balance<<endl;
    }
};
int main(){
    bankaccount b1;
     b1.set_values("sai eswar",240200003,250000.000);
     b1.get_balance();
    return 0;
}
