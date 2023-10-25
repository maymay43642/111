//
//  main.c
//  第四周作业
//
//  Created by 曾雪梅 on 2021/9/28.
//
#include <stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    if(score>=70)
        printf("A passing grade\n");
    else
        printf("A failing grade\n");
    return 0;
}
