#include <stdio.h>
#define print printf

void swap(int *val_1, int *val_2){
    int temp = *val_1;
    *val_1 = *val_2;
    *val_2 = temp;
}

int print_array(int arr[], int len){
    int i;
    for (i=0; i<len; i++){
        print(" %d ", arr[i]);
    }
    print("\n");

}

int main(){
    int arr[] = {2, 50, 22, 13, 801, 7412, 56165, 231, 5646, 21, 321, 165, 546, 48967, 5343, 45, 54};
    int len = sizeof(arr) / sizeof(arr[0]);
    print("Original Array:\n");

    print_array(arr, len);

    int i, j, temp_index, temp_val;

    for(i = 0; i < len - 1; i++)
    {
        temp_index=i;
        for(j = i + 1 ; j < len; j++)
        {
            if(arr[temp_index] > arr[j])
            {
                temp_index = j;
            }
        }
        if(temp_index != i)
        {
            swap(&arr[i], &arr[temp_index]);
        }
    }

    print("Sorted Array:\n");
    print_array(arr, len);

}
