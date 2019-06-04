#include<stdio.h>
#define MAX 40
#define aho "っ！！(☝︎ ՞ਊ ՞)☝︎"
int Check_aho(int);

int main (){

	int cnt,in_data;
	char *nabe = aho;
	
	printf("3の倍数と3のつく数字の時だけあほになります。\n数字(1~40)を入力してください>>");
	scanf("%d",&in_data);

	for(cnt = 1;cnt <= in_data && cnt <= MAX;cnt++){
		if(Check_aho(cnt) == 2)
			printf("%d\n",cnt);
		else
			printf("%d%s\n",cnt,nabe);
		
	}
}

int Check_aho(const int x){

	int cnt;
	//3の倍数
	if(x % 3 == 0) return 1;
	//3のつく数字
	for(cnt = x;cnt;cnt /= 10)
		if(cnt %10 ==3) return 1;

	return 2;
}
