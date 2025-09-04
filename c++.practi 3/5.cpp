#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
        int uid;
        float salary;
    public:
        void set_values(int id, float sal){
            uid=id;
            salary=sal;
        }
        void get_values(void){
            cout<<"Uid :"<<uid<<" salary:"<<salary<<endl;

        }
};
int main(){
    employee r1,r2;
    r1.set_values(03, 250000.000);
    r1.get_values();
    r2.set_values(04, 200000.000);
    r2.get_values();
}