#include <stdio.h>
#include <stdlib.h>


int main() {

    FILE *input = fopen("data/input.txt", "r");
    FILE *input2 = fopen("data/input2.txt", "r");
    FILE *output = fopen("data/output.txt", "w");

    char line[155];
    char line2[155];

    while (fgets(line, sizeof(line), input) && fgets(line2, sizeof(line2), input2)) {
        fprintf(output, "%s - %s", line, line2);
    }
    
    return 0;
}