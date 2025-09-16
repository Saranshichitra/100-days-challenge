#include <stdio.h>

int main() {
    float cel, fah;                                      //declaration
    printf("Enter the temperature in celsius");          //accepting value from user
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;                            //converting celsius temp. to fahrehiet temp.
    printf("Fahrenheit=%.0f\n", fah);                    // output statement 
    return 0;
}
