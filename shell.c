#include "shell.h"

#include "gaps.h"
#include "stats.h"

#include <stdint.h>
#include <stdio.h>

void shell_sort(Stats *stats, uint32_t *A, uint32_t length) {
    for (uint32_t g = 0; g < GAPS; g++) {
        uint32_t gap = gaps[g];
        for (uint32_t i = gap; i < length; i++) {
            uint32_t j = i;
            uint32_t temp = move(stats, A[i]);
            while (j >= gap && cmp(stats, temp, A[j - gap]) == -1) {
                A[j] = move(stats, A[j - gap]);
                j -= gap;
            }
            A[j] = move(stats, temp);
        }
    }
}
