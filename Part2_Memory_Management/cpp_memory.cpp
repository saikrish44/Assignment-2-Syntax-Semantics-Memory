#include <iostream>
using namespace std;

int main() {
    int* data = new int[1000];
    delete[] data;
    return 0;
}
