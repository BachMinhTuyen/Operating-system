#include <stdio.h>
int main()
{
    int chuoi_tham_chieu[50], loi_trang = 0, m, n, s, so_trang, so_khung;
    printf("\nNhập số trang:\t");
    scanf("%d", &so_trang);
    printf("\nNhập các giá trị của chuỗi tham chiếu:\n");
    for( m = 0; m < so_trang; m++)
    {
        printf("Giá trị thứ. [%d]:\t", m + 1);
        scanf("%d", &chuoi_tham_chieu[m]);
    }
    printf("\nNhập số khung:\t");
    {
        scanf("%d", &so_khung);
    }
    
    int tam[so_khung];
    for(m = 0; m < so_khung; m++)
    {
        tam[m] = -1;
    }
    for(m = 0; m < so_trang; m++)
    {
        s = 0;
        for(n = 0; n < so_khung; n++)
        {
            if(chuoi_tham_chieu[m] == tam[n])
                {
                    s++;
                    loi_trang--;
                }
        }     
        loi_trang++;
        if((loi_trang <= so_khung) && (s == 0))
        {
            tam[m] = chuoi_tham_chieu[m];
        }   
        else if(s == 0)
        {
            tam[(loi_trang - 1) % so_khung] = chuoi_tham_chieu[m];
        }
        printf("\n");
     for(n = 0; n < so_khung; n++)
       {     
         printf("%d\t", tam[n]);
       }
    } 

    printf("\nTổng số lỗi trang:\t%d\n", loi_trang);
    return 0;
}