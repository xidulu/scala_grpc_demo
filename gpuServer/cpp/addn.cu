#include <stdio.h>

extern "C" __global__ void add_n(int *nums, int n, int size) {
	nums[threadIdx.x] += n;
}