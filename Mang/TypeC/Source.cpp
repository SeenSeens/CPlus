#include <stdio.h>
#include <conio.h>
#define MAX 100
void Nhap (int a[], int &n);
void Xuat(int a[], int n);

// Nhập vào dãy số nguyên tối đa 100 phần tử
void Nhap(int a[], int &n)
{
	do
	{
		//printf("\nNhap chieu dai day so: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu a[%d] = ", i );
		scanf_s("%d", &a[i]);
	}
}

// xuất dãy số nguyên vừa nhập
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\t %d", a[i]);
	}
}

// Đếm các số chẵn trong dãy
int Demchan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) { dem++; }
	}
	return dem;
}

// In ra 2 dòng: 1 dòng các số chắn theo thứ tự nhập, 1 dòng số lẽ ngược thứ tự nhập

void main()
{
	int a[MAX], n;
	printf("\nNhap day so: ");
	Nhap(a, n);
	printf("\nDay so vua nhap: ");
	Xuat(a, n);
	_getch();
}

