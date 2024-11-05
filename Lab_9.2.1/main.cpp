#include <stdio.h>
#include "main.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int x = 0, y = 0, z = 0;
    float w = 0.0;
    char ch = 'n';

    puts("Program to calculate expression based on conditions");
    findMaxOrMin(&x, &y, &z, &w, &ch); 

    return 0;
}