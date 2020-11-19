
#include<iostream.h>
#include<conio.h>
int a[100];
void heapify(int n,int i)
{ int large=i;   int temp;
int l=2*i+1;
int r=2*i+2;
if(l<n &&a[l]>a[large])
large=l;
if(r<n&&a[r]>a[large])
large =r;
if(large!=i)
{
temp=a[i];
a[i]=a[large];
a[large]=temp;
heapify(n,large);
}
}
 heapsort(int n)
{       int temp;
for(int i=n/2-1;i>=0;i--)
heapify(n,i);

for(i=n-1;i>0;i--)
{ heapify(i,0);
temp=a[i];
a[i]=a[0];
a[0]=temp;
heapify(i,0);
}

}
void main()
{
cout<<"HEAP SORT"<<endl;
int i,n;                         clrscr();
cout<<"enter the size of the array:"<<endl;
cin>>n;
cout<<"enter the array elements:"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
heapsort(n);
cout<<"After sorting:"<<endl;
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
 getch();
 }
