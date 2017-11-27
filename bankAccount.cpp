//
//  bankAccount.cpp
//  434bank
//
//  Created by Chris Sowden on 11/26/17.
//  Copyright © 2017 Chris Sowden. All rights reserved.
//

#include "Customer.h"
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "Bizchecking.h"

#include <vector>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    cout << "Welcome to C++ Bank: " << endl;
    
    vector<Customer> Customers;
  
    Customer c("8643882", "Chris");
    Customer c1("76543345", "Joe");
    
    
    
    c.setAddy("895 Market St.");
    c.setPhoneNum("910-000-0987");
    c.setEmail("chrissowden@icloud.com");
    cout << "Customer ID: " << c.getID() << endl;
    cout << "Customer Name: " << c.getName() << endl;
    cout << "Customer Address: " << c.getAddress() << endl;
    cout << "Customer Phone Number: " << c.getPhoneNum() << endl;
    cout << "Customer Email " << c.getEmail() << endl;
    Checking checking1("40388833445", 3000.00, "2017-11-26", c);
    Checking checking2("87563339382", 5000.00, "2017-11-26", c);
    Checking bizchecking1("7464563783", 700000,"2017-11-26", c);
    c.addAccount(&checking1);
    c.addAccount(&checking2);
    c.addAccount(&bizchecking1);
    c.countAccount();
    cout << "/////////////////////////////////////////////////////" << endl;
    c1.setAddy("895 Donkey St.");
    c1.setPhoneNum("910-111-0987");
    c1.setEmail("joe@icloud.com");
    cout << "Customer ID: " << c1.getID() << endl;
    cout << "Customer Name: " << c1.getName() << endl;
    cout << "Customer Address: " << c1.getAddress() << endl;
    cout << "Customer Phone Number: " << c1.getPhoneNum() << endl;
    cout << "Customer Email " << c1.getEmail() << endl;
    Checking checking3("7654346887", 4000.00, "2017-11-26", c1);
    Checking checking4("87563339382", 7000.00, "2017-11-26", c1);
    Checking savings3("66543323456", 9000.00, "2017-11-26", c1);
    Checking bizchecking2("7464563783", 80000,"2017-11-26", c1);
    c1.addAccount(&checking3);
    c1.addAccount(&checking4);
    c1.addAccount(&savings3);
    c1.addAccount(&bizchecking2);
    c1.countAccount();
    
    cout << "/////////////////////////////////////////////////////" << endl;
    
   
    
    checking1.viewAccount();
    checking1.viewCustomer();
    
    cout << "/////////////////////////////////////////////////////" << endl;
    checking3.viewAccount();
    checking3.viewCustomer();
 
    
    
    return 0;
}
