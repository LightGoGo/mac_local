#include <stdio.h>
// 使用预处理器定义常量

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
    int area;

    area = LENGTH * WIDTH;
    printf("value of area: %d", area);
    printf("%c", NEWLINE);

    return 0;
}