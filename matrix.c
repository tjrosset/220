#include <stdbool.h>

bool verify_matrix(int x, int y, int **matrix) {

    if(x!=y){return false;}
    if(x==0 || y==0){return false;}
    
    if(x==y){
//check first order
        for(int i=0; i<x; i++){
            for(int k=0; k<y-1; k++){
                    int afte = matrix[i][k];
                    int bef= matrix[i][k+1];
                    if(afte<=bef){
                    
                    }
                    else{return false;}
                }
            }

//check other order
        for(int a=0; a<x; a++){
            for(int b=0; b<y-1; b++){
                    int afte = matrix[b][a];
                    int bef= matrix[b+1][a];
                    if(afte<=bef){
                    
                    }
                    else{return false;}
            }
        }
    }

    return true;
}
