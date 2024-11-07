#include <stdio.h>

int main() {
    int scores[2][2][3] = {
        { {65, 92}, {84, 72} },
        { {35, 70}, {59, 67} }  
    };

   
    printf("Elements of the scores:\n");

 
    for (int e = 0; e < 2; e++) {
        for (int j = 0; j < 2; j++) {
        for(int  k=0; k < 2; k++) {
                    printf("scores[%d][%d][%d]=%d\n",e,j,k,scores[e][j][k]);
       }
       }
       
    }

    return 0;
}