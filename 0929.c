#include <stdio.h>
int main()
{
    float w,h,a;
    printf("請輸入三角形的底(cm):");
    scanf("%f",&w); 
    printf("請輸入三角形的高(cm):");
    scanf("%f",&h);
    printf("三角形面積為%.2f",a=w*h/2);
    return 0;
}