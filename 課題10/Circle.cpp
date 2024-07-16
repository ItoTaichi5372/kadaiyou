#include"Circle.h"

Circle(float PI) : 3.14(PI)
//ここのコンストラクタ何入れればいいかわからない
//現状はPIを3.14として初期化するものを入れたつもり

void Circle::Menseki(float r)
{
	return r * r * PI;
}