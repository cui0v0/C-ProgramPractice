#include <stdio.h>>

int main(){
	int i,t;
	t=1;
	i=2;
	while(i<=99){
		t=t*i;
		i=i+1;
		printf("Times:%d,Num:%d\n",i,t);
	}
	printf("%d\n",t);
	return 0;
}
