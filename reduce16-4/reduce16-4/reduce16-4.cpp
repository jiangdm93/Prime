// reduce16-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

template<class T>
int reduce(T ar[], int n);
template<class T>
void show(T x) { std::cout.width(6); std::cout << x << "  "; }
int main()
{
	double aa[] = { 5.1,7,3.125,9,10,54,1,3,4,5,88,5.8,4,3.125 };
	std::for_each(aa,aa+14,show<double>);
	std::cout << std::endl;
	int num = reduce(aa, 14);
	std::for_each(aa, aa + num, show<double>);
	std::cout << std::endl;
	system("pause");
    return 0;
}

template<class T>
int reduce(T ar[], int n)
{
	std::sort(ar,ar+n);
	T *p = std::unique(ar, ar + n);
	return p - ar;
}