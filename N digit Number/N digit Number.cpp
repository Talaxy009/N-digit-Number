// N digit Number.cpp : 定义控制台应用程序的入口点。
//N位数识别

#include "stdafx.h"
#include<iostream>
using namespace std;

void Nep(int);
int main()
{
	int t; char ch;
	do
	{
		cout << "请输入一个整数" << endl;
		cin >> t;
		Nep(t);
		cout << "是否继续？（Y/N）" << endl;
		cin >> ch;
	} while (ch==89||ch==121);
	return 0;
}
void Nep(int N)
{
	int p = 10, n = N, i = 1;
	while (n / p != 0)
	{
		n = n / p;
		i++;
	}
	int *T = new int[i];
	int j = i; n = N;
	while (j > 0)
	{
		T[i-j] = n%p;
		n = (n - T[i - j]) / p;
		cout << "你的第"<<i+1-j<<"位数是："<<T[i - j] << endl;
		j--;
	}
	cout << "你输入的是" << i << "位数" << endl;
}