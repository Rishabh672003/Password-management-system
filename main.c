#include <stdio.h>
#include <string.h>

char website_name[100], website_name2[100];
char password[100];

int add_data() {
    printf("\nEnter the site name - ");
    scanf("%99s", website_name);
    printf("The password of \t%99s is - ", website_name);
    scanf("\n%99s", password);
    printf("The site name is %99s and its password is %99s.", website_name,
           password);
    return 0;
}

int main() {
    printf(
        "-------------------------------------------------------------------\n");
    printf(
        "                  PASSWORD MANAGEMENT SYSTEM                       \n");
    printf(
        "-------------------------------------------------------------------\n");
    printf("this is a password management system which will store the username "
           "and password");
    add_data();
    int add_more;
    printf("\nEnter 1 if you want to add more passwords and 2 if you want to exit - ");
    scanf("%i", &add_more);
    switch (add_more) {
    case 1:
        add_data();
        break;
    case 2:
        printf("Hope you had fun time");
        break;
    }
}
