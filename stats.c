#include <stdio.h>
#include "stats.h"

int main() {
    unsigned char test[15] = { 34, 201, 190, 154, 198, 267, 67, 125, 876, 295, 87, 123, 11, 543, 26 };
    
    printf("Original Array:\n");
    print_array(test, 15);
    
    sort_array(test, 15);
    
    printf("\nSorted Array (descending):\n");
    print_array(test, 15);
    
    print_statistics(test, 15);
    return 0;
}

unsigned char find_median(unsigned char *ptr, unsigned int length) {
    sort_array(ptr, length);
    return (length % 2 == 0) ? 
        (ptr[length/2 - 1] + ptr[length/2]) / 2 : 
        ptr[length/2];
}

unsigned char find_mean(unsigned char *ptr, unsigned int length) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += ptr[i];
    }
    return sum / length;
}

unsigned char find_maximum(unsigned char *ptr, unsigned int length) {
    unsigned char max = ptr[0];
    for (unsigned int i = 1; i < length; i++) {
        if (ptr[i] > max) max = ptr[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int length) {
    unsigned char min = ptr[0];
    for (unsigned int i = 1; i < length; i++) {
        if (ptr[i] < min) min = ptr[i];
    }
    return min;
}

void sort_array(unsigned char *ptr, unsigned int length) {
    for (unsigned int i = 0; i < length - 1; i++) {
        for (unsigned int j = 0; j < length - i - 1; j++) {
            if (ptr[j] < ptr[j + 1]) {
                unsigned char temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

void print_array(unsigned char *ptr, unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        printf("%u ", ptr[i]);
    }
    printf("\n");
}

void print_statistics(unsigned char *ptr, unsigned int length) {
    printf("\nStatistics:\n");
    printf("Mean: %u\n", find_mean(ptr, length));
    printf("Median: %u\n", find_median(ptr, length));
    printf("Maximum: %u\n", find_maximum(ptr, length));
    printf("Minimum: %u\n", find_minimum(ptr, length));
}
