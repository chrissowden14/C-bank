//
//  Savings.cpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <list>
#include <sstream>
#include <ctime>

#include "Account.h"
#include "Savings.h"


Savings::Savings(){
    interest_rate = 0;
}

Savings::Savings(string acc_id, double acc_bal, string acc_date, Customer acc_cus):Account(acc_id, acc_bal, acc_date, acc_cus)
{
    interest_rate = 0;
    
}


void Savings::dayInterest(){
    interest_rate = .05;
    time_t time_of_day = time(NULL);
    struct tm *Time = localtime(&time_of_day);
    int hr=Time->tm_hour;
    int min=Time->tm_min;
    
    if(hr==23 && min==59)
    {
        balance = balance + balance*0.05;
    }
    else
    {
        
    }
}


