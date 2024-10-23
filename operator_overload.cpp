#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    Counter& operator++() {
        ++value;  // Increment the value
        return *this;
    }

    
    Counter operator++(int) {
        Counter temp = *this;  // Save the current value
        value++;  // Increment the value
        return temp;  // Return the old value
    }

   
    Counter& operator--() {
        --value;  // Decrement the value
        return *this;
    }

   
    Counter operator--(int) {
        Counter temp = *this; 
        value--;  
        return temp;
    }

    void print() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter counter(5);

    cout << "Initial value: ";
    counter.print();

    ++counter;
    cout << "After prefix ++: ";
    counter.print();

    counter++;
    cout << "After postfix ++: ";
    counter.print();

    --counter;  
    cout << "After prefix --: ";
    counter.print();

    counter--; 
    cout << "After postfix --: ";
    counter.print();

    return 0;
}
