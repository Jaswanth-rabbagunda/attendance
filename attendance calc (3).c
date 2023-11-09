#include <stdio.h>

int main()

{
    int m=0,n=1;
    float a,b,i;
    float c,d,f;
    printf("\t\t-------------------------------------------------\n");

    printf("\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xB1 SRM ATTENDANCE CALCULATOR \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n");

    printf("\t\t-------------------------------------------------\n");

    printf("No. of classes conducted = ");     
    scanf("%f",&a);
    printf("No. of classes attended = ");
    scanf("%f",&b);
    printf("No. of classes missed = %.0f\n",a-b);
    c=b*100/a;
    printf("Attendance percentage = %.2f\n",c);


    if(c>=75){
    for(i=1;i<a;i++){
    d=(b*100)/(a+i);
    if(d>=75){
    m++;
    }}
    printf("Margin = %d",m);}
    else{
    for(i=1;f<75;i++){
    f=((b+i)*100)/(a+i);
    if(f<75.00){
    n++;}
    }
    printf("Required = %d",n);
    return 0;
}
}
