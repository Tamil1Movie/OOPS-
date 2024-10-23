#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    friend ostream& operator<<(ostream& out, const Counter& c) {
        out << c.value;  
        return out;
    }

    friend istream& operator>>(istream& in, Counter& c) {
        in >> c.value; 
        return in;
    }
};

int main() {
    Counter counter;

    cout << "Enter an initial value for the counter: ";
    cin >> counter; 
    cout << "You entered: " << counter << endl; 

    return 0;
}
