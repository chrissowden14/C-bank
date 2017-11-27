//
//  Savings.h
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef Savings_h
#define Savings_h
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

#include "Customer.h"
#include "Account.h"
using namespace std;

class Savings:public Account
{
public:
    Savings();
    Savings(string accountID, double accountBal, string accountDate, Customer accountCus);
    virtual void dayInterest();
    
protected:
    double interest_rate;
};
#endif /* Savings_h */
