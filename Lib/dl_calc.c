#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>


int main(){

	void *handle;
	
	float (*add)(float, float);
	float (*sub)(float, float);
	float (*mul)(float, float);
	float (*div)(float, float);
	
	float a;
	float b;
	char *error;
	
	handle = dlopen("./lib/libtest_dynamic_calc.so", RTLD_LAZY);
	
	if(!handle)
	{
		fputs(dlerror(), stderr);
	}
	
	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	sub = dlsym(handle, "sub");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	mul = dlsym(handle, "mul");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	
	div = dlsym(handle, "div");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	
	printf("dl_calc\n");
	printf("first : ");
	scanf("%f", &a);

	printf("second : ");
	scanf("%f", &b);
	
	printf("\n[ Add ]\n");
	printf("%f + %f = %f\n", a, b, add(a, b));
	
	printf("\n[ Sub ]\n");
	printf("%f - %f = %f\n", a, b, sub(a, b));
	
	printf("\n[ Mul ]\n");
	printf("%f * %f = %f\n", a, b, mul(a, b));
	
	printf("\n[ Div ]\n");
	printf("%f / %f = %f\n", a, b, div(a, b));
	
	dlclose(handle);
	
	return 0;
	
}	
