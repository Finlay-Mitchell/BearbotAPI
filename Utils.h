#pragma once
#pragma warning(disable : 4996)


#ifdef UTILS_EXPORTS
#define UTILS_API __declspec(dllexport)
#else
#define UTILS_API __declspec(dllimport)
#endif

#include "pch.h"
#include <string>
#include <memory>
#include <chrono>
#include <ctime>

		extern "C"
		{
			namespace BearBotAPI
			{
				namespace Utils
				{
					class Utils
					{
					public:
						UTILS_API int larger(int, int);
						UTILS_API std::string dateTime(uint8_t);
						UTILS_API char* str2charptr(std::string);

					private:
					};
				}
			}
		}