#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance :public CCar {
public:
    // コンストラクタ
    CAmbulance();
    // デストラクタ
    virtual ~CAmbulance();
    // 救命
    void rescue();

private:
    int m_number;
};

#endif // _AMBULANCE_H_
