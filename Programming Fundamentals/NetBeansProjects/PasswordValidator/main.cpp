#include <iostream>
#include <cstring>
using namespace std;

bool validatePassword(const char password[]);

//strlen(str) is a function that you can call with cstring to find out the length of a c string
//c-strings always end with a null character
//for example, char str[] = "Hello"; will be a character array (cstring) with a length of 6, not 5. Six.


int main() {
    cout << "pwd is not ok: " << validatePassword("pwd");
    cout << "\npassword is not ok: " << validatePassword("password");
    cout << "\npassword1 is not ok: " << validatePassword("password1");
    cout << "\nPassword1 is ok: " << validatePassword("Password1");
    cout << "\nPwd1 is not ok: " << validatePassword("Pwd1");
    
    
    return 0;
}

bool validatePassword(const char password[]) {
    const int MAX_SIZE = 32;
    const int MIN_SIZE = 8;
    
    //Check if password is at least 8 characters
    
    if(strlen(password) < MIN_SIZE) 
        return false;
    else {
        bool foundDigit = false;
        bool foundLower = false;
        bool foundUpper = false;
        // loop through the password and see if it has any digits by
        // checking each character
    for(int i = 0; i < strlen(password); i++) {
        if(isdigit(password[i])) {
            foundDigit = true; 
        }
        if(isupper(password[i])) {
            foundUpper = true;
        }
        if(islower(password[i])) {
            foundLower = true;
        }
    }
        if(foundDigit && foundLower && foundUpper) {
            return true;
        }
        else return false;
        
    }
    
        return 0;
    
}