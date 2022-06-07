#include<stdio.h>
 
int main()
{
      int khung[50], tam[50], trang[50];
      int so_trang, m, n, vitri, k, l, so_khung;
      int a = 0, b = 0, loi_trang = 0;
      printf("\nNhập số khung:\t");
      scanf("%d", &so_khung);
      for(m = 0; m < so_khung; m++)
      {
            khung[m] = -1;
      }
      printf("Nhập số trang:\t");
      scanf("%d", &so_trang);
      printf("Nhập các giá trị cho chuỗi tham chiếu:\n");
      for(m = 0; m < so_trang; m++)
      {
            printf("Giá trị tham chiếu.[%d]: ", m + 1);
            scanf("%d", &trang[m]);
      }
      for(n = 0; n < so_trang; n++)
      {
            a = 0, b = 0;
            for(m = 0; m < so_khung; m++)
            {
                  if(khung[m] == trang[n])
                  {
                        a = 1;
                        b = 1;
                        break;
                  }
            }
            if(a == 0)
            {
                  for(m = 0; m < so_khung; m++)
                  {
                        if(khung[m] == -1)
                        {
                              khung[m] = trang[n];
                              b = 1;
                              loi_trang++;
                              break;
                        }
                  }
            }
            if(b == 0)
            {
                  for(m = 0; m < so_khung; m++)
                  {
                        tam[m] = 0;
                  }
                  for(k = n - 1, l = 1; l <= so_khung - 1; l++, k--)
                  {
                        for(m = 0; m < so_khung; m++)
                        {
                              if(khung[m] == trang[k])
                              {
                                    tam[m] = 1;
                              }
                        }
                  }
                  for(m = 0; m < so_khung; m++)
                  {
                        if(tam[m] == 0)
                        vitri = m;
                  }
                  khung[vitri] = trang[n];
                  loi_trang++;
            }
            printf("\n");
            for(m = 0; m < so_khung; m++)
            {
                  printf("%d\t", khung[m]);
            }
      }
      printf("\nTổng số lỗi trang:\t%d\n", loi_trang);
      return 0;
}