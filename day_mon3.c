//
//  day_mon3.c
//  C programming
//
//  Created by bhjml on 2020/4/23.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12

int main()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    
    for(index=0;index<MONTHS;index++)
    {
        printf("Month %2d has %d days.\n",index+1,*(days+index));
    }
    return 0;
    
}
