#include<lpc214x.h>
#define delay 6000000
int main(){
	IODIR0 |= (1<<0)|(1<<1)|(1<<2)|(1<<4); // Set as Output
	while(1){
		IOSET0 |= (1<<0)|(1<<1)|(1<<2)|(1<<4); // High Value on Pins
		for(int x=0;x<=delay;x++);
		IOCLR0 |= (1<<0)|(1<<1)|(1<<2)|(1<<4);
		for(int x=0;x<=delay;x++);
	}
}
