//
//  Checking.cpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include "Checking.h"
#include "Account.h"
using namespace std;

Checking::Checking()
{
    interest_rate = 0;
}

Checking::Checking(string acc_id, double acc_bal, string acc_date, Customer acc_cus):Account(acc_id, acc_bal, acc_date, acc_cus)
{
    interest_rate = 0;
}
