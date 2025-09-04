#include<iostream>
#include<string>
using namespace std;
class car{
    private:
        string branch;
        string model;
    public:
        void set_values(string br,string mo){
            branch=br;
            model=mo;
        }
        void get_values(void){
            cout<<"branch:"<<branch<<"model"<<model<<endl;

        }
};
int main(){
    car c1;
    c1.set_values("narasapuram","BMW");
    c1.get_values();
    
}