#include <stdio.h>
#include <math.h>

double x1,x2,result,delta;
unsigned int variant,i,N;


int main(){
    //choose method
    printf("Choose methor 1 or 2:");
    scanf("%u",&variant);

    //validation
    while(variant != 1 && variant != 2){
        printf("ERROR!: Chose method 1 or 2:");
        scanf("%u",&variant);
    }

        
//variant 1
    if(variant == 1){
        printf("Enter x1:");
        scanf("%lf",&x1);
        printf("Enter x2:");
        scanf("%lf",&x2);
        printf("Enter N:");
        scanf("%u",&N);
        printf("\n******************************************");
        printf("\n*  N  *     X      *      F(X)           *");
        printf("\n******************************************");
        delta = (x2-x1)/(N-1);
        
    for (int i = 1;i<=N;i++){      
        printf("\n |%4d|%10.2f|%20.2f|\n",i,x1,result); 
        printf("\n__________________________________________");
        result = -0.5*pow(x1-64,3)-3*pow(x1,2)+10;
    if (i % 10 == 0)
        {
            printf("press any key\n");
            getch();
        }
        x1=x1+delta;
        }
        //variant 2
    }else{
        printf("Enter x1:");
        scanf("%lf",&x1);
        printf("Enter x2:");
        scanf("%lf",&x2);
        printf("Enter delta:");
        scanf("%lf",&delta);
        printf("\n******************************************");
        printf("\n*  N  *     X      *      F(X)           *");
        printf("\n******************************************");
    for (int i = 1;x1<=x2;i++){      
        printf("\n |%4d|%10.2f|%20.2f|\n",i,x1,result); 
        printf("\n__________________________________________");
        result = -0.5*pow(x1-64,3)-3*pow(x1,2)+10;
    if (i % 10 == 0)
        {
            printf("press any key\n");
            getch();
        }
    x1=x1+delta;
        
}
}
}