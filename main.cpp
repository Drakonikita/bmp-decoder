#include <iostream>
#include <fstream>


//http://math.ivanovo.ac.ru/dalgebra/Khashin/gr/bmp/bmp.html

typedef unsigned __int16 WORD;

typedef struct {
      WORD   bfType;         // 0x4d42 | 0x4349 | 0x5450
      int    bfSize;         // ������ �����
      int    bfReserved;     // 0
      int    bfOffBits;      // �������� �� ���� ������,
                             // ������ 54 = 16 + biSize
      int    biSize;         // ������ �������� � ������:
                             // 40(BITMAPINFOHEADER) ��� 108(BITMAPV4HEADER)
                             // ��� 124(BITMAPV5HEADER)
      int    biWidth;        // ������ � ������
      int    biHeight;       // ������ � ������
      WORD   biPlanes;       // ������ ������ ���� 1
      WORD   biBitCount;     // 0 | 1 | 4 | 8 | 16 | 24 | 32
      int    biCompression;  // BI_RGB | BI_RLE8 | BI_RLE4 |
                             // BI_BITFIELDS | BI_JPEG | BI_PNG
                             // ������� ������������ ���� BI_RGB
      int    biSizeImage;    // ���������� ���� � ���� ������
                             // ������ ��������������� � 0
      int    biXPelsPerMeter;// �������������� ����������, ����� �� ����
      int    biYPelsPerMeter;// ������������ ����������, ����� �� ����
      int    biClrUsed;      // ���������� ������������ ������
                             // (���� ���� ������� ������)
      int    biClrImportant; // ���������� ������������ ������.
                             // ����� �������, ������ 0
} BMPheader;

int main()
{
    std::string buf1;
    std::ifstream fin1("1.bmp", std::ios::binary);
    if (fin1.is_open())
    {
        while(!fin1.eof())
        {
            getline(fin1, buf1);
            std::cout << buf1 << std::endl;

        }

    }
    fin1.close();


    return 0;
}
