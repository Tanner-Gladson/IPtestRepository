#include <stdio.h>
int main(void) {
	
    float firstFloat = 0;
	float secondFloat = 0;
	
    printf("enter your first float: ");
    scanf("%f %f", &firstFloat, &secondFloat);
	
	
	printf("%.2f / %.2f = %.2f\n", firstFloat, secondFloat, firstFloat/secondFloat);
	printf("%.2f + %.2f = %.2f\n", firstFloat, secondFloat, firstFloat+secondFloat);
	printf("%.2f - %.2f = %.2f\n", firstFloat, secondFloat, firstFloat-secondFloat);
	printf("%.2f * %.2f = %.2f\n", firstFloat, secondFloat, firstFloat*secondFloat);	
    
    return 0;
	
}
