#include <stdio.h>
int main (void)
{
 int m, n, p, tmp;
 printf ("Please type in two number:\n");
 scanf ("%i %i", &m, &n);        
 p=m*n;                          
 while (n!=0){
  tmp=m%n;
  m=n;
  n=tmp;                
 }
 printf ("The GCD is %i\n", m);  
 printf ("The LCM is %i\n", p/m);
 return 0;
}
