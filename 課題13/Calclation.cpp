#include<iostream>
#include"Calclation.h"

void Calclation::SetA(float a)
{
	x = a;
	//�v�Z���������Ă�̂��킩��Ȃ�
}

void Calclation::SetB(float b)
{
	y = b;
	//�����Z�̕�������ăZ�b�gB�ɓ����
}

void Calclation::Disp()
{

	std::cout << x << " + " << y << " = " << (x + y) << "\n";
	std::cout << x << " - " << y << " = " << (x - y) << "\n";
	//������cout�ŏo��

	//�l���Ă��o�Ă��Ȃ�����
}