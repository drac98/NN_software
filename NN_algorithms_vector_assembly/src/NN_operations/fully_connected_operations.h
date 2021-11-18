#ifndef NN_OPERATIONS_H_
#define NN_OPERATIONS_H_

#include <stdlib.h>
#include <stdint.h>
#include "vector_operations.h"

void fully_connected(
	const uint32_t N, 
	const uint32_t out,
	int8_t data[N],
	int8_t weights[out][N],
	int8_t output[out]);

#endif /* NN_OPERATIONS_H_ */