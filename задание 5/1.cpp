﻿// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#define _CRT_NO_SECURE_WARMINGS
int main()
{
    int x1, x2, y1, y2, d;
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
    scanf_s("%d,\n", &x1);
    scanf_s("%d\n", &x2);
    scanf_s("%d\n", &y1);
    scanf_s("%d", &y2);
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf_s("d=%d", d);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
