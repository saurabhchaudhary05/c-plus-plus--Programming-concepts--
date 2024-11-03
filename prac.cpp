#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 5;

    int* ptrX = &x;
    int* ptrY = &y;
    void* ptrVoidX = ptrX;
    void* ptrVoidY = ptrY;

    int dx = 2;
    int dy = -1;

    int* xPtr = (int*)ptrVoidX;
    int* yPtr = (int*)ptrVoidY;

    *xPtr += dx;
    *yPtr += dy;

    cout << "(" << x << ", " << y << ")";

    return 0;
}
