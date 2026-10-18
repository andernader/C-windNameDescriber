#include <stdio.h>

int main(void){
    int wind_speed;
    printf("Enter wind's speed (in KNOT): ");
    scanf("%d", &wind_speed);
    printf("The wind is ");
    if(wind_speed < 1)
        printf("calm");
    else if(wind_speed >= 1 && wind_speed <= 3)
        printf("light air");
    else if(wind_speed >= 4 && wind_speed <= 27)
        printf("breez");
    else if(wind_speed >= 28 && wind_speed <= 47)
        printf("gale");
    else if(wind_speed >= 48 && wind_speed <= 63)
        printf("storm");
    else
        printf("hurricane");

    printf("\n");
    return 0;
}
