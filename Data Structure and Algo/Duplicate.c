#include <stdio.h>
#include <stdlib.h>

int max(int A[], int n);

void MultipleMissing(int B[], int n){
    int diff = B[0];
    printf("Missing Elements are\n");
    for (int i = 0; i < n; ++i){
        if ( B[i] != diff){
            int D = B[i] - diff - i;
            while(D){
                printf("%d\n",diff + i);
                diff++;
                D--;
            }
        }
    }
}
void CountDuplicate(int A[], int n){
    printf("Duplicate Counts are\n");
    int count = 0;
    for (int i = 0; i < n - 1; ++i){
         if ( A[i] == A[i+1]){
            count++;
            if ( count  < 2)
                printf("%2d : ",A[i]);
        }
         else if (count){
             printf("%d\n",count);
             count = 0;
         }

    }
}

// void CountHashT(int arr[], int n){
//     int last = arr[n-1] + 1;
//     int *H = (int *)malloc(sizeof(last));
//     for ( int i = 0; i < last; ++i)
//         H[i] = 0;
//     // for ( int i = 0; i < last;++i)
//     //     printf("%d\n",H[i]);
//     for ( int i = 0; i < n ; ++i)
//         H[arr[i]]++;
//     for ( int i = 0; i < last ; ++i){
//         if ( H[i] > 1)
//             printf("%2d appears %d times\n",i,H[i]);
//     }
// }

void Duplicate(int A[], int n){
    printf("Missing Elements are\n");
    int Last = 0;
    for (int i = 0; i < n - 1; ++i){
        if ( A[i] == A[i+1] && A[i] != Last){
            printf("%2d\n",A[i]);
            Last = A[i];
        }
    }
}

void Duplicate_unsorted(int A[], int n){
    int count = 0;
    int i, j;
    for ( i = 0; i < n - 1; ++i){
        if ( A[i] == -1)
            continue;
        for ( j = i + 1; j < n ; ++j){
            if ( A[i] == A[j] ){
                count++;
                A[j] = -1;
            }
        }
        if (count){
            printf("%d is appearing %d times\n", A[i],count+1);
            count = 0;
        }
    }
}
int maximum(int A[], int n){
    int max = A[0];
    for ( int i = 1; i < n; ++i){
        if ( A[i] > max)
            max = A[i];
    }
   // printf("%d",max);
    return max;
}
void Duplicate_unsorted_Hash(int A[], int n){
    int count = 0;
   int max = maximum(A, n) + 1;
    // printf("%d\n",max);
    // int max = 21;
    // int *HH = (int *)malloc(sizeof(max));
    int HH[max];
    for ( int i = 0; i < max; ++i)
        HH[i] = 0;
    for ( int i = 0; i < n; ++i)
        HH[A[i]]++;
    for ( int i = 0; i < max ; ++i){
        // printf("%d",HH[i]);
        if ( HH[i] > 1)
            printf("%2d appears %d times\n",i,HH[i]);
    }
   // free(HH);
}
int main (){
    int A[10] = {3,6,8,8,10,12,15,15,15,20};
    int B[11] = {6,7,8,9,11,12,15,16,17,18,19};
    int C[11] = {8,3,6,4,6,5,6,8,2,7,7};
    int size = sizeof(A)/sizeof(A[0]);
    // Duplicate(A, size);
    // CountDuplicate(A, size);
    // MultipleMissing(B, sizeof(B)/sizeof(B[0]));
    // CountHashT(A, size);
    //Duplicate_unsorted(C, sizeof(C)/sizeof(C[0]));
    Duplicate_unsorted_Hash(A, sizeof(C)/sizeof(C[0]));
    return 0;
}