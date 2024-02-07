#pragma once
#include "stdint.h"


class Motor
{

public:
    Motor(uint8_t rechts, uint8_t links);
    ~Motor();

    void stop();
    void start(bool direction);
    void startLinks();
    void startRechts();
private:
    uint8_t pinLinks;
    uint8_t pinRechts;
};

