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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  printf("mean is %d\n", find_mean(test, SIZE));
  printf("median is %d\n", find_median(test, SIZE));
  printf("max is %d\n", find_max(test, SIZE));
  printf("min is %d\n", find_min(test, SIZE));
  sort_array(test,SIZE);
  print_array(test, SIZE);
}

void print_statistics(int min){
  printf("min: %d\n", min);
}

void print_array(unsigned char test[], unsigned int length)
{
  int i;
  for (i=0; i < length; i++)
  {
    printf("test[%d] = %d\n", i, test[i]);
  }
}

int find_mean(unsigned char test[], unsigned int length)
{
  int sum = 0;
  for(int i = 0; i < length; i++)
  {
    sum += test[i];
  }  
  return sum / length;
}

int find_median(unsigned char test[], unsigned int length)
{
  if(length % 2 == 0)
  {
    return (test[length/2]+test[length/2-1])/2;	  
  }
  return test[length/2];
}

int find_max(unsigned char test[], unsigned int length)
{
  int max=test[0];
  for(int i = 1; i < length; i++)
  {
    if(test[i]>max)
    {
      max = test[i];
    }
  }
  return max;
}

int find_min(unsigned char test[], unsigned int length)
{
  int min = test[0];
  for(int i = 1; i < length; i++)
    {
      if(test[i] < min)
        {
	min = test[i];	
	}

    }
  return min;
}

char sort_array(unsigned char test[], unsigned int length)
{
  int i;
  int j;
  int temp;
  for( i = 0; i < length-1; i++)
  {
    for(j = i; j < length; j++)
    {
      if(test[j] < test[i])//while parsing, pick lowest val for index 0
      {
        temp = test[j];
	test[j] = test[i];
	test[i] = temp;
      } 
    }
  }
}
/* Add other Implementation File Code Here */
