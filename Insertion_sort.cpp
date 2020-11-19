
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
void insertion_sort()
{   int key;
    int j;
    for(int i=1;i<v.size();i++)
    {   key=v[i];
        j=i-1;
        while(v[j]>key&&j>=0)
        {
        
        v[j+1]=v[j];
        j--;
        }
        cout<<key<<"*"<<endl;
        v[j+1]=key;
    }
    
    
}
int main() 
{
    int n,x ;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter  the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    insertion_sort();
    for(auto it:v)
    cout<<it<<" ";
    
    return 0;
}
