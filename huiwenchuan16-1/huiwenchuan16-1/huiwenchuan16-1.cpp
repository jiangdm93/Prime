// huiwenchuan16-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

bool judge(const std::string & s);
int main()
{
	std::string s;
	std::cout << "Please enter a string (enter quit to quit):\n";
	while ( std::cin >> s && s != "quit" )
	{
		if (judge(s) == true)
			std::cout << "this string is huiwenchuan\n";
		else std::cout << "this string is not huiwenchuan\n";
		std::cout << "test again\n";
	}
	return 0;
}

bool judge(const std::string & s)
{
	std::string ss = s;
	//std::cout << "ss is:";
	reverse(ss.begin(),ss.end());
	//std::cout << ss << std::endl;
	if (s.compare(ss) == 0)
		return true;
	else return false;
}
