/*
1. Khái niệm
Cấu trúc là 1 kiểu dữ liệu cho phép nhiều loại dữ liệu được nhóm lại với nhau, mỗi loại dữ liệu là 1 thành phần của cấu trúc.
*/

/*
2. Khai báo biến cấu trúc
Syntax:
struct<Tên kiểu cấu trúc>
{
	<Khai báo các thành phần cấu trúc>
};
*/

/*
Ex1: Khai báo cấu trúc lưu trữ thông tin của 1 điểm & 1 tam giác trong mặc phẳng.
struct Diem
{
	int x, y;
};
Diem là 1 kiểu cấu trúc gồm 2 thành phần x, y kiểu int

struct TamGiac
{
	Diem a, b, c;
};
TamGiac là 1 kiểu cấu trúc gồm 3 thành phần a, b, c kiểu Diem
*/

/*
Ex2: Khai báo cấu trúc lưu trữ thông tin của 1 sinh viên
struct SinhVien
{
	char ma[10];
	char ten[30];
	int namsinh;
	float diem;
};
SinhVien là 1 kiểu cấu trúc gồm 4 thành phần: ma & ten kiểu chuỗi, namsinh kiểu int, diem kiểu float.
*/

/*
3. Truy cập đến các thành phần cấu trúc
Để truy cập đến các thành phần cấu trúc từ 1 biến cấu trúc, ta dùng TOÁN TỬ DẤU CHẤM.
*/

/*
Ex1:
Diem d; // Khai báo 1 biến d kiểu cấu trúc Diem.
Để dùng d truy cập đến các thành phần của Diem, ta viết:
d.x, d.y: tọa độ điểm d
*/

/*
Ex2:
TamGiac tg; // Khai báo 1 biến tg kiểu cấu trúc TamGiac
Để dùng tg truy cập đến các thành phần của TamGiac, ta viết:
tg.a.x, tg.a.y: tọa độ điểm a
tg.b.x, tg.b.y: tọa độ điểm b
tg.c.x, tg.c.y: tọa độ điểm c
*/

//Để truy cập đến các thành phần cấu trúc từ 1 biến con trỏ cấu trúc, ta dùng TOÁN TỬ DẤU MŨI TÊN.
/*
Ex:
Diem *p1; // Khai báo 1 biến con trỏ p1 kiểu Diem
p1 = &d; // p1 trỏ tới d;
Để dùng p1 truy cập đến các thành phần của Diem, ta viết:
p1->x, p1->y; tọa độ điểm d
*/

/*
Ex2:
TamGiac *p2; // Khai báo 1 biến con trỏ p2 kiểu TamGiac
p2 = &tg; // p2 trỏ tới tg
Để dùng p2 truy cập đến các thành phần cảu TamGiac, ta viết:
p2->a.x, p2->a.y: tọa độ điểm a
p2->b.x, p2->b.y: tọa độ điểm b
p2->c.x, p2->c.y: tọa độ điểm c
*/