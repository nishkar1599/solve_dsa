#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int h)
{
    vector<int> left;
    vector<int> right;

    for (int i = l; i <= mid; i++)
        left.push_back(arr[i]);

    for (int i = mid + 1; i <= h; i++)
        right.push_back(arr[i]);

    int i = 0, j = 0, k = l;

    while (i < left.size() && j < right.size())
    {
        if (left[i] > right[j]) // change to '<' for ascending
            arr[k++] = right[j++];
        else
            arr[k++] = left[i++];
    }

    while (i < left.size())
        arr[k++] = left[i++];

    while (j < right.size())
        arr[k++] = right[j++];
}

void mergesort(vector<int>& arr, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int main()
{
    vector<int> ogarr{12, 8, 1, 9, 50, 7, 2, 5, 10};
    mergesort(ogarr, 0, ogarr.size() - 1);
    for (int i = 0; i < ogarr.size(); i++)
        cout << ogarr[i] << " ";

    return 0;
}
