#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>

char website_name[100], website_name2[100];
char password[100];

int str_length(char str[]) {
    // initializing count variable (stores the length of the string)
    int count;

    // incrementing the count till the end of the string
    for (count = 0; str[count] != '\0'; ++count)
        ;

    // returning the character count of the string
    return count;
}

int add_data() {
    printf("\nEnter the site name - ");
    scanf("%99s", website_name);
    printf("\nEnter the password - ");
    scanf("\n%99s", password);
    for (;;) {
        while (str_length(password) < 8) {
            printf("\n Your Password is too short \n");
            printf("Enter Password again - ");
            scanf("%s", password);
        }
        break;
    }
    return 0;
}

int output_file() {
    FILE *file_ptr = fopen("/home/rishabh/projects/password.txt", "a");
    return 0;
}

int output() {
    printf("The password of %s is - ", website_name);
    printf("The site name is %s and its password is %s.", website_name, password);
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
    output();
    system("clear");
    int add_more;
    printf("\nEnter 1 if you want to add more passwords and 2 if you want to "
           "exit - ");
    scanf("%i", &add_more);
    for (;;) {
        switch (add_more) {
        case 1:
            add_data();
            output();
            break;
        case 2:
            printf("\n\tHope you enjoyed it! STAY SAFE");
            break;
        }
    }
    return 0;
}
