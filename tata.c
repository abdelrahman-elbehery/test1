#include <stdio.h>
#define x 5
#define y 10
#if x>y
int main()
{
	printf("%d",x);
}
#elif x<y
int main(){
	
	
	printf("%d",y);
	
}
#else
int main (){
	
	printf("equal");
	
	
}
#endif