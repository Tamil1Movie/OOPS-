#include <iostream>
using namespace std;

class DataTypes {
public:
    int data;
  
    DataTypes(int val = 0) : data(val) {
        cout << "Object created with value: " << data << endl;
    }
};

int main() {
    int* intPtr = new int(11);
    float* floatPtr = new float(4.14f);
    double* doublePtr = new double(6.678);

    cout << "Integer: " << *intPtr << endl;
    cout << "Float: " << *floatPtr << endl;
    cout << "Double: " << *doublePtr << endl;

    int size = 5;
    int* array1D = new int[size];
    for (int i = 0; i < size; i++) {
        array1D[i] = i * 2;
    }

    cout << "1D Array: ";
    for (int i = 0; i < size; i++) {
        cout << array1D[i] << " ";
    }
    cout << endl;

    int rows = 3, cols = 4;
    int** array2D = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array2D[i] = new int[cols];
    }

    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array2D[i][j] = i * j;
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    DataTypes* objPtr = new DataTypes(100);

    int objArraySize = 3;
    DataTypes* objArray = new DataTypes[objArraySize] { DataTypes(1), DataTypes(2), DataTypes(3) };

    delete intPtr;
    delete floatPtr;
    delete doublePtr;

    delete[] array1D;

    for (int i = 0; i < rows; i++) {
        delete[] array2D[i];
    }
    delete[] array2D;
    delete objPtr;
    delete[] objArray;

    return 0;
}
