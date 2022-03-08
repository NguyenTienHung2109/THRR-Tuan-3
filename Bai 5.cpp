#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int item, int l, int r)
{
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (item == a[mid])
            return mid + 1;
        else if (item > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return l;
}

void insertionSort(int a[], int n)
{
    int i, loc, j, k, selected;

    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i];
        loc = binarySearch(a, selected, 0, j);
        while (j >= loc)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

int main()
{
    int n,a[200];
    cin>>n;
    for(int i=0;i < n; i++)
    {
        cin>>a[i];
    }

    insertionSort(a, n);
    for(int i=0;i < n; i++)
        cout << a[i] <<" ";

    return 0;
}
