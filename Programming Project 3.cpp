/************************************************************************************************************

Student Name:  Blake Fowler
Course:  C++ Programming (COP2334)
Date:  3/7/2024


The following program is for Programming Project 3. It prompts the user to enter a password
that is at least 12 characters long. Then it prompts the user to enter a key that is between 1 and 20 inclusive.
Then, with this information, it encrypts the user's key with a simple shift formula.


************************************************************************************************************/
#include <iostream> 
#include <cmath>
#include <stdio.h>       //Setting everything up to begin coding
using namespace std;



bool isValidPassword(string userPassword) {
   if (userPassword.length() >= 12) {
       return true;
   }
   else {
       return false;
   }
   }
   
bool isValidKey(int userKey) {
    if ((userKey >= 1) && (userKey <= 20)) {
        return true;
    }
    else {
        return false;
    }
    }

string Encrypt(string userPassword, int userKey) {
    string encryptedPassword = "";
    for (int i = 0; i < userPassword.length(); i++) {
        char c = userPassword[i];
        int encryptedChar = c + userKey;
        if (encryptedChar > 126) {
            encryptedChar = 33 + (encryptedChar % 126);
        }
        encryptedPassword += static_cast<char>(encryptedChar);
    }
    return encryptedPassword;
}
   


int main() {
    
    //Setting everything up 
    string userPassword;
    int userKey;

    while (true) {
        cout << "Please enter a password that is at least 12 characters long: ";
        cin >> userPassword;

        if (isValidPassword(userPassword)) {
            cout << "Password is valid." << endl;
            break;
        } else {
            cout << "The password must be at least 12 characters long." << endl;
        }
    }
    
    
    
    while (true) {
        cout << "Please enter a key for your password (1-20 inclusive)";
        cin >> userKey;
        
        if (isValidKey(userKey)) {
            cout << "Key is valid." << endl;
            break;
        } else {
            cout << "The key must be between 1 and 20, you entered " << userKey << endl;
        }
        }
        
        
        cout << "Your password is " << userPassword << " and the encrypted version of your password is " 
        << Encrypt(userPassword, userKey) << "\n with a key of " << userKey;
        
        
        
        
        
    }
    
  





































