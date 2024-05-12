#include <iostream>

using namespace std;

bool judge(int);

int main() {
    int n;
    cout << "®”‚ğ“ü—Í: ";
    cin >> n;
    if (judge(n)) {
        cout << "‚±‚Ì”‚Í0ˆÈã‚Å‚·B" << endl;
    }
    else {
        cout << "‚±‚Ì”‚Í0–¢–‚Å‚·B" << endl;
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
