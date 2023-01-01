#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// initialize the variables
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

// function to get the data
void add_data() {
    printf("\nEnter the site name - ");
    scanf("%99s", website_name);
    printf("\nEnter the password - ");
    scanf("\n%99s", password);
    for (;;) {
        while (str_length(password) < 4) {
            printf("\n Your Password is too short \n");
            printf("Enter Password again -%s", password);
            scanf("%s", password);
        }
        break;
    }
}

// output the data recieved in stdout
void output() {
    printf("The Site name is - %s\n", website_name);
    printf("The password is - %s\n", password);
}

// store the data in the file using fprintf
void output_to_file() {
    FILE *file_ptr_w = fopen("/home/rishabh/Downloads/password.txt", "w+");
    FILE *file_ptr = fopen("/home/rishabh/projects/password.txt", "a");
    if (file_ptr == NULL) {
        puts("this file doesnt exist");
        printf("create the file");
    }
    fprintf(file_ptr, "Site - %s\n", website_name);
    fprintf(file_ptr, "password - %s\n", password);
    fclose(file_ptr);
}

// read the data from the file
void scan_from_file() {
    FILE *file_ptr = fopen("/home/rishabh/Downloads/password.txt", "r");
    char buff[255]; // creating char array to store data of file  
    while (fscanf(file_ptr, "\n%s", buff) != EOF) {
        printf("%s\n", buff);
    }
    fclose(file_ptr);
}

void file() {
    printf("\nDo you want to save your password to the file or read your "
           "password from the file?");
    printf("\nFor write write 1 and for read write 2 - ");
    int add_file;
    scanf("%i", &add_file);
    switch (add_file) {
    case 1:
        output_to_file();
        break;
    case 2:
        scan_from_file();
    default:
        break;
    };
}

// execute the previous functions
void pass_man() {
    add_data();
    // should be cls instead of clear for windows
    system("clear");
    output();
}

void inf_loop_add_more() {
    while (1) {
        int add_more;
        printf("\nEnter 1 if you want to add more passwords and 2 if you want to "
               "exit - ");
        scanf("%i", &add_more);
        if (add_more == 1) {
            pass_man();
            continue;
        }
        break;
    }
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
    pass_man();
    inf_loop_add_more();
    file();
    return 0;
}
