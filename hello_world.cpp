#include<iostream> //подключение библиотек
#include<string>

int main() {
	string name; //создание переменной
	std::cout << "Введите ваше имя: "; //запрос
	std::cin >> name; //ввод имени
	std::cout << "Hello world from " << name << std::endl; //вывод приветствия
	return 0;
}
