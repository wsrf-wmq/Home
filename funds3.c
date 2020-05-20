//传递一个结构
//  funds3.c
//  C programming
//
//  Created by bhjml on 2020/4/30.
//  Copyright © 2020 bhjml. All rights reserved.
//

#include <stdio.h>
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds moolah);

int main()
{
    struct funds stan = {
        "Garlic-Melon Bank",4032.27,"Lucky Savings and Loan",8543.94
    };
    printf("Stan has a total of $%.2f\n",sum(stan));
    
    return 0;
}

double sum(const struct funds moolah)
{
    return (moolah.bankfund + moolah.savefund);
}
