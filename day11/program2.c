#include <stdio.h>
int main() {
    float sp, cp, pp, lp;                                                                 //Declaration
                                                                                          //Accepting value from the user
    printf("Enter the cost price \n");
    scanf("%f", &cp);
    printf("Enter the selling price \n");
    scanf("%f", &sp);
    if ( sp > cp) {                                                                       //Calculating Profit Percentage      
        pp = ( sp - cp ) / cp * 100;
        printf("Profit Percentage= %f\n %", pp);
    }
    else if ( cp > sp) {                                                                 // Calculating loss percentage   
        lp = ( cp - sp ) / cp * 100;
        printf("Loss Percentage=%f\n %", lp);
    }
    else {                                                                               //Informing user that it's neither profit nor loss
        printf("Cost price and Selling price is same hence neither profit nor loss");
    }
    return 0;
}