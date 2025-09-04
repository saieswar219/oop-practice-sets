#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
        float length;
        float width;
    public:
        void set_values(float len, float wid){
            length =len;
            width=wid;
        }
        void get_values(void){
            cout<<"length :"<<length<<" width:"<<width<<" Area:"<<length*width<<endl;

        }
};
int main(){
    rectangle r1;
    r1.set_values(25.345,12.12);
    r1.get_values();
}