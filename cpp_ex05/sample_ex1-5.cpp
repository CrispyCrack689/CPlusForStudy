#include <iostream>

using namespace std;

bool judge(int);

int main() {
    int n;
    cout << "���������: ";
    cin >> n;
    if (judge(n)) {
        cout << "���̐���0�ȏ�ł��B" << endl;
    }
    else {
        cout << "���̐���0�����ł��B" << endl;
    }

    return 0;
}

bool judge(int n) {
    if (n >= 0) {
        return true;
    }
    else {
        return false;
    }
}
