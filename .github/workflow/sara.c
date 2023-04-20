#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insecure_func(char *input) {
    char buffer[10];
    strcpy(buffer, input);
    printf("Buffer content: %s\n", buffer);
}

void array_boundary_issue() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i <= 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        exit(1);
    }

    insecure_func(argv[1]);
    array_boundary_issue();

    return 0;
}
