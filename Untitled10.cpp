#include <stdio.h>
 
int main ()
 
{
 
  int i,j,a,n,number[30];
 
  printf ("Enter the value of N\n");
 
  scanf ("%d", &n);
 
  printf ("Enter the numbers \n");  /* accept the elements from the user */
 
  for (i=0; i<n; ++i)
 
  scanf ("%d",&number[i]);
 
  for (i=0; i<n; ++i)
 
  {
 
    	 for (j=i+1; j<n; ++j)
 
	 {
 
			if (number[i] > number[j])  /* swapping the elements in the ascending order */
 
			{
 
				a= number[i];
 
				number[i] = number[j];
 
				number[j] = a;
 
			}
 
	 }
 
  }
 
  printf ("The numbers arranged in ascending order are given below\n");  /* display the output  */
 
  for (i=0; i<n; ++i)
 
  printf ("%d\n",number[i]);
 
}