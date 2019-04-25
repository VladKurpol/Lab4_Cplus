// Lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <set>

int main()
{
	std::string str{ "voyVoy polegche" };
	std::set<char> letters{ str.begin(), str.end() };
	std::cout << letters.size() << "\n";
}
