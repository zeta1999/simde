/* SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Copyright:
 *   2020      Evan Nemerson <evan@nemerson.com>
 *   2020      Sean Maher <seanptmaher@gmail.com>
 */

#if !defined(SIMDE_ARM_NEON_LD4_H)
#define SIMDE_ARM_NEON_LD4_H

#include "types.h"
#include "ld1.h"

HEDLEY_DIAGNOSTIC_PUSH
SIMDE_DISABLE_UNWANTED_DIAGNOSTICS
SIMDE_BEGIN_DECLS_

SIMDE_FUNCTION_ATTRIBUTES
simde_float32x2x4_t
simde_vld4_f32(simde_float32 const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_f32(ptr);
  #else
    simde_float32x2x4_t s_;
    s_.val[0] = simde_vld1_f32(ptr + 0);
    s_.val[1] = simde_vld1_f32(ptr + 2);
    s_.val[2] = simde_vld1_f32(ptr + 4);
    s_.val[3] = simde_vld1_f32(ptr + 6);
    return (s_);
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_f32
  #define vld4_f32(a) simde_vld4_f32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_float64x1x4_t
simde_vld4_f64(simde_float64 const *ptr) {
  #if defined(SIMDE_ARM_NEON_A64V8_NATIVE)
    return vld4_f64(ptr);
  #else
    simde_float64x1x4_t s_;
    s_.val[0] = simde_vld1_f64(ptr + 0);
    s_.val[1] = simde_vld1_f64(ptr + 1);
    s_.val[2] = simde_vld1_f64(ptr + 2);
    s_.val[3] = simde_vld1_f64(ptr + 3);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A64V8_ENABLE_NATIVE_ALIASES)
  #undef vld4_f64
  #define vld4_f64(a) simde_vld4_f64((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int8x8x4_t
simde_vld4_s8(int8_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_s8(ptr);
  #else
    simde_int8x8x4_t s_;
    s_.val[0] = simde_vld1_s8(ptr + 0);
    s_.val[1] = simde_vld1_s8(ptr + 8);
    s_.val[2] = simde_vld1_s8(ptr + 16);
    s_.val[3] = simde_vld1_s8(ptr + 24);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_s8
  #define vld4_s8(a) simde_vld4_s8((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int16x4x4_t
simde_vld4_s16(int16_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_s16(ptr);
  #else
    simde_int16x4x4_t s_;
    s_.val[0] = simde_vld1_s16(ptr + 0);
    s_.val[1] = simde_vld1_s16(ptr + 4);
    s_.val[2] = simde_vld1_s16(ptr + 8);
    s_.val[3] = simde_vld1_s16(ptr + 12);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_s16
  #define vld4_s16(a) simde_vld4_s16((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x2x4_t
simde_vld4_s32(int32_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_s32(ptr);
  #else
    simde_int32x2x4_t s_;
    s_.val[0] = simde_vld1_s32(ptr + 0);
    s_.val[1] = simde_vld1_s32(ptr + 2);
    s_.val[2] = simde_vld1_s32(ptr + 4);
    s_.val[3] = simde_vld1_s32(ptr + 6);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_s32
  #define vld4_s32(a) simde_vld4_s32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int64x1x4_t
simde_vld4_s64(int64_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_s64(ptr);
  #else
    simde_int64x1x4_t s_;
    s_.val[0] = simde_vld1_s64(ptr + 0);
    s_.val[1] = simde_vld1_s64(ptr + 1);
    s_.val[2] = simde_vld1_s64(ptr + 2);
    s_.val[3] = simde_vld1_s64(ptr + 3);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_s64
  #define vld4_s64(a) simde_vld4_s64((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint8x8x4_t
simde_vld4_u8(uint8_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_u8(ptr);
  #else
    simde_uint8x8x4_t s_;
    s_.val[0] = simde_vld1_u8(ptr + 0);
    s_.val[1] = simde_vld1_u8(ptr + 8);
    s_.val[2] = simde_vld1_u8(ptr + 16);
    s_.val[3] = simde_vld1_u8(ptr + 24);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_u8
  #define vld4_u8(a) simde_vld4_u8((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint16x4x4_t
simde_vld4_u16(uint16_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_u16(ptr);
  #else
    simde_uint16x4x4_t s_;
    s_.val[0] = simde_vld1_u16(ptr + 0);
    s_.val[1] = simde_vld1_u16(ptr + 4);
    s_.val[2] = simde_vld1_u16(ptr + 8);
    s_.val[3] = simde_vld1_u16(ptr + 12);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_u16
  #define vld4_u16(a) simde_vld4_u16((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint32x2x4_t
simde_vld4_u32(uint32_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_u32(ptr);
  #else
    simde_uint32x2x4_t s_;
    s_.val[0] = simde_vld1_u32(ptr + 0);
    s_.val[1] = simde_vld1_u32(ptr + 2);
    s_.val[2] = simde_vld1_u32(ptr + 4);
    s_.val[3] = simde_vld1_u32(ptr + 6);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_u32
  #define vld4_u32(a) simde_vld4_u32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint64x1x4_t
simde_vld4_u64(uint64_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4_u64(ptr);
  #else
    simde_uint64x1x4_t s_;
    s_.val[0] = simde_vld1_u64(ptr + 0);
    s_.val[1] = simde_vld1_u64(ptr + 1);
    s_.val[2] = simde_vld1_u64(ptr + 2);
    s_.val[3] = simde_vld1_u64(ptr + 3);
    return s_;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4_u64
  #define vld4_u64(a) simde_vld4_u64((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_float32x4x4_t
simde_vld4q_f32(simde_float32 const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_f32(ptr);
  #else
    simde_float32x4x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_f32
  #define vld4q_f32(a) simde_vld4q_f32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_float64x2x4_t
simde_vld4q_f64(simde_float64 const *ptr) {
  #if defined(SIMDE_ARM_NEON_A64V8_NATIVE)
    return vld4q_f64(ptr);
  #else
    simde_float64x2x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A64V8_ENABLE_NATIVE_ALIASES)
  #undef vld4q_f64
  #define vld4q_f64(a) simde_vld4q_f64((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int8x16x4_t
simde_vld4q_s8(int8_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_s8(ptr);
  #else
    simde_int8x16x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_s8
  #define vld4q_s8(a) simde_vld4q_s8((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int16x8x4_t
simde_vld4q_s16(int16_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_s16(ptr);
  #else
    simde_int16x8x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_s16
  #define vld4q_s16(a) simde_vld4q_s16((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4x4_t
simde_vld4q_s32(int32_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_s32(ptr);
  #else
    simde_int32x4x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_s32
  #define vld4q_s32(a) simde_vld4q_s32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_int64x2x4_t
simde_vld4q_s64(int64_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_s64(ptr);
  #else
    simde_int64x2x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_s64
  #define vld4q_s64(a) simde_vld4q_s64((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint8x16x4_t
simde_vld4q_u8(uint8_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_u8(ptr);
  #else
    simde_uint8x16x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_u8
  #define vld4q_u8(a) simde_vld4q_u8((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint16x8x4_t
simde_vld4q_u16(uint16_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_u16(ptr);
  #else
    simde_uint16x8x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_u16
  #define vld4q_u16(a) simde_vld4q_u16((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint32x4x4_t
simde_vld4q_u32(uint32_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_u32(ptr);
  #else
    simde_uint32x4x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_u32
  #define vld4q_u32(a) simde_vld4q_u32((a))
#endif

SIMDE_FUNCTION_ATTRIBUTES
simde_uint64x2x4_t
simde_vld4q_u64(uint64_t const *ptr) {
  #if defined(SIMDE_ARM_NEON_A32V7_NATIVE)
    return vld4q_u64(ptr);
  #else
    simde_uint64x2x4_t r;
    simde_memcpy(&r, ptr, sizeof(r));
    return r;
  #endif
}
#if defined(SIMDE_ARM_NEON_A32V7_ENABLE_NATIVE_ALIASES)
  #undef vld4q_u64
  #define vld4q_u64(a) simde_vld4q_u64((a))
#endif

SIMDE_END_DECLS_
HEDLEY_DIAGNOSTIC_POP

#endif /* !defined(SIMDE_ARM_NEON_LD4_H) */
