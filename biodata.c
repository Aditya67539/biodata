#include <stdio.h>
#include <string.h>
#include "biodata.h"

void biodata() {
    char first_name[100], last_name[100], dob[100], gender, current[100], college[100];
    printf("First Name: ");
    scanf("%s", first_name);
    printf("Last Name: ");
    scanf("%s", last_name);
    printf("Enter your DOB (DD/MM/YYYY): ");
    scanf("%s", dob);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("Currently studying: ");
    scanf(" %[^\n]", current);
    printf("School/College: ");

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    fgets(college, sizeof(college), stdin);

    college[strcspn(college, "\n")] = '\0';

    char sex[15];

    if (gender == 'M' || gender == 'm') strcpy(sex, "Male");
    else if (gender == 'F' || gender == 'f') strcpy(sex, "Female");
    else strcpy(sex, "Prefer Not Say");


    printf("\n**************************************************************\n");
    printf("*                        USER BIODATA                        *\n");
    printf("**************************************************************\n\n");
    
    printf("\t\tName: %s %s\n", first_name, last_name);
    printf("\t\tDate of Birth: %s\n", dob);
    printf("\t\tGender: %s\n", sex);
    printf("\t\tStudying: %s\n", current);
    printf("\t\tSchool/College: %s\n\n", college);

}