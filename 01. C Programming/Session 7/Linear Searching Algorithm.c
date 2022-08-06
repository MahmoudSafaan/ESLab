#include <stdio.h>
#define print printf
#define scan scanf


int main(){


    //Declare Variables
    int arr[20] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
                   110, 120, 130, 140, 150, 160, 170, 180, 190, 200};

    int index, input, length = sizeof(arr)/sizeof(arr[0]);
    //============================================================================

    //GET data====================================================================
    print("Enter Number X10 from 10 to 200\n");
    scan("%d", &input);
    //============================================================================

    //SEARCH FOR THE ENTERED VALUE ===============================================
    for(index=0; index <= length+1; index++){
        if(arr[index]==input){
            print("the index of %d is %d\n\n\n", input, index);
            break;
        }else if(index == length +1)
        {
            print("Not found\n\n\n");
            break;
        }
    }
    //============================================================================
    main();
}
