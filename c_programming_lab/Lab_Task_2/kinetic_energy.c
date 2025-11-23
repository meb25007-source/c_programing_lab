# include <stdio.h>
float main()
{
float m, v;
printf("Enter mass: ");
scanf("%f", &m);
printf("Enter velocity: ");
scanf("%f", &v);

printf("Kinetic Energy: %.2f\n", 0.5 * m * v * v);
return 0;
}
