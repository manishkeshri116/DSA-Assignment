#include <stdio.h>
#define ROW 2
#define COL 3

int row(int(*array)[3])
{
    int i,j, sum=0;
    for(i=0; i<ROW; i++){
        sum=0;
        for(j=0; j<COL; j++){
            sum = sum + (*(*array +i)+j);
        }
        printf("sum is row %d/n",sum);

    }
    return sum;
}
int col(int(*array)[3])
{
    int i,j, sum=0;
    for(j=0; j<COL; j++){
        sum=0;
        for (i=0; i<ROW; i++){
            sum= sum + (*(*array +i)+j);
        }
        printf("sum is COL %d/n",sum);
    }
    return sum;
}
int main(void)
{
    int a[ROW][COL]= {{1,2,3},
                      {4,5,6}};
    printf("sum = %d/n",row (a));
    printf("sum = %d/n",col (a));

    return 0;
}