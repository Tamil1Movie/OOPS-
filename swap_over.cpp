#include <iostream>
using namespace std;
class Swapping {
public:
    void swap(int x, int y) {
        cout << "Before swapping: x = " << x << ", y = " << y << endl;
        int temp = x;
        x = y;
        y = temp;
        cout << "After swapping: x = " << x << ", y = " << y << endl;
    }
        void swap(double x, double y) {
        cout << "Before swapping: x = " << x << ", y = " << y << endl;
        int temp = x;
        x = y;
        y = temp;
        cout << "After swapping: x = " << x << ", y = " << y << endl;
    }
};
int main() {
    Swapping s;
    s.swap(20,50);
    s.swap(5.2,6.5);
    return 0;
}
