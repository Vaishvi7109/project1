#include<stdio.h>
int main(){
	float basicsalary,grosssalary,HRA,DA,TA;
	printf("Enter the basic salary:");
	scanf("%f",&basicsalary);
	
	printf("HRA:");
	scanf("%f",&HRA);

	printf("DA:");
	scanf("%f",&DA);
	
	printf("TA:");
	scanf("%f",&TA);
	
	grosssalary = basicsalary+HRA+DA+TA;
	printf("%f",grosssalary);

}
