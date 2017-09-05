/*
    冒泡排序，排序方向为由小到大
*/
#include <iostream>
using namespace std;

template<class T>
void BubbleSort(T* pData, int len)
{
    // 若swapped在for循环后为false，则说明整个数组已排序好
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        T tmp;
        for (int i = 1; i < len; i++)
        {
            if (pData[i-1] > pData[i])
            {
                tmp = pData[i];
                pData[i] = pData[i-1];
                pData[i-1] = tmp;
                swapped = true;
            }
        }
    }
}

int main()
{
    const int len = 10;
    int testdata[len] = {1, 0, 998, 233, 520, 549, 20, 50, 80, 120};
    BubbleSort(testdata, len);
    for (int i = 0; i < len; i++)
    {
        cout << testdata[i] << " ";
    }
    cout << endl;
}
