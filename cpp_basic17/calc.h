#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
public:
    CCalc();

    // コンストラクタ(引数付き)
    CCalc(int a, int b);
    // 足し算(その1)
    int add();
    // 足し算(その2)
    int add(int a, int b);
    // 値をセット
    void setValue(int a, int b);
    // 値を取得(A)
    int getA();
    // 値を取得(B)
    int getB();

private:
    int m_a, m_b;
};

#endif // !_CALC_H_
