#ifndef STATS_H
#define STATS_H

unsigned char find_median(unsigned char *ptr, unsigned int length);
unsigned char find_mean(unsigned char *ptr, unsigned int length);
unsigned char find_maximum(unsigned char *ptr, unsigned int length);
unsigned char find_minimum(unsigned char *ptr, unsigned int length);
void sort_array(unsigned char *ptr, unsigned int length);
void print_array(unsigned char *ptr, unsigned int length);
void print_statistics(unsigned char *ptr, unsigned int length);

#endif
