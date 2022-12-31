#include <stdio.h>
#include <string.h>

int main() {
    printf(
        "-------------------------------------------------------------------\n");
    printf(
        "                  PASSWORD MANAGEMENT SYSTEM                       \n");
    printf(
        "-------------------------------------------------------------------\n");
    char website_name[100];
    char password[100];
    printf("this is a password management system which will store the username "
           "and password");
    printf("\nEnter the site name -  ");
    scanf("%99s", website_name);
    printf("The password of %99s is - ", website_name);
    scanf("%99s", password);
    printf("\n The site name is %99s and its password is %99s.", website_name,
           password);
}
