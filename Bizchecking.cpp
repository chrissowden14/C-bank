//
//  Bizchecking.cpp
//  434bank
//
//  Created by Chris Sowden on 11/27/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include "Checking.h"
#include "Account.h"
#include "Bizchecking.h"
using namespace std;

Bizchecking::Bizchecking(){
    interest_rate = 0;
}

Bizchecking::Bizchecking(string acc_id, double acc_bal, string acc_date, Customer acc_cus):Account(acc_id, acc_bal, acc_date, acc_cus)
{
    interest_rate = 0;
}
void Bizchecking::Fees(){
    interest_rate = 14.00;
    time_t end_of_month = time(NULL);
    struct tm *Time = localtime(&end_of_month);
    int month=Time->tm_mday;
    int month1=Time->tm_mday;
    if(month == 30 || month1 == 31)
    {
        balance = balance + (balance - 14.00);
    }
    else
    {
    }
}
