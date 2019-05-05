#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char str[21];

	cout << "Введите массив символов из 20 символов, состоящий из строчных букв, " << "\n" <<"точек с запятой между словами и с восклицательным знаком на конце" << "\n";

	for (int a = 1; a < 19; a++) {
		
		cin >> str[a];

	}
	cout << "Вот слова, которые начинаются и заканчиваюстя на одну и ту же букву:" << "\n";
	
	unsigned i, j;
	int count = -1;

	for (i = 0; i < strlen(str); i++)
	{
		count++;
		if (str[i] == ';' || str[i] == '!')
		{
			if (str[i - count] == str[i - 1])
			{
				for (j = i - count; j <= i - 1; j++)
					std::cout << str[j];
				std::cout << std::endl;
			}
			count = -1;
		}


	}
}

