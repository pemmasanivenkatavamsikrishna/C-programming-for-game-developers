/* C Program to Print Negative Numbers in an Array */
#include<stdio.h>
 
int main()
{
 int Size, i, j = 0, a[10];
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\n Please Enter the Array Elements  :  ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 
 printf("\n List of Negative Numbers in this Array  :  "); 
 while(j < Size)
 {
   if(a[j] < 0)
   {
	   	printf("%d  ", a[j]);
   }
   j++;
 }
 return 0;
}
