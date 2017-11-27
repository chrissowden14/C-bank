//
//  Bizchecking.h
//  434bank
//
//  Created by Chris Sowden on 11/27/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef Bizchecking_h
#define Bizchecking_h

#include "Customer.h"
#include "Account.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>



class Bizchecking:public Account
{
public:
    Bizchecking();
    Bizchecking(string accountID, double accountBal, string accountDate, Customer accountCus);
    virtual void Fees();
protected:
    
    double interest_rate;
};


#endif /* Bizchecking_h */
