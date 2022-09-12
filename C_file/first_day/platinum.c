#include<stdio.h>
int main(void){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pouonds: ");

    scanf("%f", &weight);  // %f说明要读区用户从键盘输入的浮点数，&weight 告诉函数把输入的值赋给名为weight的变量。

    value = 1700.0 * weight *14.5833;
    printf("Your weight in platinum is worth $%.2f .\n", value);


}