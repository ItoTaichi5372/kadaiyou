#include"Circle.h"

Circle::Circle()
{
	PI = 3.14f;
}
//ここのコンストラクタ何入れればいいかわからない
//現状はPIを3.14として初期化するものを入れたつもり

float Circle::Menseki(float r)
{
	return r * r * PI;
}