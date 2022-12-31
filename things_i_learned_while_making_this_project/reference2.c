#include <stdio.h>
#include <string.h>

int age1;
long long con_num1, con_num2;
char name1[100], name2[100], sym[50], add1[100], bg1[3], gen1[11], rel[50],
     doa[20];

int details() {
    // Taking Patient Details and storing The Data.

    printf("PATIENT DETAILS\n");
    printf("Name of patient: ");
    scanf("%99s", name1);

    printf("Patient Age: ");
    scanf("%i", &age1);

    printf("Enter Gender(m/f/t): ");
    scanf("%10s", gen1);

    printf("Date OF Addmission: ");
    scanf("%19s", doa);

    printf("Enter Blood Group: ");
    scanf("%2s", bg1);

    printf("Enter Personal Contact Number: ");
    scanf("%lld", &con_num1);

    printf("Enter Guardian's Contact Number: ");
    scanf("%lld", &con_num2);

    printf("Guardian's Relation with Patient: ");
    scanf("%49s", rel);

    printf("Enter Residential Address: ");
    scanf("%99s", add1);

    printf("Enter Symptoms: ");
    scanf("%49s", sym);

    printf("\n");
    printf("\n");

    return 0;
}

int output() {

    printf("-------------------> Health Care Organistion <-----------------\n");
    printf("\n");
    printf("---------------------------------------------------------------\n");
    printf("                       > PAATIENT DETAILS <                    \n");
    printf("---------------------------------------------------------------\n");
    printf("\n");

    printf("\tName of the Patient: %s\n", name1);
    printf("\n");
    printf("\tPatient's Age: %d\n", age1);
    printf("\n");
    printf("\tPatient's Gender: %s\n", gen1);
    printf("\n");
    printf("\tPatient's Blood Group: %s\n", bg1);
    printf("\n");
    printf("\tPatient's Contact Number: %lld\n", con_num1);
    printf("\n");

    printf("\tGuardian's Contact Number: %lld\n", con_num2);
    printf("\n");
    printf("\tGuardian's Relation with Patient: %s\n", rel);
    printf("\n");

    printf("\tPatient's Resedential Address: %s\n", add1);
    printf("\n");

    printf("\tPatient's Symptoms: %s\n", sym);

    printf("\n");

    printf("\t\n Do you want to re-submit the form or EXIT ?\n");
    printf("\t1. Continue\n");
    printf("\t2. EXIT\n");
    printf("Your answer - ");
    return 0;
}

int health_care() {
    details();
    output();
    return 0;
}

int main() {
    printf(
        "-------------------------------------------------------------------\n");
    printf(
        "                  Health Care Organisation System                  \n");
    printf(
        "-------------------------------------------------------------------\n");
    health_care();
    int exit_task;
    scanf("%d", &exit_task);

    switch (exit_task) {
    case 1:
        health_care();
        break;
    case 2:
        printf("\n\tHope you enjoyed it! STAY SAFE");
        break;
    }
    return 0;
}
