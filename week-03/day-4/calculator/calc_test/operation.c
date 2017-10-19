float addition(float a , float b){

    return a + b;

}

float division(float a , float b){

    return a / b;

}

int division_with_reminder(int a , int b){

    return a % b;

}

float multiplication(float a , float b){

    return a * b;

}

float subtraction(float a, float b){

    return a - b;

}

void startup(){

    printf("          CLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n");
    printf(" +	summation");
    printf(" -	subtraction\n");
    printf(" *	multiplication\n");
    printf(" /	division\n");
    printf(" %	division with remainder\n");
    printf(" ^	squaring\n");
    printf(" <	square root\n");
    printf(" log	logarithm\n");
    printf(" binto	binary to hex or dec\n");
    printf(" hexto	hexadecimal to bin or dec\n");
    printf(" decto	decimal to bin or hex\n");
    printf(" ====================================\n");
    printf(" exit	exiting from the program\n");
    printf(" clear	clear the screen\n");
    printf(" help	print usage\n");
    printf(" ====================================\n");
    printf(" Hit enter to start!\n");
    printf(" ====================================\n");

}






