#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);
    if (temp > 60 && temp <= 82) {
        printf("Temperature is safe.\n");
    } else {
        printf("Temperature is warning.\n");
    }
    return 0;
}
   