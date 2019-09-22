#include<stdio.h>
#include<stdarg.h>

int fun(int num_arg, ...){
	char *x;
	va_list ap;
	va_start(ap, num_arg);
	while(1){
		x = (char *)va_arg(ap, int*);
		if(num_arg--){
			break;
		}
		printf("%s\n",x);
	}
	va_end(ap);
	return 1;
}

int main() {
	fun(2, "am", "bc");
	return 1;
}
