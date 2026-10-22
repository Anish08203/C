#include<stdio.h>
int main(){

    // int roll[2][5] ={{10,12,14,16,18},
    //                 {11,13,15,17,19}};
    
    // for(int i=0;i<2;i++){
        
    //     for(int j=0;j<4;j++){
            
    //         printf("The setting arrangement are in %d , %d form as %d \n",i,j,roll[i][j]);
    //     }
    // }
    
    
    int roll[2][5] ={{},
                    {}};
                    
    
    for(int i=0;i<2;i++)
    {
        
        for(int j=0;j<4;j++){
            
            printf("Enter the roll no of %d,%d \n",i,j);
            scanf("%d",&roll[i][j]);
        }
            
    }        
            
    for(int i=0;i<2;i++){
        
        for(int j=0;j<4;j++){
            
            printf("The setting arrangement are in %d , %d form as %d \n",i,j,roll[i][j]);
            
            // printf("%d ",roll[i][j]);
        }
        // printf("\n");

    }
    
    for(int i=0;i<2;i++){
        
        for(int j=0;j<4;j++){
            
            printf("%d ",roll[i][j]);
        }
        printf("\n");

    }
    return 0;
}