/*
�������� ���� ��� �����. ��������� �������� ++, �� ����� �����, ������
�������� - �� ������ �������� +, �� ����� �������. ���� �� ���� ����������� ��
����������, ����������� �����������, ����������� ��������� � ����������.
��������� ������� �������� ��������-���������.
*/

#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Integer
{
private:
	int num;
public:
	Integer();
	Integer(int);
	Integer(Integer&);
	~Integer();
	void Read();
	void Display();
	void SetNum(int num) { this->num = num; };
	int GetNum() { return this->num; };
	Integer& operator ++();
	friend Integer operator +(Integer, Integer); // �������
	friend Integer operator +(Integer); // �������
	friend ostream& operator << (ostream&, const Integer&);
	friend istream& operator >> (istream&, Integer&);
	operator string() const;
};

