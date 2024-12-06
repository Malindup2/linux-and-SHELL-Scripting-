#include<stdio.h>
#include<unistd.h>
int main(){

	int ret;
	printf("I am parent");
	ret=fork();
	printf("Return value:%d",ret);

return 0;

}
