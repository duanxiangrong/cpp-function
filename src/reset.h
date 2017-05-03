/*
 * reset.h
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
void reset(int *ip);

/*
 * 指针形参
 */
void reset(int *ip) {
	*ip = 0;
	ip = 0;
}

