#include <stdlib.h>
#include <string.h>
#include <stdio.h>

    //TODO: write a register-login-logout program
    //if you type in register print out "Registration..." or "You are already registered." if you are registered.
	//you are able to log in, if you are already registered, otherwise not. In that case print out "You are not registered.".
    //if you type in login print out "Logging in..." or "Already logged in." if are logged in.
    //if you type in logout print out "Logging out..." or "Already logged out." if are logged out.


int main()
{
	char command[256] = "register";
    char logged_in = 0;
    char registered = 0;

    printf("Hello user, I am waiting for your command:\n");

    gets(command);

    printf("%s" , command);
}
