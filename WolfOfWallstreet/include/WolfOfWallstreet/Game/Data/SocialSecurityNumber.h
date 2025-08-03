#pragma once
#ifndef SOCIAL_SECURITY_NUMBER_H
#define SOCIAL_SECURITY_NUMBER_H
#include <stdint.h>
#include <string>

namespace WolfOfWallstreet::Game::Data {
    typedef uint32_t social_security_number;

    namespace SocialSecurityNumber {
        const uint16_t MIN_AREA_CODE = 1;
        const uint16_t INVALID_AREA_CODE = 666;
        const uint16_t MAX_AREA_CODE = 899;

        const uint8_t MIN_GROUP_CODE = 0;
        const uint8_t MAX_GROUP_CODE = 99;

        const uint16_t MIN_SERIAL_CODE = 0;
        const uint16_t MAX_SERIAL_CODE = 9999;

        uint32_t SSNGetAreaCode(const social_security_number* const);
        uint32_t SSNGetGroupCode(const social_security_number* const);
        uint32_t SSNGetSerialCode(const social_security_number* const);

        bool SSNSetAreaCode(social_security_number&, uint32_t);
        bool SSNSetGroupCode(social_security_number&, uint32_t);
        bool SSNSetSerialCode(social_security_number&, uint32_t);
    }
}
#endif