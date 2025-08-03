#include <WolfOfWallstreet/Game/Data/SocialSecurityNumber.h>
#include <format>

using namespace WolfOfWallstreet::Game::Data;

uint32_t SocialSecurityNumber::SSNGetAreaCode(const social_security_number* const a_socialSecurityNumber) {
    return (*a_socialSecurityNumber & 0b01111111111000000000000000000000) >> 21;
}

uint32_t SocialSecurityNumber::SSNGetGroupCode(const social_security_number* const a_socialSecurityNumber) {
    return (*a_socialSecurityNumber & 0b00000000000111111100000000000000) >> 14;
}

uint32_t SocialSecurityNumber::SSNGetSerialCode(const social_security_number* const a_socialSecurityNumber) {
    return (*a_socialSecurityNumber & 0b00000000000000000011111111111111);
}

bool SocialSecurityNumber::SSNSetAreaCode(social_security_number& a_socialSecurityNumber, uint32_t a_areaCode) {
    if (a_areaCode >= SocialSecurityNumber::MIN_AREA_CODE && a_areaCode <= SocialSecurityNumber::MAX_AREA_CODE && a_areaCode != SocialSecurityNumber::INVALID_AREA_CODE) {
        a_socialSecurityNumber = (a_socialSecurityNumber & 0b00000000000111111111111111111111) | ((a_areaCode << 21) & 0b01111111111000000000000000000000);
        return true;
    }
    return false;
}

bool SocialSecurityNumber::SSNSetGroupCode(social_security_number& a_socialSecurityNumber, uint32_t a_groupCode) {
    if (a_groupCode >= SocialSecurityNumber::MIN_GROUP_CODE && a_groupCode <= SocialSecurityNumber::MAX_GROUP_CODE) {
        a_socialSecurityNumber = (a_socialSecurityNumber & 0b01111111111000000011111111111111) | ((a_groupCode << 14) & 0b00000000000111111100000000000000);
        return true;
    }
    return false;
}

bool SocialSecurityNumber::SSNSetSerialCode(social_security_number& a_socialSecurityNumber, uint32_t a_serialCode) {
    if (a_serialCode >= SocialSecurityNumber::MIN_SERIAL_CODE && a_serialCode <= SocialSecurityNumber::MAX_SERIAL_CODE) {
        a_socialSecurityNumber = (a_socialSecurityNumber & 0b01111111111111111100000000000000) | (a_serialCode & 0b00000000000000000011111111111111);
        return true;
    }
    return false;
}

std::string SocialSecurityNumber::SSNFormat(const social_security_number* const a_socialSecurityNumber) {
    return std::format("{:03d}-{:02d}-{:04d}", SocialSecurityNumber::SSNGetAreaCode(a_socialSecurityNumber), SocialSecurityNumber::SSNGetGroupCode(a_socialSecurityNumber), SocialSecurityNumber::SSNGetSerialCode(a_socialSecurityNumber));
}