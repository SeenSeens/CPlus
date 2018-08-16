//Đệ qui tuyến tính trong 1 hàm có duy nhất 1 lời gọi hàm tới chính nó.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


//T(1) == 3
//T(n) = 3 + 2 * T(n - 1)
//int T(int n) {
//	if (n == 1) return 3;
//	return 3 + 2 * T(n - 1);
//}

//S(2) == 5
//S(n) = 2 * S(n - 1) - 3 (n>2)
//int S(int n)
//{
//	if (n == 2) return 5;
//	return 2 * S(n - 1) - 3;
//}

//S(2) = 1/2
//S(n) = S(n-1) + 1/(n-1)*n
//float S(int n)
//{
//	if (n == 2) return 1 / 2;
//	return S(n - 1) + 1.0 / (n - 1)*n;
//}

//T(1) == 2
//T(n) = 3*T(n-1)+1
int T(int n)
{
	if (n == 1) return 2;
	return 3 * T(n - 1) + 1;
}
void main()
{
	int n;
	/*cout << "Nhap vao n: ";
	cin >> n;
	cout << "Ket qua: " << T(n);
	system("pause");*/
	printf("Nhap vao n: ");
	scanf_s("%d", &n);
	printf("Ket qua: %d", T(n) );
	_getch();
}
