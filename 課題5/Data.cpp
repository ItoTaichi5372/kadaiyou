#include<iostream>
#include"Data.h"

void Data::SetValue(int a)
{
	value = a;
}

void Data::Disp()
{
	std::cout << "メンバ変数の値は" << value << "\n";
}