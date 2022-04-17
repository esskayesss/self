#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define COLS 80

int main(){
    char whitespace = '\0';
    char *buffer = NULL;
    size_t capacity = COLS;

    while(getline (&buffer, &capacity, stdin) != -1){
        *(buffer + strlen (buffer) - 1) = '\0';	// eliminating newline

        while(buffer != NULL){
            /* printf("buffer:    %s [%d]\n", buffer, strlen(buffer)); */
            if (strlen(buffer) <= COLS){
                printf("%s\n", buffer);
                break;
            }
            char *temp = (char *) malloc((COLS + 2) * sizeof (char));

            strncpy(temp, buffer, COLS + 1);

            *(temp + COLS + 1) = '\0';
            if (*(temp + COLS) == ' '){
                printf("%s\n", temp);
                buffer += COLS + 1;
                continue;
            }

            *(temp + COLS) = '\0';

            char *cursor = strrchr(temp, ' ');

            if(cursor != NULL){
                *cursor = '\0';
                printf ("%s\n", temp);
                buffer = buffer + (cursor - temp) + 1;
            } else{
                *(temp + COLS - 1) = '-';
                printf ("%s\n", temp);
                buffer += COLS - 1;
            }
        }
    }
}
