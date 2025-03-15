#include<iostream> //join library
#include<string>

int main() {
	string name; //создание переменной
	std::cout << "Введите ваше имя: "; //запрос имение пользователя
	std::cin >> name; //ввод имени
	std::cout << "Hello world from " << name << std::endl; //вывод приветствия
	return 0;
}
