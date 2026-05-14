# include <stdio.h>
# include <stdbool.h> // Need this for booleans

int main(){
// Variable = A reusable container that holds a value

    int age = 55; // Note how you have to typecast them 
                  // on the left side, when declaring them.
    int year = 2026;
    int quantity = 10;

    printf("You are %i years old\n",age); // Placeholder Method!
    printf("The year is %i\n",year); // Similar to the one present in Python. 
    printf("You have ordered %i books\n",quantity); // %i denotes what you are trying to place.
                                                    // in this case a integer hence the i.

    // Floats (Only stores 6 to 7 digits after decimal )

    float money = 25.76;
    float switch_price = 399.99;
    float temp = -10.39;

    printf("You have %.2f dollars\n",money); // %f for a float.
                                             // %.2f to round to two decimal places.
    printf("A brand new Nintento Switch costs around %.2f\n",switch_price);

    printf("The temperature is %.2f degrees Farenheit \n", temp);

    // Double (More precise float, more decimal places)

    double value_e = 2.718281828459;

    printf("The value of e is %.12lf\n",value_e); // %lf for a long float. Which is what a double is!
                                                  // %.10lf to display a custom amount of decimal places.
                                                  
    // Char or Characters
    
    char tier = 'S'; // You must use single quotes
    char symbol = '&';

    printf("Sepiroth is %c tier \n",tier);
    printf("Your favorite symbol is %c\n",symbol);

    // char[]. AKA Strings!

    char name[] = "Don Quixote"; // Stored in an array hence the []
                                // Strings are kind like an array of characters or a list of characters!
                                // Note how we use double quotes now!
    
    char phrase[] = "Arcana BEATS!!!";

    printf("Hello %s!\n",name); // %s for string!  
    
    printf("Say your line: %s\n",phrase);

// Boleans
    // true and 1 are interchangeable
    // false and 0 are interchangeable


    bool isAlive = false;

    if (isAlive){   // If isAlive is true or 1
        printf("You are alive!\n");
    }
    else{ // If isAlive is false or 0
        printf("You are dead and buried, you are dead (oh, no)\n");
    }


    return 0;



}