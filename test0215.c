#include<stdio.h>
int main()
{
	int price = 0;
	int bill = 0;
	printf("请输入价格:");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);
	printf("找您%d\n元",bill-price);
	return 0;
}