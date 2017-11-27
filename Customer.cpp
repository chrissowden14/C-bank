//
//  Customer.cpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#include "Customer.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Customer::Customer(){
    Name = ""; ID = ""; Email = ""; PhoneNum = ""; Address = "";
}

Customer::Customer(string customerID, string customerName){
    ID = customerID;
    Name = customerName;
}

string Customer::getID(){
    return ID;
}

string Customer::getName(){
    return Name;
}

string Customer::getAddress(){
    return Address;
}

string Customer::getPhoneNum(){
    return PhoneNum;
}

string Customer::getEmail(){
    return Email;
}

void Customer::viewInfo()
{
    cout << "Customer's id: " << ID << endl;
    cout << "Customer's name: " << Name << endl;
    cout << "Customer's email: " << Email << endl;
    cout << "Customer's address: " << Address << endl;
    cout << "Customer's phone: " << PhoneNum << endl;
    
}
void Customer::addAccount(Account* acc)
{
    AccList.push_back(acc);
}

int Customer::countAccount(){
    cout << "Number of Customer Accounts: " << AccList.size() << endl;
    return AccList.size();
}

void Customer::setAddy(string new_address){
    Address = new_address;
}

void Customer::setEmail(string new_email){
    Email = new_email;
}

void Customer::setPhoneNum(string new_phoneNum){
    PhoneNum = new_phoneNum;
}
