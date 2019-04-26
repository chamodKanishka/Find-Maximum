#include<stdio.h>
int main()
{
    int data=0,max=0,i;
    max=data[0];
    for(i=0;i<10;i++){
    printf("enter a number");
    scanf("%d",&data);
    if(data[i]>max)
    {
        max=data[i];
    }
    }
    printf("maximum number is %d",max);
}
