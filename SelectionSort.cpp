#include <iostream>
using std::cout;
using std::endl;

template<class T>
void SelectionSort(T* pData, int length)
{
    int currentMin;
    T tmp;
    for (int i = 0; i < length; i++)
    {
        currentMin = i;
        for (int j = i; j < length; j++)
        {
            if (pData[currentMin] > pData[j])
            {
                currentMin = j;
            }
        }
        if (currentMin == i) continue;
        else
        {
            tmp = pData[i];
            pData[i] = pData[currentMin];
            pData[currentMin] = tmp;
        }
    }
}
int main()
{
    const int len = 15;
    int testdata[len] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    SelectionSort(testdata, len);
    for (int i = 0; i < len; i++)
    {
        cout << testdata[i] << " ";
    }
    cout << endl;
}