#include <stdio.h>

#define PI 3.14;
#define perror(x) printf("ERROR: %s\n", x)
int main() {
    float radius, area;

    printf("Enter radius of a circle: \n");
    scanf("%f", &radius);
    if(radius<=0){
        perror("non-positive radius");
    }else {
        area = PI * &radius * radius;
        printf("Area of circle with radius %f is: %f\n", radius, area);
    }
    return 0;
}
