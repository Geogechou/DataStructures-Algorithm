// ConsoleApplication53.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "stack.h"
int main()
{
	Stack<char> s1;
	char array[] = { 'a','b','c','d','e','f','g' };
	for(int i=0;i<7;i++)
	s1.push(array[i]);
	while(!s1.isEmpty())
	cout << s1.pop()<<"  ";
}

