#include"Circle.h"

Circle::Circle()
{
	PI = 3.14f;
}
//�����̃R���X�g���N�^�������΂������킩��Ȃ�
//�����PI��3.14�Ƃ��ď�����������̂���ꂽ����

float Circle::Menseki(float r)
{
	return r * r * PI;
}