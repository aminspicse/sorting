#include<stdio.h>


int main(){
    int arr[10], sort[10], size, mid;

    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Enter Element: \n");

    for(int i=0; i<=size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Before Sorting\n");
    for(int i=0; i<=size; i++){
        printf("%d\t",arr[i]);
    }
    int it =1;
    printf("\n Process \n");
    for(int i=0; i<=size; i++){
        printf("\n Step %d:\n",it);
        it++;

        for(int j=i+1; j<=size; j++){
            if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }

            //printf("Step: %d",it++);
            for(int k=0; k<=size; k++){
                printf("%d\t",arr[k]);
               // printf("");
            }
                    printf("\n");
        }
        printf("\n");

    }

    printf("\nAfter Sorting\n");
    for(int i=0; i<=size; i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}
