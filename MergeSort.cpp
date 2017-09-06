#include <iostream>
using std::cout;
using std::endl;

const int len = 15;

template<class T>
void print(T* arr)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<class T>
void Merge(T* pData, T* sortedarr, int left, int mid, int right)
{
    int i = left, j = mid, k = 0;
    while (i < mid && j < right)
    {
        if(pData[i] < pData[j])
            sortedarr[k++] = pData[i++];
        else
            sortedarr[k++] = pData[j++];
    }
    while (i < mid)
    {
        sortedarr[k++] = pData[i++];
    }
    while (j < right)
    {
        sortedarr[k++] = pData[j++];
    }
}

template<class T>
void MergeSort(T* pData, T*sortedarr,int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        MergeSort(pData, sortedarr, left, mid);
        MergeSort(pData, sortedarr, mid, right);
        Merge(pData, sortedarr, left, mid, right);
    }
}

int main()
{
    int testdata[len] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    int *sortedarr = new int[len];
    MergeSort(testdata, sortedarr, 0, len);
    print(sortedarr);
}