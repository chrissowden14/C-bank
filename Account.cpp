//
//  Account.cpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//


#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "Account.h"
using namespace std;

Account::Account()
{
    accountID = "";
    balance = 0;
    date = "";
    cust = Customer();
}

Account::Account(string acc_id, double acc_bal, string acc_date, Customer acc_cus)
{
    accountID = acc_id;
    balance = acc_bal;
    date = acc_date;
    cust = acc_cus;
}

string Account::getAccountID()
{
    return accountID;
}

double Account::getBalance()
{
    return balance;
}

string Account::getDate()
{
    return date;
}

Customer Account::getCustomerAcc()
{
    return cust;
}

void Account::viewAccount()
{
    cout << "Account ID: " << accountID << endl;
    cout << "Account Balance: " << balance << endl;
    cout << "Customer's Date: " << date << endl;
}

void Account::viewCustomer()
{
    cust.viewInfo();
}
