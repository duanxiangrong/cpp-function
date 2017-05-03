/*
 * print.h
 *
 *  Created on: 2 May 2017
 *      Author: duanxiangrong
 */
#include <iostream>
using namespace std;

/*
 * 声明自定义函数
 * 函数的三要素（返回类型 函数名 形参类型）function prototype (函数原型)
 */

//const形参和实参
void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);

/*
 * 使用标记指定数组长度
 */
void print(const char *cp) {
	if (cp)
		while (*cp)
			cout << *cp++;
}

/*
 * 使用标准库规范
 */
void print(const int *beg, const int *end) {
	while (beg != end)
		cout << *beg++;
}

/*
 * 显示传递一个表示数组大小的形参
 */
void print(const int ia[], size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << ia[i];
	}
}

