#include <stdio.h>
int main(){
	char s[1001];
	int i,j,count=0,flag= 0;
	gets(s);
for(i=0;s[i]!='\0';i++){
		if(s[i]-'0'==6){	
			count++;
			flag = 1;
		}
		if(s[i]-'0'!=6 && flag==1)
        {	
            count = 0;
			flag = 0;
			if(count<=3)
            {
				for(j=0;j<count;j++)
					printf("6");
			}
            if(count>3 && count<=9)
				printf("9");
			if(count>9)
				printf("27");
		}
		if(s[i]-'0'!=6 && flag==0)	
			printf("%c",s[i]);	
	}
    if(count<=3){
		for(j=0;j<count;j++)
			printf("6");
    }
	if(count>3 && count<=9)
		printf("9");
	if(count>9)
		printf("27");
	printf("\n");
	return 0;
}
