#include <iostream>
using namespace std;
void printFloydsTriangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows ;
    cout<<"enter the number of rows: ";
    cin>>rows;
    printFloydsTriangle(rows);
    return 0;
}

