#pragma once
#ifndef DATE_H
#define DATE_H
#include <time.h>

namespace WolfOfWallstreet::Game::Time {
    struct Date {
    public:
        time_t time;

        time_t TimeFrom(Date);
        time_t TimeTo(Date);
    };
}
#endif