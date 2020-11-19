#include<iostream.h>
#include<conio.h>
int a[100];
void quicksort(int f,int l)
{ int temp,pivot,i,j;
if(f<l)
{
 pivot=f;
 i=f;
 j=l;
while(i<j)
{
while(a[i]<=a[pivot]&&i<j)
i++;
while(a[j]>a[pivot])
j--;
if(i<j)
{temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(f,j-1);
quicksort(j+1,l)  ;
}
}


void main()
{clrscr();
cout<<"quick sort"<<endl;
    int n;
cout<<"enter the size of the array:"<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
 quicksort(0,n-1);
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
 getch();
 }
