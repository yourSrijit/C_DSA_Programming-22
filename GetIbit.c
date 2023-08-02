#include <stdio.h>
void GetIthBit(int n,int i){
	int bitMask=1<<i;
	if((n&bitMask) ==1){
	printf("%d",1);
	}
	else{
		printf("%d",0);
	}
}
int main(void) {
	GetIthBit(10, 2);
  
  return 0;
}