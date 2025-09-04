#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string name;    
    int ranking;     

public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setRanking(int r) {
        ranking = r;
    }
    int getRanking() {
        return ranking;
    }
};

int main() {
    University u1;
    u1.setName("Sai University");
    u1.setRanking(1);
    cout << "University Name: " << u1.getName() << endl;
    cout << "University Ranking: " << u1.getRanking() << endl;

    return 0;
}
