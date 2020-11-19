#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;

void selection_sort()
{   int small;
    for(int i=0;i<v.size()-1;i++)
    {
        small=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[small])
            small=j;
        }
        swap(v[small],v[i]);
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
    selection_sort();
    for(auto it:v)
    cout<<it<<" ";
    
    return 0;
}
