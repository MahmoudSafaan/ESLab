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
    int swap_chkr = 0;
    print("Original Array:\n");

    print_array(arr, len);

    int i, j, temp_index, temp_val;

    for(i = 0; i < len - 1; i++)
    {
        swap_chkr = 0;
        for(j = 0 ; j < len - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                print("iter :");
                print_array(arr, len);
                swap_chkr = 1;
            }
        }
        if(!swap_chkr){
            break;
        }
    }

    print("Sorted Array:\n");
    print_array(arr, len);

}

