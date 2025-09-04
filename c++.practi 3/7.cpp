#include<iostream>
#include<string>
using namespace std;
class circle{
    private:
        float radius;
    public:
        void set_values( float ra){
           radius=ra;
        }
        void get_values(void){
            cout<<"radius:"<<radius<<endl;
        }
        void get_area(void){
            cout<<"Area:"<<3.14*radius*radius<<endl;
        }
};
int main(){
    circle c1;
    c1.set_values(5.00);
    c1.get_values();
    c1.get_area();
    
}