#include <stdio.h>


int main()
{
	struct school
	{
		char xuexiao[22];
		char xueyuan[22];
		char banji[22];
		int renshu;
	};
	struct school bi = {"黄河交通学院", "机电工程学院", "机器人2班", 39};
	struct school* ps = &bi;
	printf("%s\n", ps->xuexiao);
	printf("%s\n", ps->xueyuan);
	printf("%s\n", ps->banji);
	printf("%d\n", ps->renshu);

	return 0;
}











//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <=n; i++)
//	{
//	/*	int ret = 1;*/
//		/*int ret = 1;*/
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	/*int a = 0;
//	int b = 0;
//	scanf_s("%d",&a);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);*/
//
//	//int i = 0;
//	//int a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a = %d\n,b = %d\n,c=%d\n,d =%d\n",a,b,c,d);
//	return 0; 
//}