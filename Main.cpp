//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <fstream>
#include <string>


bool overwrite(std::string path, std::string str);



int main() {
	setlocale(LC_ALL, "Russian");
	
	std::string tmp, tmp1;

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
	out.close();

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
	std::string path1 = "file1.txt";
	std::cout << "Введите строку: \n";
	std::getline(std::cin, tmp1);

	if (overwrite(path1, tmp1))
		std::cout << "TRUE\n";
	else
		std::cout << "FALSE\n";



	return 0;
}

bool overwrite(std::string path, std::string str) {
	std::ofstream out;
	out.open(path, std::ios::out);
	if (out.is_open()) {
		out << str + '\n';
		out.close();
		return true;
	}
	else
		return false;


}