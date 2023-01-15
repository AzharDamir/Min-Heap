#include "HeapImp.h"

HeapImp::HeapImp()
{
    nbrelement = 0;
}

void HeapImp::insert(int num)
{
    l.push_back(num);
    nbrelement++;
    int index = nbrelement - 1;
    while (index != 0 && l[parent(index)] > l[index])
    {
        swap(&l[parent(index)], &l[index]);
        index = parent(index);
    }

}


void HeapImp::display()
{
    cout << "Array :    " << endl;
    for (int k = 0; k < nbrelement; k++) {
        cout << l[k] << "   ";
    }
    cout << endl;
    int heith = floor(log(nbrelement) / log(2)) + 1;
    int i = 0;
    int j = 0;
    cout << "the heap:  " << endl;
    for (i = 0; i < heith; i++)
    {
        int power = pow(2, i);
        while (power > 0)
        {
            if (j < nbrelement) {

                cout << l[j] << " ";
                j++;
                power--;
            }
            else break;
        }
        cout << endl;
    }

}

void HeapImp::HeapMin(int i)
{
    int lef = left(i);
    int rig = right(i);
    int smallest = i;
    if (lef < nbrelement && l[lef] < l[i])
        smallest = lef;
    if (rig < nbrelement && l[rig] < l[smallest])
        smallest = rig;
    if (smallest != i)
    {
        swap(&l[i], &l[smallest]);
        HeapMin(smallest);
    }
}
/************************************************/
int HeapImp::parent(int i)
{
    return (i - 1) / 2;
}

int HeapImp::left(int i)
{
    return (2 * i + 1);
}

int HeapImp::right(int i)
{
    return (2 * i + 2);
}
void HeapImp::swap(int* i, int* j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
/**************************************************/

