#include<iostream>
#include"Calclation.h"

void Calclation::SetA(float a)
{
	x = a;
	//計算式が合ってるのかわからない
}

void Calclation::SetB(float b)
{
	y = b;
	//引き算の方をやってセットBに入れる
}

void Calclation::Disp()
{

	std::cout << x << " + " << y << " = " << (x + y) << "\n";
	std::cout << x << " - " << y << " = " << (x - y) << "\n";
	//両方をcoutで出す

	//考えても出てこなかった
}