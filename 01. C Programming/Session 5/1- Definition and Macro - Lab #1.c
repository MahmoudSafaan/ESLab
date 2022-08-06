#include <stdio.h>
#define print printf
#define scan scanf
/* TO AVOID ANY MISHEHAVIOUR IT IS BEST TO INITIALIZE WITH
"_" AND "CAPITALIZE" THE MACRO AND TEXT TO BE REPLACED*/
#define _X_MAX 50
#define _Y_MAX 30
#define _CHKR(input,max_val) (max_val)>=(input)?(1):(0)

#define _ADD(x,y) ((x)+(y))
#define _MULTIPLY(x,y) ((x)*(y))

int main()
{
    // Declare input variables
    int input_1, input_2;

    // GET input data
    print("Enter the first value:\n");
    scan("%d", &input_1);
    print("Enter the second value:\n");
    scan("%d", &input_2);

    if(_CHKR(input_1, _X_MAX) && _CHKR(input_2, _Y_MAX)){
            print("X + Y = %d\n", _ADD(input_1,input_2));
            print("X * Y = %d\n", _MULTIPLY(input_1,input_2));
            print("(X + Y) * X = %d\n", _MULTIPLY(_ADD(input_1,input_2),input_1));
    }else{
            print("Value entered exceeded the maximum value\n");
            main();
    }


    return 0;
}


