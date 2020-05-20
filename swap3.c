//用指针解决函数交换问题
//  swap3.c
//  C programming
//
//  Created by bhjml on 2020/4/21.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
void interchange(int * u,int * v);
int main()
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n",x,y);
    interchange(&x,&y);
    printf("Now x = %d and y = %d.\n",x,y);
    
    return 0;
}

void interchange(int * u,int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}
