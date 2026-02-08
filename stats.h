#ifndef STATS_H
#define STATS_H

/**
 * @brief Sorts array from largest to smallest
 * @param ptr Pointer to unsigned char array
 * @param length Size of array
 */
void sort_array(unsigned char *ptr, unsigned int length);

/**
 * @brief Returns median value (sorts array first)
 * @param ptr Pointer to unsigned char array  
 * @param length Size of array
 * @return Median value
 */
unsigned char find_median(unsigned char *ptr, unsigned int length);

/**
 * @brief Returns mean value (integer division)
 * @param ptr Pointer to unsigned char array
 * @param length Size of array
 * @return Mean value floored
 */
unsigned char find_mean(unsigned char *ptr, unsigned int length);

/**
 * @brief Returns maximum value
 * @param ptr Pointer to unsigned char array
 * @param length Size of array
 * @return Maximum value
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int length);

/**
 * @brief Returns minimum value  
 * @param ptr Pointer to unsigned char array
 * @param length Size of array
 * @return Minimum value
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int length);

/**
 * @brief Prints array to screen
 * @param ptr Pointer to unsigned char array
 * @param length Size of array
 */
void print_array(unsigned char *ptr, unsigned int length);

/**
 * @brief Prints all statistics
 * @param ptr Pointer to sorted unsigned char array
 * @param length Size of array
 */
void print_statistics(unsigned char *ptr, unsigned int length);

#endif /* STATS_H */
