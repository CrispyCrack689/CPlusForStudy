#include <iostream>

using namespace std;

int main() {
	int* p = 0;
	int i;
	p = new int[10];			// int型10個分の領域を動的確保
	for (i = 0; i < 10; i++) {
		p[i] = i;
		cout << p[i] << endl;
	}
	delete[] p;					// 配列の領域を解放

	return 0;
}