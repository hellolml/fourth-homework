#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
int main0(){
	int i, j, n;
	printf("������Ҫ������͵������������\n");
	scanf("%d", &n);
	if (n % 2 == 0){
		printf("��������,����������\n");
	}
	else{
		printf("ͼ��Ϊ:\n");
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
	printf("ˮ�ɻ���Ϊ:\n");
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
	printf("������Ҫ��ӵ���\n");
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
	srand((unsigned int)time(0));//���������,ʱ���
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
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}
int Menu(){
		printf("=========================================\n");
		printf("===============1,��ʼ��Ϸ================\n");
		printf("===============0,�˳���Ϸ================\n");
		printf("=========================================\n");
		printf("����������ѡ��:");
		int choose = 0;
		scanf("%d", &choose);
		return choose;
	}
int Game(){
		int number = (rand() % 100 + 1);
		while (1){
			printf("������һ������(1-100):");
			int num = 0;
			scanf("%d", &num);
			if (num > number){
				printf("����\n");
			}
			else if (num < number){
				printf("С��\n");
			}
			else{
				printf("��ϲ��,������!\n");
				break;
			}
		}
	return 0;
}