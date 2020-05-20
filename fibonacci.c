//
//  fibonacci.c
//  C programming
//
//  Created by bhjml on 2020/4/23.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int fun(int t)
{
    int f_0 = 0,f_t = 1,f_n;
    do
    {
        f_n = f_0 + f_t;
        f_0 = f_t;
        f_t = f_n;
    }
    while(f_n < t);
    return f_n;
}
int main()
{
    int n;
    n = 1000;
    printf("n = %d,f_n = %d\n",n,fun(n));
}
