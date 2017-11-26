//
//  bankAccount.hpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#ifndef bankAccount_hpp
#define bankAccount_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class bankAccount{
    bankAccount(){}
    ~bankAccount(){}
    
    string Name;
    double AccountNum;
    
    
public:
    void setName(string n){
        Name = n;
    }
    void setAccountNum(double acc){
        AccountNum = acc;
    }
    string getName(){
        return Name;
    }
    double getAccountNum(){
        return AccountNum;
    }
        
    
    virtual string ToString(){
        return Name;
    }
};

class checkAcc{
    
};

class savingAcc : public bankAccount{
    double Deposit;
    double Balance = 500;
public:
    void setDeposit(double d){
        Deposit = d;
    }
    void setBalance(double b){
        Balance=b;
    }
    double getDeposit(){
        return Deposit;
    }
    double getBalance(){
        return Balance;
    }
    void Interest(int money){
        float serchrg = .05;
        Balance = Balance + serchrg;
    }
    
    void withDraw(){
        int money;
        cout<<"Enter the Amount to Withdraw"<<endl<<endl;
        cin>>money;
        if (Balance - money > 50) {
            if (Balance > 500 ) {
                cout<<"Imposing a penalty fee"<<endl<<endl;
                int penalty = 50;
                Balance = Balance - (money - penalty);
                Interest(money);
                cout<<"Successful Transaction"<<endl;
            }
        } else {
            Balance = Balance- money;
            Interest(money);
            cout<<"Successful Transaction"<<endl;
        }
    }
};

class bizCheckingAcc{
    
};

class bizSavingsAcc{
    
};

class Credit{
    
};

#endif /* bankAccount_hpp */
