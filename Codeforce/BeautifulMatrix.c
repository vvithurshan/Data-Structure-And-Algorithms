#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, c, position;
    int array[5][5];
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5 ; ++j){
            scanf("%d",&array[i][j]);
            if(array[i][j] == 1){
                r = i + 1;
                c = j + 1;
                }
        }
    }
    position = abs(r-3) + abs(c-3);
    printf("%d\n",position);
    return 0;
}
