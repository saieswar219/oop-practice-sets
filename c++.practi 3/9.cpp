#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;                 //void → only action/print, emi return cheyyadu.
                                    // double → value return chestundi, flexibility ekkuva.
                                    // Getters → return type use cheyyali.
                                    // Setters → void use cheyyali.    
public:
    
    void set_Celsius(double c) {
        celsius = c;
    }
    void get_Fahrenheit() {
        cout<<"tenp in fahrenheit:"<<(celsius * 9.0 / 5.0) + 32<<endl;; 
    }
};

int main() {
    Temperature t1;
    t1.set_Celsius(54);
    t1.get_Fahrenheit();
    return 0;
}
