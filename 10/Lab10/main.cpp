#include "header.h"
#include <assert.h>
#include <iostream>
#include <string>


int main() {
	setlocale(LC_ALL, "rus");
	std::cout << "\n\n�������� ������� ��������:\n\n";
	std::cout << "��� ����� ������������� ����� 7523 � 64444\n";
	assert(min<int>(7523, 64444) == 7523);
	std::cout << "��������� ��������� ��������! \n";
	std::cout << "��� ����� ������������� ����� -5555 � -3\n";
	assert(min<int>(-5555, -3) == -5555);
	std::cout << "��������� ��������� ��������!\n";
	std::cout << "��� ������������ ������������� ����� 2.3 � 4.5 \n";
	assert(min<double>(2.3, 4.5) == 2.3);
	std::cout << "���������� ��������� ��������!\n";
	std::cout << "��� ������������ �������� ����� 12.43 � -4.5\n";
	assert(min<double>(12.43, -4.5) == -4.5);
	std::cout << "��������� ��������� ��������!\n";
	std::cout << "��� ���� �������� 1 � 2\n";
	assert(min<char>('1', '2') == '1');
	std::cout << "��������� ��������� ��������!\n";
	std::cout << "\n\n�������� ������� ����������:\n\n";
	std::cout << "������� ������������� ������ 5, 6, -3\n";
	assert(proverka1(sort<int>(new int[3]{ 5,6,-3 }, 3)) == true);
	std::cout << "������ ������������ ���������! -3, 5, 6\n";
	std::cout << "������� ������������� ������ 5.3, 6.3, -3.3\n";
	assert(proverka2(sort<double>(new double[3]{ 5.3, 6.3, -3.3 }, 3)) == true);
	std::cout << "������ ������������ ���������! -3.3, 5.3, 6.3\n";
	std::cout << "������� ������������� ������ c, a, p\n";
	assert(proverka3(sort<char>(new char[3]{ 'c','a','p' }, 3)) == true);
	std::cout << "������ ������������ ���������! 'a' 'c' 'p'\n";
	std::cout << "\n\n�������� ������� ����:\n\n";
	std::cout << "��������� ������� 1, -2, 3\n";
	assert((sum<int>(new int[3]{ 1,-2,3 }, 3)) == 2);
	std::cout << "�������� ������ �������!\n";
	std::cout << "��������� ������� 1.2, 1.3, 1.5\n";
	assert(sum<double>(new double[3]{ 1.2, 1.3, 1.5 }, 4) == 4);
	std::cout << "�������� ������ �������!\n";
	std::cout << "��������� ������� a, b, c\n";
	assert(sum<char>(new char[3]{ 'a', 'b', 'c' }, 3) == (char)294);
	std::cout << "�������� ������ �������!\n";
	system("pause");
	return 1;
}