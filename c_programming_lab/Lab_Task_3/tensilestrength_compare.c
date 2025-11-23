#include <stdio.h>

int main() {
    float tensile_strength1, tensile_strength2;

    printf("Enter the tensile strength of material 1: ");
    scanf("%f", &tensile_strength1);
    printf("Enter the tensile strength of material 2: ");
    scanf("%f", &tensile_strength2);

    if (tensile_strength1 > tensile_strength2) {
        printf("Material 1 is stronger than Material 2.\n");
    } else if (tensile_strength1 < tensile_strength2) {
        printf("Material 2 is stronger than Material 1.\n");
    } else {
        printf("Both materials have the same tensile strength.\n");
    }

    return 0;
}
