#include<iostream>
#include<string>
using namespace std;
class book{
    private:
        string title;
        float price;
    public:
        void set_values(string ti, float pr){
            title=ti;
            price=pr;
        }
        void get_values(void){
             cout<<"title:"<<title<<" price:"<<price<<endl;
        }
};
int main(){
    book b1;
    b1.set_values("oka lillakkosam",99.000);
    b1.get_values();
}