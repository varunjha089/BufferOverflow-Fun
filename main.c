#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_CHAR_LEN 20
int main() {

    char username[MAX_CHAR_LEN];
    char password[MAX_CHAR_LEN];
    int auth = 0;

    printf("Enter Username");
    scanf("%s", username);

    printf("Enter Password");
    scanf("%s", password);

    if (strcmp(username, "varun") == 0 && strcmp(password, "varun123") == 0){
        printf("You are Authenticated %i\n", auth);
        auth = 1;
    } else{
        printf("You are not Authenticated %i\n", auth);
    }

    if(auth){
        system("cmd");
        printf("%i\n", auth);
    }

    return 0;
}
