#include<stdio.h>
 
int main()
{
      int chuoi_tham_chieu[50], khung[50], khoang_thoi_gian[50];
      int so_trang, so_khung, loi_trang = 0;
      int m, n, tam, co, datim; //m: biến kiểm soát trang; n: kiểm soát khung; tam: biến tạm; co: biến cờ; datim: biến đã tìm
      int vitri, khoang_thoi_gian_max, khung_truoc = -1;
      
      printf("\nNhập số khung:\t");
      scanf("%d", &so_khung);
      printf("\nNhập số trang:\t");
      scanf("%d", &so_trang);
      printf("\nNhập các giá trị của chuỗi tham chiếu\n");
      for(m = 0; m < so_trang; m++)
      { 
            printf("Giá trị tham chiếu.[%d]: ", m + 1);
            scanf("%d", &chuoi_tham_chieu[m]);
      }
      
      
      for(m = 0; m < so_khung; m++) 
      {
            khung[m] = -1;
      }
      for(m = 0; m < so_trang; m++)
      {
            co = 0;
            for(n = 0; n < so_khung; n++)
            {
                  if(khung[n] == chuoi_tham_chieu[m])
                  {
                        co = 1;
                        printf("\t");
                        break;
                  }
            }
            if(co == 0) 
            {
                  if (khung_truoc == so_khung - 1)
                  {
                        for(n = 0; n < so_khung; n++)
                        {      
                              for(tam = m + 1; tam < so_trang; tam++)
                              {      
                                    khoang_thoi_gian[n] = 0;
                                    if (khung[n] == chuoi_tham_chieu[tam])
                                    {      
                                          khoang_thoi_gian[n] = tam - m;
                                          break;
                                    }
                              }
                        }
                        datim = 0;
                        for(n = 0; n < so_khung; n++)
                        {
                              if(khoang_thoi_gian[n] == 0)
                              {                 
                                    vitri = n;
                                    datim = 1;
                                    break;
                              }            
                        }
                  }
                  else
                  {
                        vitri = ++khung_truoc;
                        datim = 1;
                  }
                  if(datim == 0)
                  {
                        khoang_thoi_gian_max = khoang_thoi_gian[0];
                        vitri = 0;
                        for(n = 1; n < so_khung; n++)
                        {
                              if(khoang_thoi_gian_max < khoang_thoi_gian[n])
                              {
                                    khoang_thoi_gian_max = khoang_thoi_gian[n];
                                    vitri = n;
                              }
                        }
                   }     
                   khung[vitri] = chuoi_tham_chieu[m];
                   printf("LỖI\t");
                   loi_trang++;
            }
            for(n = 0; n < so_khung; n++)
            {
                  if(khung[n] != -1) 
                  {
                        printf("%d\t", khung[n]);
                  }
            }
            printf("\n");
        }
        printf("\nTổng số lỗi trang:\t%d\n", loi_trang);
        return 0;
}