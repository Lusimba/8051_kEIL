#include<reg51.h>
void delay();
void main(){
	int a[10]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xe7};
	while(1){
		int i;
		for (i=0;i<10;i++){
			P1=a[i];
			delay();
		}
	}
}
void delay(){
	unsigned int i,j;
	for(i=0;i<1000;i++){
		for(j=0;j<1000;j++);
	}
}