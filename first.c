#include<stdio.h>


int main(){
    // int a[10][5]={{1,2,3},{4,7,23},{},{},{}};
    int a[3][3];
    int i=0,j=0;
    printf("Enter the elements of the matrix\n");
    
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            // cin>>a[i][j];
        }
    }

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
            // cin>>a[i][j];
        }
        printf("\n");
    }

    


    return 0;
}