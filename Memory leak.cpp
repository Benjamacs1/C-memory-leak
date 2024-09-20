#include <iostream>

int main() {
    while (true) {
        int* leak = new int[262144]; 
    }
    return 0;
}