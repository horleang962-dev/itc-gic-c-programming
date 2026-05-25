#include <stdio.h>

// 1. Defining the custom enum type outside of main

enum Company {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main() {
    // 2. Declaring variables and assigning enum values

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    // 3. Displaying the values as integers using %d

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}