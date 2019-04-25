// Lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int main()
{
	char string[] = "Hello World!";
	char example[] = { '\0', ' ', ',' , '.' };

	int pointer = 1;
	int length_of_ex = strlen(example);
	int length = strlen(string);
	std::cout << length << "\n";


	for (size_t i = 0; i <= length; i++)
	{
		if (string[0] == string[i])
		{

		}
		else if ((string[0] != string[i]))
		{
			pointer++;
		}
	}

	std::cout << pointer;
}
