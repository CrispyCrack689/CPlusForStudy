#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
public:
    CCalc();

    // �R���X�g���N�^(�����t��)
    CCalc(int a, int b);
    // �����Z(����1)
    int add();
    // �����Z(����2)
    int add(int a, int b);
    // �l���Z�b�g
    void setValue(int a, int b);
    // �l���擾(A)
    int getA();
    // �l���擾(B)
    int getB();

private:
    int m_a, m_b;
};

#endif // !_CALC_H_
