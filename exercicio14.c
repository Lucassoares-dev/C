#include <stdio.h>

void main(){
	
	float salary,salary1, salary2;
	
	scanf("%f", &salary);
	
	if(salary > 0 && salary < 2000.00){
		printf("Isento\n");
		return;
	}else if(salary >= 2000.01 && salary <= 3000.00){
		
		salary2 = salary - 2000;
		
		salary2 *= 0.08;

		salary = salary2;

	}else if(salary >= 3000.01 && salary <= 4500.00){
		
		
		salary2 = salary - 3000;
		
		salary2 *= 0.18;
		
		salary = 1000 * 0.08 + salary2;
		
	}else{
	
		salary2 = salary - 4500;
		
		salary2 *= 0.28;
		
		salary = 1000 * 0.08 + 1500 * 0.18 + salary2;


	}
	
	printf("R$ %.2f\n", salary);
	
	
	
	
}
