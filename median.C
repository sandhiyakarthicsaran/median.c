#include<stdio.h>
void swap(int*p,int*q)
{
int t;
t=p*;
p*=q*;
q*=t;
}
void sort(int a[],int n)
{
imt i,j,temp;
for(i=0;i<=n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1)]
swap(&a[j],&a[j+1]);
}
}
}
int main()
{
int a[]={7,3,23,9,6};
int n=5;
int sum,i;
sort(a,n);
n=(n+2)/2-1;
ptintf("Median=%d",a[n]);
return 0;
}

