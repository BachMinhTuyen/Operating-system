#include<stdio.h>

int main()
{
    static int khoinho[10], tientrinh[10];
    int phanmanh[10], kichthuockhoi[10], kichthuoctientrinh[10];
    int m, n, sokhoi, sotientrinh, temp;
    printf("\nNhap tong so khoi nho:");
    scanf("%d", &sokhoi);
    printf("Nhap tong so tien trinh:");
    scanf("%d", &sotientrinh);
    printf("\nNhap kich thuoc (dung luong) cua moi khoi nho:\n");
    for (m = 0; m < sokhoi; m++)
    {
        printf("Khoi.[%d]:", m + 1);
        scanf("%d", &kichthuockhoi[m]);
    }
    printf("Nhap kich thuoc cua moi tien trinh:\n");
    for (m = 0; m < sotientrinh; m++)
    {
        printf("Tien trinh.[%d]:", m + 1);
        scanf("%d", &kichthuoctientrinh[m]);
    }
    for (m = 0; m < sotientrinh; m++)
    {
        for (n = 0; n < sokhoi; n++)
        {
            if (kichthuockhoi[n] >= kichthuoctientrinh[m])
            {
                khoinho[m] = n;
                kichthuockhoi[n] = kichthuockhoi[n] - kichthuoctientrinh[m];
                temp = kichthuockhoi[n];
                tientrinh[m] = n;

                break;

            }
        }
        phanmanh[m] = temp;


    }
    printf("\nTien trinh\t\tKich thuoc tien trinh\t\tKhoi nho\t\tPhan manh");
    for (m = 0; m < sotientrinh; m++)
    {
        printf("\n%d\t\t\t%d\t\t\t\t%d\t\t\t%d", m + 1, kichthuoctientrinh[m], tientrinh[m] + 1, phanmanh[m]);
    }
    printf("\n");
    return 0;
}