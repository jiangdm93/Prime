// reduce16-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void show(long x) { std::cout.width(6); std::cout << x << "  "; }
int main()
{
	long aa[] = { 5,7,3,9,10,54,1,3,4,5,88,5,4,3 };
	std::for_each(aa,aa+14,show);
	std::cout << std::endl;
	int num = reduce(aa, 14);
	std::for_each(aa, aa + num, show);
	std::cout << std::endl;
	system("pause");
    return 0;
}

int reduce(long ar[], int n)
{
	std::sort(ar,ar+n);
	long *p = std::unique(ar, ar + n);
	return p - ar;
}