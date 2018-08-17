/*
1. Khái niệm
Cấu trúc là 1 kiểu dữ liệu cho phép nhiều loại dữ liệu được nhóm lại với nhau, mỗi loại dữ liệu là 1 thành phần của cấu trúc.

2. Khai báo biến cấu trúc
Syntax:
struct<Tên kiểu cấu trúc>
{
	<Khai báo các thành phần cấu trúc>
};

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

Ex1:
Diem d; // Khai báo 1 biến d kiểu cấu trúc Diem.
Để dùng d truy cập đến các thành phần của Diem, ta viết:
d.x, d.y: tọa độ điểm d

Ex2:
TamGiac tg; // Khai báo 1 biến tg kiểu cấu trúc TamGiac
Để dùng tg truy cập đến các thành phần của TamGiac, ta viết:
tg.a.x, tg.a.y: tọa độ điểm a
tg.b.x, tg.b.y: tọa độ điểm b
tg.c.x, tg.c.y: tọa độ điểm c
*/

//Để truy cập đến các thành phần cấu trúc từ 1 biến con trỏ cấu trúc, ta dùng TOÁN TỬ DẤU MŨI TÊN.
/*
Ex1:
Diem *p1; // Khai báo 1 biến con trỏ p1 kiểu Diem
p1 = &d; // p1 trỏ tới d;
Để dùng p1 truy cập đến các thành phần của Diem, ta viết:
p1->x, p1->y; tọa độ điểm d

Ex2:
TamGiac *p2; // Khai báo 1 biến con trỏ p2 kiểu TamGiac
p2 = &tg; // p2 trỏ tới tg
Để dùng p2 truy cập đến các thành phần cảu TamGiac, ta viết:
p2->a.x, p2->a.y: tọa độ điểm a
p2->b.x, p2->b.y: tọa độ điểm b
p2->c.x, p2->c.y: tọa độ điểm c
*/

/*
4. Mảng cấu trúc
- Là 1 mảng mà mỗi phần tử của nó là 1 cấu trúc bao gồm nhiều thành phần.

Ex1: 
#define SIZE 20
Diem darr[SIZE];
darr là 1 mảng cấu trúc gồm SIZE phần tử kiểu Diem, khi đó:
darr[0].x, darr[0].y là tọa độ điểm 0
darr[1].x, darr[1].y là tọa độ điểm 1
...

Ex2 :
#define SIZE 20
TamGiac tgarr[SIZE];
tgarr là 1 mảng cấu trúc gồm SIZE phần tử kiểu TamGiac, khi đó:
tgarr[0].a.x, tgarr[0].a.y, tgarr[0].b.x, tgarr[0].b.y, tgarr[0].c.x, tgarr[0].c.y là 3 tọa độ điểm của tam giác thứ 0
tgarr[1].a.x, tgarr[1].a.y, tgarr[1].b.x, tgarr[1].b.y, tgarr[1].c.x, tgarr[1].c.y là 3 tọa độ điểm của tam giác thứ 1
*/

/*
5. Khởi tạo cấu trúc
Để khởi tạo cho cấu trúc ta viết vào sau khai báo của chúng 1 danh sách giá trị cho các thành phần

Ex:
SinhVien sv = { "a00", "Le Minh Hung", 1980, 9.5 };
SinhVien svarr[3] = {
	{"c00", "Nguyen Hoang Nam", 1980, 7}, // Sinh viên thứ 0
	{"ao1", "Bui Van Nguyen", 1985, 8.5}, // Sinh viên thứ 1
	{"b03", "Nguyen Thi Kim Dung", 1989, 7.6} // Sinh viên thứ 2
};
*/

/*
6. Nhập xuất cấu trúc
Nhập xuất cho 1 biến cấu trúc.
Nhập xuất cho 1 mảng cấu trúc.

Ex: Nhập xuất cho 1 sinh viên
	// Khai báo
	void Nhap1SV(SinhVien *u);
	void Xuat1SV(SinhVien u);
	// Định nghĩa các hàm
	void Nhap1SV(SinhVien *u)
	{
		float tam;
		printf("Ma sinh vien");
		fflush(stdin);
		get(u->ma);
		printf("Ten sinh vien");
		get(u->ma);
		printf("Nam sinh");
		scanf("%d", &u->namsinh);
		printf("Diem");
		scanf("%f", &u->diem);
	}
	void Xuat1SV(SinhVien u)
	{
		printf("%s\t%s\t%d\t%0.2f\n", u.ma, u.ten, u.namsinh, u.diem);
	}
	// Hàm chính
	void main()
	{
		SinhVien sv;
		Nhap1SV(&sv);
		Xuat1SV(sv);
	}
*/








