#pragma once
#include "sys/time.h"
#include "stdio.h"
#include <stdint.h>
// typedef unsigned char uint8_t;
// typedef char int8_t;
// typedef unsigned short uint16_t;
// typedef short int16_t;
// typedef unsigned int uint32_t;
// typedef int int32_t;
typedef unsigned char byte;

#define PI (3.1415926535)
#define DEG_TO_RAD (0.01745329)
#define RAD_TO_DEG (57.2957795)

uint32_t micros()
{
    timeval t;
    gettimeofday(&t, nullptr);
    return t.tv_sec * 1000000 + t.tv_usec;
}