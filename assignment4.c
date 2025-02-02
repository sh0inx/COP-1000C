/** Global Courier Services Shipping Manifest Helper
 * 
 * A program developed in COP-1000C for a pretend company to
 * determine the price of goods shipped based on weight
 * and travel distance.
 * 
 * @author: sh0inx
 * @ver: 0.1
 * @date: 9/26/21
 */

//import
#include <stdio.h>
#include <stdlib.h>

//main method
main() {

    //initilize variables for later use
    double weight;
    double milesTraveled;
    double shippingCharge;

    //UI intro prompt
    printf("GLOBAL COURIER SERVICES: SHIPPING MANIFEST\n");
    printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");

    printf("\nHello! I'm the shipping manifest helper!\n");

    //ask for user input (weight)
    printf("Please input the weight of the package that you would like to ship in lbs. (must not exceed 50 lbs.)\n");
    scanf_s("%lf", &weight);

    //if weight is greater than 50lbs, alert user and close.
    if(weight > 50.0) {
        printf("Sorry, your package exceeds the 50lbs weight maximum. Goodbye!\n");
        //end program
        system("pause");
    }
    //if weight is less than or equal to 0, alert user and close.
    if(weight <= 0.0) {
        printf("Sorry, your packages must have a weight higher than 0lbs. Goodbye!\n");
        //end program
        system("pause");
    }
    if (weight > 0.0 && weight <= 50.0) {
        //ask for user input (milesTraveled)
        printf("Great! Now input the distance this package will be traveling in miles.\n");
        scanf_s("%lf", &milesTraveled);

        //if milesTraveled is less than or equal to 0, alert user and close.
        if(milesTraveled <= 0.0) {
            printf("Sorry, this package has to travel more than 0 miles. Goodbye!\n");
            //end program
            system("pause");
        }
        if(milesTraveled > 0.0) {
            //if weight is less than or equal to 10lbs, caluclate shipping price at reduced rate ($3.00)
            if(weight <= 10.0) {
                milesTraveled = milesTraveled / 500.0;
                if (milesTraveled != (int)milesTraveled) {
                    milesTraveled = milesTraveled - (milesTraveled - (int)milesTraveled) + 1;
                }
                if (milesTraveled == (int)milesTraveled) {
                    milesTraveled = milesTraveled - (milesTraveled - (int)milesTraveled);
                }
                shippingCharge = milesTraveled * 3.00;
                printf("Your shipping price will be %lf.\n", shippingCharge);
                //end program
                system("pause");
            }

            //if weight is less than or equal to 50lbs, calculate shipping price ($5.00)
            if(weight > 10.0 && weight <= 50.0) {
                milesTraveled = milesTraveled / 500.0;
                if (milesTraveled != (int)milesTraveled) {
                    milesTraveled = milesTraveled - (milesTraveled - (int)milesTraveled) + 1;
                }
                if (milesTraveled == (int)milesTraveled) {
                    milesTraveled = milesTraveled - (milesTraveled - (int)milesTraveled);
                }
                shippingCharge = milesTraveled * 5.00;
                printf("Your shipping price will be %lf.\n", shippingCharge);
                //end program
                system("pause");
            }
        }
    }
}