#include <stdlib.h>
#include <stdio.h>

void get_buffer(char buf[]) {
    char c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        buf[i++] = c;
    }
}

int main() {
    char name[8];
    char city[8];

    setbuf(stdout, NULL);

    printf("What's your name?\n");
    get_buffer(name);
    printf("Hello %s!\n", name);

    printf("Where're you from?\n");
    get_buffer(city);
    printf("Cool!\n");

    return 0;
}
