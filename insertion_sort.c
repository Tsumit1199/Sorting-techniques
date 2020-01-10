#include<stdio.h>
#include<conio.h>
int main( )
{
 int a[10],i,j,k,n;

 printf("How many elements you want to sort?\n");
 scanf("%d",&n);
 printf("\nEnter the Elements into an array:\n");
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
 k=a[i];
 for(j= i-1; j>=0 && k<a[j]; j--)
 a[j+1]=a[j];
 a[j+1]=k;
 } printf("\n\n Elements after sorting: \n");
 for(i=0;i<n;i++)
 printf("%d\n", a[i]);
 getch( );
 return 0;
}
