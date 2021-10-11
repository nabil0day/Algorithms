// Quick Sort

#include<bits/stdc++.h>

using namespace std;

int part(int *a, int m, int n)
{
    int i,j,ind,x;
    ind = m;
    x = a[n];
    for(i=m;i<n;i++)
    {
        if(a[i] <= x)
        {
            swap(a[ind], a[i]);
            ind++;
        }
    }
    swap(a[ind], a[n]);
    return ind;
}

int quicksort(int *a, int m, int n)
{
    int index;
    if(m>=n)
        return 0;
    {
        index = part(a,m,n);
        quicksort(a, m, index-1);
        quicksort(a, index+1, n);
        return 0;
    }
}

int main()
{
    int a[] = {7,2,1,6,8,5,3,4};
    int i;
    quicksort(a,0,7);
    cout <<"After Sorting :\n";
    for(i=0;i<8;i++)
    cout <<a[i] <<"\n";
}
