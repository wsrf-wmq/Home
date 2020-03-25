#include<stdio.h>
int imax(int n,int m);
int main()
{
  printf("The maxinum of %d and %d is %d\n",3,5,imax(3));
  printf("The maxinum of %d and %d is %d\n",3,5,imax(5));
}
int imax(int n,int m)
{
  return (n>m?n:m);
}
