#include <stdio.h>

int main() {
    float amplitude, frequency;
    printf("Enter vibration amplitude (mm): " );
    scanf("%f", &amplitude);
    printf("Enter vibration frequency (Hz): " );
    scanf("%f", &frequency);

    if (amplitude > 0.5 && frequency >= 20 && frequency <= 50) {
        printf("High risk\n");
    } else if (amplitude > 0.5 || frequency > 60) {
        printf("Medium risk\n");
    } else {
        printf("Low risk\n");
    }

    return 0;
}
