//
//  Account.h
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "Customer.h"

using namespace std;
class Account{
    
public:
    Account();
    Account(string accountID, double accountBal, string accountDate, Customer accountCus);
    string getAccountID();
    double getBalance();
    string getDate();
    Customer getCustomerAcc();
    void viewAccount();
    void viewCustomer();
    virtual void dayInterest() {}
    virtual void Fees() {}
    virtual void Interest() {}
protected:
    string accountID;
    double balance;
    string date;
    Customer cust;
};

#endif // ACCOUNT_H_INCLUDED
