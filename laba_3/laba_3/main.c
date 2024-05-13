#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int a;      // первая переменная 
    int b;
    int c;
    int d;
    
    printf("Write 4 numbers: ");       //Выводится комментарий к действию, ожидается ввод с клавиатуры 4 чисел
    scanf("%d, %d, %d, %d", &a, &b, &c, &d); // происходит ввод чисел с клавиатуры

    if (a > 0) // проверка положительности а
    {
        printf("\na > 0\n");
    }
    int min1_1, min2_2, min3_3; //создание переменных для нахождения 3х минимальных чисел

    min1_1 = a; // присваивание значений для инициализации переменных
    min2_2 = b; 
    min3_3 = c;

    if (b < min1_1) {
        min3_3 = min2_2;
        min2_2 = min1_1; // Условие для нахождения 3х минимальных чисел
        min1_1 = b;
    }
    else {
        min2_2 = b;
        min3_3 = a;
    }

    if (c < min1_1) {
        min3_3 = min2_2;
        min2_2 = min1_1;
        min1_1 = c;
    }
    else if (c < min2_2) {
        min3_3 = min2_2;
        min2_2 = c;
    }
    else {
        min3_3 = c;
    }

    if (d < min1_1) {
        min3_3 = min2_2;
        min2_2 = min1_1;
        min1_1 = d;
    }
    else if (d < min2_2) {
        min3_3 = min2_2;
        min2_2 = d;
    }
    else if (d < min3_3) {
        min3_3 = d;
    }

    printf("1 min number: %d\n", min1_1);// min2, min3);

    /*int min_sum = min1 + min2 + min3;
    
    printf("Min sum: %d\n", min_sum);*/

    return 0;
}