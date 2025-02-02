/** 
* Grades Statistics Analyzer
* A program to determine the percentage of passing grades out of a set of grades entered.
* @author: sh0inx
* @ver: 0.1
* @date: 10/01/21
* 
*/

#include <stdio.h>
#include <stdlib.h>

main() {

    //declare variables to be used
    double grade;
    int gradeCounter = 0;
    int passingGradeCounter = 0;

    //greet user
    printf("Hello! Please input your grade values between 0 and 100. To finish, input -1.\n");
    
    //scan for user input
    scanf_s("%lf", &grade);

    //while input is NOT equal to -1, calculate and scan again
    while(grade != -1) {

        //if input is greater than 100 OR less than 0, show error
        if(grade > 100.0 || grade < 0.0) {
            printf("Sorry, that isn't a valid grade input. Your input must be between 0 and 100. If you would like to finish, input -1.\n");
        }

        //if input is less than or equal to 100 AND is greater than or equal to 0, count grade
        if(grade <= 100.0 && grade >= 0.0) {
            //add 1 to gradeCounter
            gradeCounter++;

            //if input is greater than or equal to 70, add to passingGradeCounter
            if(grade >= 70.0) {
                //add 1 to passingGradeCounter
                passingGradeCounter++;
            }
        }

        scanf_s("%lf", &grade);
    }
    
    //present information
    printf("Alright! Calculating statistics...\n");
    printf("%i grades entered.\n", gradeCounter);

    //calculate average
    double percentage = ((double)passingGradeCounter / (double)gradeCounter) * 100.0;

    //show user the percentage of passing grades
    printf("%lf of total grades are passing.\n", percentage);

    system("pause");
}