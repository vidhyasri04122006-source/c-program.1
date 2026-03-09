reverse a customer feedback
input:good
output:doog
--------------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char feedback[100];
    int length;
    scanf("%s", feedback);

    length = strlen(feedback);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", feedback[i]);
    }

    return 0;
}
