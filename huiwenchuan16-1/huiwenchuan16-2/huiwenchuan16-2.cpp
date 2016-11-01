// huiwenchuan16-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

//char toLower(char ch) { return tolower(ch); }
bool judge(const std::string & s);
int main()
{
	std::string s;
	std::cout << "Please enter a string (enter quit to quit):\n";
	while (std::cin >> s && s != "quit")
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
	for (auto ch = ss.begin(); ch != ss.end(); ch++)
	{
		if (isalpha(*ch))
			*ch = tolower(*ch);		//转换成小写
		else
		{
			ss.erase(ch);			//把不是字母的删掉
			ch--;
		}
	}
	std::cout << "ss is:";
	std::cout << ss << std::endl;
	reverse(ss.begin(), ss.end());
	
	if (s.compare(ss) == 0)
		return true;
	else return false;
}


