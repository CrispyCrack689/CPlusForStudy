#include "sample.h"

int main() {
    Sample *p1;
    //Sample *p2;
    p1 = new Sample(1);
    //p2 = new Sample();    // デフォルトコンストラクタ(エラー)

    return 0;
}