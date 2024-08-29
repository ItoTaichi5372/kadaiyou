#include"Calclation.h"

void SetX(float a, float b);
void SetY(float a, float b);

Calclation x, y;

int main()
{
	SetX(5.0, 10.0);
	x. Disp();

	SetY(8.0, 3.0);
	y. Disp();
}

void SetX(float a, float b)
{
	x.SetA(a);
	x.SetB(b);
}

void SetY(float a, float b)
{
	y.SetA(a);
	y.SetB(b);
}