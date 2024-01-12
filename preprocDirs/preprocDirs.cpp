#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE needs to be defined!
#endif

int main()
{
	setlocale(LC_ALL, "Russian");
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	#define add(num1, num2) num1 + num2

	int num1, num2;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 2: ";
	std::cin >> num2;
	std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
	return 0;
}
