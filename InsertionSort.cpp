#include <iostream>
using std::cout;
using std::endl;

template<class T>
void InsertionSort(T* pData, int length)
{
    T key;
    int j;
    for (int i = 1; i < length; i++)
    {
        key = pData[i];
        for (j = i-1; j >= 0; j--)
        {
            if (pData[j] > key)
            {
                pData[j + 1] = pData[j];
            }
            else
                break;
        }
        pData[j + 1] = key;
    }
}

int main()
{
    const int len = 15;
    int testdata[len] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    InsertionSort(testdata, len);
    for (int i = 0; i < len; i++)
    {
        cout << testdata[i] << " ";
    }
    cout << endl;
}