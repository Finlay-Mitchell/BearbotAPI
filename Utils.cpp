#include "pch.h"
#include "Utils.h"

int BearBotAPI::Utils::Utils::larger(int a, int b)
{
	return a > b ? a : b;
}

#pragma warning(disable : 4996)

std::string BearBotAPI::Utils::Utils::dateTime(uint8_t type)
{
    std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string s(30, '\0');

    switch (type)
    {
    case 0:
        std::strftime(&s[0], s.size(), "%Y-%m-%d - %H:%M:%S", std::localtime(&now));
        s.append(" UTC");
        break;

    case 1:
        std::strftime(&s[0], s.size(), "%d-%m-%Y - %H:%M:%S", std::localtime(&now));
        s.append(" UTC");
        break;
    }

    return s;
}

char* BearBotAPI::Utils::Utils::str2charptr(std::string str)
{
    char* writable = new char[str.size() + 1];
    std::copy(str.begin(), str.end(), writable);
    writable[str.size()] = '\0';
    return writable;
    delete[] writable;
}

