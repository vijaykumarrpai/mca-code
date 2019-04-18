#include<stdio.h>
int flag=1;
int mode(int a[],int n);
void ch_mode(int a[],int n);
void  ch_repeat(int a[],int n);
int main()
{
int n,i,a[20],m;
printf("enter array limit:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ch_mode(a,n);
if(flag)
{
m=mode(a,n);
printf("mode=%d\n",m);
}
else
{
printf("mode doesnot exist");
}
}
void ch_repeat(int a[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>1 && a[j]>1)
{
if(a[i]==a[j])
{
flag=0;
break;
}
}
}
}
}
void ch_mode(int a[],int n)
{
int i,j,count,freq[20];
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
ch_repeat(freq,n);
}
int mode(int a[],int n)
{
int max_value=0,max_count=0,i,j,count;
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[j]==a[i])
count++;
}
if(count>max_count)
{
max_count=count;
max_value=a[i];
}
}
return max_value;
}
