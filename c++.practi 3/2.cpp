#include<iostream>
#include<string>
using namespace std;
class bankaccount{
private:
    double balance;
public:
    void set_values(double bn){
        if(bn>=0){
        balance=bn;
        }else{
            cout<<"error:"<<endl;
            balance=0;
        }
    
    }
    double get_balance(void){
        cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    bankaccount b1;
     b1.set_values(5000.75);  
    cout << "Balance: " << b1.get_balance() << endl;

    b1.set_values(-1000);    // invalid
    cout << "Balance: " << b1.get_balance() << endl;

    return 0;
}