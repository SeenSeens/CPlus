#include <iostream>
using namespace std;
typedef struct Data
{
	int Data;

}Data;
//1. Tổ chức danh sách đơn
/*Định nghĩa tổng quát*/
//typedef struct tagNode
//{
//	Data Info; // Data là kiểu đã định nghĩa trước
//	struct tagNode*pNext; // Con trỏ chỉ đến cấu trúc node
//} NODE;

/*Ví dụ : Ðịnh nghĩa danh sách đơn lưu trữ hồ sơ sinh viên: */
typedef struct SinhVien // Data
{
	char Ten[30];
	int MaSV;
}SV;
typedef struct SinhVienNode
{
	SV Info;
	struct SinhVien *pNext;
}SVNode;

//Các phần tử trong danh sách sẽ được cấp phát động.
//Biết phần tử đầu tiên ta sẽ truy xuất được phần tử tiếp theo.
//Thường sử dụng con trỏ Head để lưu trữ địa chỉ đầu tiên trong danh sách.
//Ta có khai báo.
//NODE *pHead;
//Để quản lý địa chỉ cuối cùng trong danh sách ta dùng con trỏ TAIL. Khai báo như sau:
//NODE *pTail;

//Các thao tác cơ bản trên danh sách liên kết đơn

typedef struct tagNode
{
	Data Info;
	struct tagNode *pHead;
}NODE;
typedef struct tagList
{
	NODE *pHead;
	NODE *pTail;
}LIST;

//NODE *new_ele; // Giữ địa chỉ của 1 phần tử mới được tạo.
//Data x; // Lưu thông tin về phần tử sẽ được tạo.
//LIST lst; // Lưu địa chỉ đầu, cuối của danh sách liên kết.

//Chèn 1 phần tử vào danh sách. Có 3 cách
/*Cách 1 chèn vào đầu danh sách.
Thuật toán: Ở đây mình miêu tả bằng ngôn ngữ lập trình CPlus cho dễ nhớ.
if (danhsach == NULL) // nếu danh sách rỗng thì
{
	pHead = new_ele; // node đầu = node mới.
	pTail = pHead; // node cuối = node đầu.
}
else
{
	new_ele->pNext = pHead; // node mới ->node tiếp theo = node đầu.
	pHead = new_ele; // node đầu = node mới. Tức là node đầu trước kia lùi ra sau nhường chỗ cho node mới.
}*/

/*
Cách 2 chèn vào cuối danh sách
if (danhsach == NULL) // nếu danh sách rỗng thì.
{
	pHead = new_ele; // node đầu = node mới.
	pTail = pHead; // Node cuối = node đầu. // Cái này tóm lại là node đầu cuối là 1 nó là 1 node mới
}
else
{
	pTail->pNext = new_ele; // node cuối ->node tiếp theo = node mới
	pTail = new_ele; // node cuối = node mới // gán node cuối bằng 1 node mới, node kia vẫn ở đó nhưng bây giờ nó không ở cuối nữa.
}
*/

/*
Chèn vào sau 1 phần tử q
if (q != NULL) // nếu node q khác rỗng thì
{
	new_ele->pNext = q->pNext; // node mới ->node tiếp theo = node q ->node p tiếp theo
	q->pNext = new_ele; // node q ->node tiếp theo = node mới
}
*/

/*
Tìm 1 phần tử trong danh sách
Thuật toán
Bước 1:
	p = pHead; //cho p trỏ đến phần tử đầu của danh sách
Bước 2:
	while ((p != NULL) && (p->Info = k)) // trong khi (p khác null) và (p->Info = k) thực hiện:
	{
		p:= ->pNext; // cho p trỏ tới phần tử kế
	}
Bước 3:
	if (p != NULL) // nếu p khác null thì:
	{
		p = pSearch; // cho p trỏ tới phần tử cần tìm
	}
	else
	{
		// không có phần tử cần tìm
	}
*/

//Hủy 1 phần tử ra khỏi danh sách

/*
Hủy phần tử đầu
if (pHead != NULL)
{
	p = pHead; // p là phần tử cần hủy
	pHead = pHead->pNext; // tách p ra khỏi xâu
	free(p); // hủy biến động do p trỏ đến
}
else // ngược lại nếu pHead = NULL thì pTail = NULL // xâu rông
{
	pTail = NULL; // xâu rỗng
}
*/

/*
Hủy 1 phần tử đứng sau phần tử q
if (q != NULL)
{
	p = q->Next; // p là phần tử cần hủy
}
if (p != NULL) // thì // q không phải là cuối xâu
{
	q->Next = p->Next; // tách p ra khỏi xâu
	free(p); // hủy biến động do p trỏ đến
}
*/

/*
Hủy 1 phần tử có khóa k
Bước 1: Tìm phần tử p có khóa k và phần tử q đứng trước nó
Bước 2 : if (p != NULL)
		{
			Tìm thấy k
			free(p); // hủy p ra khỏi xâu tương tự hủy phần tử sau q
		}
		else
		{
			Báo không có k
		}
*/

//Thăm các nút trên danh sách
//- Đếm các phần tử của danh sách
//- Tìm tất cả các phần tử thỏa điều kiện
//- Hủy toàn bộ danh sách (và giải phóng bộ nhớ)

/*
Thuật toán xử lý các nút trên danh sách:
Bước 1 :
	p = pHead; // cho p trỏ đến phần tử đầu danh sách
Bước 2 :
	while (Danh sách chưa hết)
	{
		Xử lý phần tử p;
		p: = p->Next; // cho p trỏ tới phần tử kế
	}
*/

/*
Thuật toán hủy toàn bộ danh sách:
Bước 1:
	while (Danh sách chưa hết)
	{
		p = pHead; // cho p trỏ đến phần tử đầu danh sách
		pHead: = pHead->pNext; // cho p trỏ đến phần tử kế
		free(p); // hủy p
	}
Bước 2:
	Tail = NULL; // Bảo đảm tính nhất quán khi xâu rỗng
*/










