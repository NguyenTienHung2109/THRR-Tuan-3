#include<bits/stdc++.h>
using namespace std;
int a[200010];
int ternarySearch(int n, int key, int a[])
{
    int l=0 ,r= n-1;
    while (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (a[mid1] == key)
            return mid1;
        if (a[mid2] == key)
            return mid2;
        if (key < a[mid1])
            r = mid1 - 1;
        else if (key > a[mid2])
            l = mid2 + 1;
        else
        {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout << ternarySearch(n,x,a);
}
