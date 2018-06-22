#include <stdio.h>
void main()
{
int temp,n,rev,dig;
printf ("\n Enter the number \n");
scanf("%d",&n );
// inital values for loop
temp=n;
rev=0;
while(n!=0)
{
/* "shift" the existing digits one place to the left and add new digit in the units
place */
dig=n%10;
n=n/10;
rev=(rev*10)+dig;
}
if(temp==rev)
printf ("\n Number is a palindrome! \n");
else
printf ("\n Number is not a palindrome! \n");
}