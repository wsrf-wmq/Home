//
//  recur.c
//  C programming
//
//  Created by bhjml on 2020/4/21.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
void up_and_down(int);
int main()
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d.\n",n);
    if (n<4)
        up_and_down(n+1);
        
    
}
