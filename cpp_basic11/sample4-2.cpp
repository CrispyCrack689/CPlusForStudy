#include <iostream>
#include "car.h"

using namespace std;

int main()
{
	CCar* pC = 0;
	pC = new CCar();		// インスタンス生成
	pC->supply(10);		// 燃料補給
	pC->move();				// 移動
	pC->move();				// 移動
	delete pC;				// インスタンス消去
	cout << "インスタンス消去終了" << endl;

	return 0;
}