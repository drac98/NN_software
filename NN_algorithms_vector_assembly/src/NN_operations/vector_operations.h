#ifndef VECTOR_OPERATIONS_H_
#define VECTOR_OPERATIONS_H_

#include <stdlib.h>
#include <stdint.h>

#define MAX_INT8_T 127
#define MIN_INT8_T -128

#define MAX_N_8BIT_VEC_REG 32/8*4
#define MAX_N_16BIT_VEC_REG 32/16*4

extern void vect_add(unsigned int N, const int8_t *vec1, const int8_t *vec2, int8_t *vecOut);
extern void vect_mult(unsigned int N, const int8_t *vec1, const int8_t *vec2, int8_t *vecOut);

extern void vect_addReduction(unsigned int N, const int8_t *vec1, int16_t *scalarOut);
extern void vect_maxReduction(unsigned int N, const int8_t *vec1, int8_t *scalarOut);
extern void vect_dotProduct(unsigned int N, const int8_t *vec1, const int8_t *vec2, int32_t *scalarOut);

extern void vect_add_stride_vec2(unsigned int N, const int16_t *vec1,const int8_t *vec2, int16_t *vecOut, uint32_t stride);
extern void vect_max_stride_vec2(unsigned int N, const int8_t *vec1,const int8_t *vec2, int8_t *vecOut, uint32_t stride);
extern void vect_dotProduct_stride_vec2(unsigned int N, const int8_t *vec1, const int8_t *vec2, int32_t *scalarOut, uint32_t stride);

//------------------------------------------------------------------------
extern void vect_add_accum_vec1_stride_vec2(unsigned int N, const int8_t *vec2, uint32_t stride);
extern void vect_max_accum_vec1_stride_vec2(unsigned int N, const int8_t *vec2, uint32_t stride);

extern void vect_load_vec1_8bits(int8_t value);
extern void vect_load_vec1_16bits(int16_t value);
extern void vect_store_vec1_8bits(unsigned int N,const int8_t *vec1);
extern void vect_store_vec1_16bits(unsigned int N,const int16_t *vec1);
//------------------------------------------------------------------------

extern void vect_ReLu(unsigned int N, const int8_t *vec1, int8_t *vecOut);
extern void vect_ReLu6(unsigned int N, const int8_t *vec1, int8_t *vecOut);

extern void vect_copy(unsigned int N,const int8_t *vec1, int8_t *vecOut);
extern void vect_copy_reg(unsigned int N,const int8_t value, int8_t *vecOut);


int8_t saturate_16bit_to_8bit(int16_t input);
int8_t saturate_32bit_to_8bit(int32_t input);


#endif /* VECTOR_OPERATIONS_H_ */
