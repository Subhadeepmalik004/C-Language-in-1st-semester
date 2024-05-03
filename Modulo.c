#include <stdio.h>
int main(){
    int a,b,c;
    printf("a = ",a);
    scanf("%d",&a);
    printf("b = ",b);
    scanf("%d",&b);
    
    c = a % b;//a%b = a [a<b]
    printf("Modulas is : %d",c);
    return 0;
}