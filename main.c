#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    system("clear");
    return 0;
}

int output() {
    printf("The password of %s is - ", website_name);
    printf("The site name is %s and its password is %s.", website_name, password);
    return 0;
}

int output_to_file() {
    FILE *file_ptr = fopen("/home/rishabh/projects/password.txt", "a");
    if (file_ptr == NULL) {
        puts("this file doesnt exist");
        printf("create the file");
    }
    fprintf(file_ptr, "Site - %s\n", website_name);
    fprintf(file_ptr, "password - %s\n", password);
    fclose(file_ptr);
    return 0;
}

int scan_from_file() {
    FILE *file_ptr = fopen("/home/rishabh/projects/password.txt", "r");
    char buff[255]; // creating char array to store data of file  
    while (fscanf(file_ptr, "%s", buff) != EOF) {
        printf("%s\n ", buff);
    }
    fclose(file_ptr);
    return 0;
}

int pass_man() {
    add_data();
    output();
    output_to_file();
    // scan_from_file();
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
    int add_more;
    printf("\nEnter 1 if you want to add more passwords and 2 if you want to "
           "exit - ");
    scanf("%i", &add_more);
    for (;;) {
        switch (add_more) {
        case 1:
            pass_man();
            break;
        default:
            printf("\n\tHope this software was useful to you");
            break;
        case 3:
            // scan_from_file();
            break;
        }
        break;
    }
    scan_from_file();
    return 0;
}
