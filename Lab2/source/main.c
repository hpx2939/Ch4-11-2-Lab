#include<stdio.h>
#include<stdlib.h>




int main(void) {
	
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	

	system("pause");
	
}
int addbyone(int x) {
	x++;
	printf("x=%d\n", x);
	return x;

}