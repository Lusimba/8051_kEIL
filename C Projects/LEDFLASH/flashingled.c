#include <reg51.h>
void delay();
void main(){
while(1){
	P1=0x04;
	delay();
	P1=0x00;
	delay();
	}
}
void delay(){
	unsigned int i,j;
	for(i=0;i<1000;i++){
		for(j=0;j<1000;j++);
	}
}