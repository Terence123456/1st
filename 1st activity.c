#include <stdio.h>

int main() {

	int English, Math, Filipino, Science, ESP; 

	English = 93;
	Math = 84;
	Filipino = 89;
	Science = 90;
	ESP = 96;

	int addSub = English + Math + Filipino + Science + ESP;

	float Ave = (float)addSub / 5;

	printf("The average is: %f\n", Ave);


}