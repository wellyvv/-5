#define  _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#define MOD 12345
int main() {
	setlocale(LC_ALL, "Ukr");
	int n;
	printf("����i�� ������� ����i��������� n (1 < n < 10000): ");
	scanf("%d", &n);

	if (n <= 1 || n >= 10000) {
		printf("���i���� ��i�. �������� n ������� ���� � �i������i �i� 2 �� 9999.\n");
		return 1;
	}

	long long a = 1, b = 1, c = 0;
	long long new_a, new_b, new_c;
	for (int i = 2; i <= n; i++) {
		new_a = (a + b + c) % MOD;
		new_b = a % MOD;
		new_c = b % MOD;
		a = new_a;
		b = new_b;
		c = new_c;
	}
	long long result = (a + b + c) % MOD;
	printf("�i���i��� ������� ����i��������� �������� %d: %lld\n", n, result);
	return 0;
}