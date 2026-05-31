#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout << "Привіт! Сьогодні чудовий день! :)"; 
	char name[80];
	cout << "Як Вас звати?\n";
	cout << "->_";
	cin.getline(name, 80, '\n');
	cout << "Приємно познайомитися " << name << " :)\n";
	return 0;
}
