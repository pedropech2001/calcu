
#include <stdio.h>
#include <stdlib.h>

float mod(float x, float y){ 
return (int)x % (int)y; 
}

float add(float x, float y) {
return x+y; 
}

float subtract(float x, float y){
return x-y; 
}

float multiply(float x, float y){
return x*y; 
}

float divide(float x, float y){
return x/y; 
}


int main(int argc, char** argv){
	
		char symbol = (char)*argv[1];
		float x = atof(argv[2]);
		float y = atof(argv[3]);

		switch(symbol){
			case '+':
				printf("%.2f\n", add(x, y));
			break;
			case '-':
				printf("%.2f\n", subtract(x, y));
			break;
			case '/':
				printf("%.2f\n", divide(x, y));
			break;
			case '%':
				printf("%d MOD %d = %.2f\n", (int)x, (int)y, mod(x, y));
			break;
			case 'x':
				printf("%.2f\n", multiply(x, y));
			break;
			default:
				printf("You need to put the symbol at the beginning");
			break;
		}
	}
