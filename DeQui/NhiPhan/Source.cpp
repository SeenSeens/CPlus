//Đệ qui nhị phân trong 1 hàm có 2 lời gọi hàm tới chính nó.
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


////Fibonneci
//int F (int n)
//{
//	f1 = 1, f2 = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return f3;
//}

//F(1) = 1, F(2) = 1
//F(n) = F(n - 1) + F(n - 2);
//int F(int n)
//{
//	if (n == 1) return 1;
//	if (n == 2) return 1;
//	return F(n - 1) + F(n - 2);
//}

//T(1) = 3, T(2) = 1
//T(n) = 5 * T(n - 1) - 2 * T(n - 2)     (n > 2)
//int T(int n)
//{
//	if (n == 1) return 3;
//	if (n == 2) return 1;
//	return 5 * T(n - 1) - 2 * T(n - 2);
//}

//F(n) = 3 * F(n - 1) + 7 * F(n - 2) + 2
//F(1) = 2, F(2) = 3
int F(int n)
{
	if (n == 1) return 2;
	if (n == 2) return 3;
	return 3 * F(n - 1) + 7 * F(n - 2) + 2;
}
void main()
{
	int n;
	/*cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << F(n);
	system("pause");*/

	printf("Nhap n: ");
	scanf_s("%d", &n);
	printf("Ket qua: %d", F(n));
	_getch();
}