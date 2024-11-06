// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	queue<int> q;
	int n, x, sum = 0;
	cout << "Введіть розмір черги: ";
	cin >> n;
	cout << "Введіть " << n << " цілих чисел:\n";
	for (int i = 0; i < n; i++) {
		cin >> x;
		q.push(x);
	}
	while (!q.empty()) {
		if (q.front() < 0) {
			sum += q.front();
		}
		q.pop();
	}

	cout << "Сума від'ємних елементів черги: " << sum << endl;
}

