
#include<iostream>
using namespace std;
void split(int[],int,int);
void merge(int[],int,int,int,int);
int a[100];
int main()
{ cout<<"MERGE SORT"<<endl;
int i,n;
cout<<"enter the size of the array:"<<endl;
cin>>n;
cout<<"enter the array elemnts:"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
split(a,0,n-1);
cout<<"the sorted array is:"<<endl  ;
for(i=0;i<n;i++)
{cout<<a[i]<<" ";
}
return 0;
}

void split(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2 ;
split(a,0,mid);
split(a,mid+1,j);
merge(a,0,mid,mid+1,j);
}
}

void merge(int a[],int f,int l,int f1,int l1)
{
int temp[100], i,i2,k=0;
i=f;
i2=f1;
while(i<=l&&i2<=l1)
{
 if(a[i]<a[i2])
 temp[k++]=a[i++];
 else
 temp[k++]=a[i2++];
 }
 while(i<=l)
 temp[k++]=a[i++];
 while(i2<=l1)
 temp[k++]=a[i2++];
for(i=0,i2=0;i<=l1;i++,i2++)
a[i]=temp[i2];

}










