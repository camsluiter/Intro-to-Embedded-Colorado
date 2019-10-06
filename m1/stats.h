/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file<stats.h>
 * @brief <Declarations of functions used in stats.c >
 *
 * <Add Extended Description Here>
 *
 * @author <Cameron Sluiter>
 * @date <10/05/2019 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(int min);
void print_array(unsigned char test[], unsigned int length);
int find_median(unsigned char test[], unsigned int length);
int find_mean(unsigned char test[], unsigned int length);
int find_max(unsigned char test[], unsigned int length);
int find_min(unsigned char test[], unsigned int length);
char sort_array(unsigned char test[], unsigned int length);

/**
 * @brief <Add Brief Description of Function Here>
 *

 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here* @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
