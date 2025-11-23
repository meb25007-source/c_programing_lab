#include <stdio.h>

int main() {
    float applied_stress, yield_strength, fos;

    printf("Enter applied stress (MPa): " );
    scanf("%f", &applied_stress);
    printf("Enter material yield strength (MPa): " );
    scanf("%f", &yield_strength);

    fos = yield_strength / applied_stress;

    if (fos >= 2.0) {
        printf("Safe design\n");
    } else if (fos >= 1.5 && fos < 2.0) {
        printf("Acceptable with monitoring\n");
    } else {
        printf("Danger - redesign needed\n");
    }

    return 0;
}
