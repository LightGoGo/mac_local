#include<stdio.h>
// 超出系统允许的最大int值

int main(void){
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d \n",i ,i+1, i+2);
    printf("%u %u %u \n",j ,j+1, j+2);

    return 0;
}
//当值达到最大值时，会从新开始。int类型的变量从-2147483648。unsigned 从0开始。
// 溢出行为是未定义的行为。
/*
2147483647 -2147483648 -2147483647 
4294967295 0 1 
*/