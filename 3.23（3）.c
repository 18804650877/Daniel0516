#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,count,i,line=0,temp_len;
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		temp_len=i;
		count=0;
		while(temp_len){
			temp_len/=10;
			count++;
		}
		int head,tail,head_index,tail_index,temp,test,temp_pow;
		temp=i;
		head_index=count;
		tail_index=1;
		test=1;
		while(test){
			if(head_index>tail_index){
				temp_pow=pow(10,head_index-1);
				head=temp/temp_pow;
				tail=temp%10;
				temp=temp%temp_pow/10;
				if(head==tail){
					test=1;
					head_index--;
					tail_index++;
				}else{
					test=0;
				}
			}else{
				test=0;
			}
				}
			
		if(head_index-tail_index<1){
			if(line<10){
				printf("%d,",i);
				line++;
			}else{
				printf("\n%d,",i);
				line=1;
			}
		}
	}
	return 0;
}