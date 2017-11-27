//
//  Checking.h
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef Checking_h
#define Checking_h
#include "Customer.h"
#include "Account.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;



class Checking:public Account
{
public:
    Checking();
    Checking(string accountID, double accountBal, string accountDate, Customer accountCus);
    
protected:
    
    double interest_rate;
};
#endif /* Checking_h */
