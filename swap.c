//WAP to swap two numbers given as input by the user.
#include<stdio.h>
void swapUsingVariable(int x,int y) {
    int temp=x;
    x=y;
    y=temp;
    temp=x;
    printf("The swapped numbers are using function %d and %d ",x,y);
    printf("\n");
}
void swapWithoutVariable(int x,int y) {
    //Without using any variable
    y=x+y;
    x=y-x;
    y=y-x;
    printf("The swapped numbers are using function %d and %d ",x,y);
    printf("\n");
}

void swapUsingAddress(int *x,int *y) {
    int a=*y;
    int b=*x;
    //Without using any variable
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The swapped numbers are using function %d and %d ",a,b);
}
void swap(int *x,int *y) {
    int c=*x;
    int d=*y;
    // With a variable
    int temp=c;
    c=d;
    d=temp;
    printf("The swapped numbers are using function %d and %d ",c,d);
    printf("\n");
}

void main() {
    int a;
    int b;
    printf("Enter a first number ");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    int x=a;
    int y=b;
    // Without using any variable
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The swapped numbers are %d and %d ",a,b);
    //  With a variable
    int temp=x;
    x=y;
    y=temp;
    printf("The swapped numbers are %d and %d ",x,y);
    printf("\n");
    swap(x,y);
    //Pointer 
    int h=10;
    int *ptr=&h;
    printf("h is : %d and address of h2: %d",h,&h);
    printf("\n value of ptr is : %d",ptr);
    printf("\n value of ptr is : %d",*ptr);

    //Swap using address
    int l=x;
    int m=y;
    swapadd(&l,&m);

}
