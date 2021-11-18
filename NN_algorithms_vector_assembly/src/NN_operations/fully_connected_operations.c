#include "fully_connected_operations.h"

void fully_connected(
	const uint32_t N, 
	const uint32_t out,
	int8_t data[N],
	int8_t weights[out][N],
	int8_t output[out]){

    for(int i = 0; i<out; i++){
        vect_dotProduct(N, data, &weights[i], &output[i]);
    }
}
