/*
 * test.cc
 *
 *  Created on: 2 May 2017
 *      Author: duanxiangrong
 */
#include <iostream>

#include "print.h"
#include "reset.h"

using namespace std;

int j[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main() {

//	int i = 42;
//	cout << &i << endl;
//	cout << i << endl;
//	reset(&i);
//	cout << &i << endl;
//	cout << i << endl;

	print("hello world");
	print(begin(j), end(j));
	print(j, end(j) - begin(j));

	return 0;
}

