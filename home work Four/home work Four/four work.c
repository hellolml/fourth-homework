#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
int main0(){
	int i, j, n;
	printf("请输入要输出星型的最大奇数列数\n");
	scanf("%d", &n);
	if (n % 2 == 0){
		printf("输入有误,请输入奇数\n");
	}
	else{
		printf("图形为:\n");
		for (i = 0; i < n; ++i){
			++i;
			for (j = 0; j < i; ++j){
				printf("*");
			}
			printf("\n");
			printf("\n");
		}
		for (i = n - 2; i >= 0; --i){
			for (j = 0; j < i; ++j){
				printf("*");
			}
			printf("\n");
			printf("\n");
			--i;
		}
	}
	system("pause");
	return 0;
}

int main1(){
	int i,a=0,b=0,c=0;
	printf("水仙花数为:\n");
	for (i = 1; i < 1000; i++){
		a = i / 100;
		b = (i - a * 100) / 10;
		c = i % 10;
		if (i == (a*a*a + b*b*b + c*c*c)){
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
}

int main2(){
	int i,j,sum=0,a,b;
	printf("请输入要相加的数\n");
	scanf("%d",&a);
	for (j = 1; j < 6; ++j){
		for (i = 0; i < j; ++i){
			b = a * pow(10, i);
			sum += b;
		}
	}
	printf("sum=%d", sum);
	system("pause");
	return 0;
}

int main(){
	srand((unsigned int)time(0));//随机数种子,时间戳
	while (1){
		int choose = Menu();
		if (choose == 1){
			Game();
		}
		else if (choose == 0){
			printf("goodby!\n");
			break;
		}
		else{
			printf("您的输入有误\n");
		}
	}
	system("pause");
	return 0;
}
int Menu(){
		printf("=========================================\n");
		printf("===============1,开始游戏================\n");
		printf("===============0,退出游戏================\n");
		printf("=========================================\n");
		printf("请输入您的选择:");
		int choose = 0;
		scanf("%d", &choose);
		return choose;
	}
int Game(){
		int number = (rand() % 100 + 1);
		while (1){
			printf("请输入一个整数(1-100):");
			int num = 0;
			scanf("%d", &num);
			if (num > number){
				printf("大了\n");
			}
			else if (num < number){
				printf("小了\n");
			}
			else{
				printf("恭喜你,猜中了!\n");
				break;
			}
		}
	return 0;
}