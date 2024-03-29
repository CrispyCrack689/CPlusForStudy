#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
	Sample s;
	s.a = 1;
	//s.b = 2;	// エラー: Sample::b は private です
	s.func1();
	//s.func2();	// エラー: Sample::func2() は private です
}