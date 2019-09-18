#include <stdbool.h>

#include "sort.h"

bool test_sort() {
    int test[] = { 1, 5, 9, 6, 7, 78, 5, 6, 3, 5, 7, 11, 0 };
    cse_sort(test);

    for(int i=0; test[i+1]!=0; i++){
        if(test[i]<=test[i+1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}
