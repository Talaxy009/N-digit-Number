// N digit Number.cpp : �������̨Ӧ�ó������ڵ㡣
//Nλ��ʶ��

#include "stdafx.h"
#include<iostream>
using namespace std;

void Nep(int);
int main()
{
	int t; char ch;
	do
	{
		cout << "������һ������" << endl;
		cin >> t;
		Nep(t);
		cout << "�Ƿ��������Y/N��" << endl;
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
		cout << "��ĵ�"<<i+1-j<<"λ���ǣ�"<<T[i - j] << endl;
		j--;
	}
	cout << "���������" << i << "λ��" << endl;
}