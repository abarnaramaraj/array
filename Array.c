#include<stdio.h>
int A[]={1,2,3,4,5,6,7,8,9}
int max=0
int i,j;
int B[4]=[0,0,0,0}
for(i=0;i<A.length();i++)
{
if(A[i]>max)
max=A[i];
}
B[0]=max
for(i=1;i<n;i++)
{
max=0;
for(j=1;i<n;i++)
{
max=0;
for(j=0;j<A.length();j++)
if(A[j]>max&&A[j]<B[j-1])
max=A[j];
}
B[i]=max;
}
