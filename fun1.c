//
//  fun1.c
//  C programming
//
//  Created by bhjml on 2020/4/23.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
double fun(double q)
{
    int n;
    double s,t;
    n=2;
    s=2.0;
    while(s<=q)
    {
        t=s;
        s=s+(double)(n+1)/n;
        n++;
    }
    printf("n=%d\n",n);
    return 0;
}
int main()
{
    printf("%d\n",fun(50));
}
