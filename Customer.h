//
//  Customer.h
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef Customer_h
#define Customer_h
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <list>


using namespace std;


class Account;

class Customer
{
public:
    Customer();
    string getID(); string getName(); string getAddress(); string getPhoneNum(); string getEmail(); string getAccList();
    void viewInfo();
    void setAddy(string addy);
    void setPhoneNum(string phoneNum);
    void setEmail(string Email);
    Customer(string ID, string Name);
    int countAccount();
    void getInfo();
    void addAccount(Account* acct);
private:
    string ID; string Name; string Address; string PhoneNum; string Email;
    Account* acct;
    list<Account*> AccList;
    int numAcc;

};

#endif /* Customer_h */
