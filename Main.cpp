//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <fstream>
#include <string>


int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;
	std::string tmp;

	std::cout << "Task 1: \n";
	std::string path = "file.txt";
	std::ofstream out;
	out.open("file.txt", std::ios::app);
	if (out.is_open()) {
		std::cout << "Файл открыт для записи: \n";
		do {
			std::cout << "Введите строку: \n";
			std::getline(std::cin, tmp);
			out << tmp + '\n';
		} while (tmp != "end" && tmp != "End");
	}
	else
		std::cout << "Ошибка открытия файла: \n";

	std::ifstream in; 
	in.open("file.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			std::string tmp;
			getline(in, tmp);
			std::cout << tmp << '\n';
		}
	}
	else 
		std::cout << "Ошибка открытия файла: \n";

	in.close();
	remove("file.txt");


	std::cout << "Task 2: \n";









	out.close();












	return 0;
}