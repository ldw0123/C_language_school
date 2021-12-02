#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;						// n=1�� �� factorial(1)�� 1�� ��ȯ�ϰ� ���ȣ���� ����
	else return n * factorial(n - 1);			// n�� factorial �Լ��� (n - 1)�� �־ ��ȯ�� ���� ����
}

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�. \n", n, factorial(n));
	return(0);
}