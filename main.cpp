    //
// Created by jules on 15/10/2026.
//
#include <iostream>

void doubleNumber(int& num) { num = num * 2; }

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int num = 35;
    doubleNumber(num);
    std::cout << num << std::endl; // prints 70

    int a = 8;
    int b = 9;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl; // prints 9 8
    return 0;
}