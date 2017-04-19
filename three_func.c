// three_func.c -- 一個文件中包含3個函數

#include <stdio.h>
void br(void);  // 函數原型
void ic(void);
int main(void)
{
    br();  // 函數調用
    ic();
    printf("India, China,\n");
    printf("Brazil, Russia\n");
    return 0;
}
void br(void)  // 函數定義
{
    printf("Brazil, Russia, ");
}
void ic(void)
{
    printf("India, China\n");
}
