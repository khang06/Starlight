/**
 * @file cxa.h
 * @brief One-Time Constru(X)tion API.
 */

#pragma once

#include "types.h"

extern s32 __cxa_guard_acquire(u32 *guard);
extern void __cxa_guard_release(u32 *guard);