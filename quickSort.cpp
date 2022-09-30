#include <stdio.h>
void quickSort(int *array,int left,int right)
{
    int l = left;
    int r = right;
    int pivot = array[(l+r)/2];
    while (l<=r)
    {
        while (array[l] < pivot) {
            l++;
        }
        while (array[r] > pivot) {
            r--;
        }
        if (l<=r) {
            int tmp = array[l];
            array[l] = array[r];
            array[r] = tmp;
            l++;
            r--;
        }
    }
    if (l<right)
    {
        quickSort(array,l,right);
    }
    if (r>left)
    {
        quickSort(array,left,r);
    }
}
int main()
{
    int len;
    scanf("%d",&len);
    int init[len];
    int *arr_num = init;
    for(int i = 0;i<len;i++)
    {
        scanf("%d",&arr_num[i]);
    }
    quickSort(arr_num,0,len-1);
    for(int i = 0;i<len;i++)
    {
        printf("%d ",arr_num[i]);
    }
    return 0;
}
