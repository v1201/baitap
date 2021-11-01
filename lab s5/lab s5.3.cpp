#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,i,hcf;
    printf ("nhap so nguyen a: ");
    scanf("%d", &a);
    printf ("cac uoc so la: " );
    for (i=1;i<=a;i++)
       if (a%i == 0)
       {
           printf ("%d", i);
       }
    printf ("\nnhap so nguyen b: ");
    scanf ("%d", &b);
    printf ("cac uoc so la: ");
    for ( i = 1; i < b; i++)
       if (b%i == 0)
       {
           printf ("%d", i);
       }
    for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

   printf("\nUSCLN = %d", hcf);
   
   return 0;
    
    
}
