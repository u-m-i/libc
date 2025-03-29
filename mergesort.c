#include<stdlib.h>
#define S sizeof(int)

int* mergesort( int *vector );

/**
 * @brief 
 * @category Morphic on array
 * 
 * @param array 
 * @param p 
 * @param q 
 * @param r 
 * @return * int* 
 */
int* merge(int *array, int p, int q, int r)
{
// 0,1,2 p = 0 q = 1 r = 3 len_1 = 1 - 0 + 1 len_2 = 3 - 1
   int len_1 = q - p + 1;
   int len_2 = r - q;

   int* sub_1 = malloc( len_1 * S ); // size on bytes, size of the integer in bytes and the number of items specified
   int* sub_2 = malloc( len_2 * S );

   for(int i = 0; i < len_1; ++i)
   {
      sub_1[i] = array[p + i];
   }

   for(int i = 0; i < len_2; ++i)
   {
      sub_2[i] = array[len_2 + i];
   }

   /* Remember to free the sub arrays */

   return array;
}

/**
 * @todo Receive arguments from the command line - this is new for me!!
 * 
 * @return int 
 */
int main(void)
{
   /* */
   return 0;
}