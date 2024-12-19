#ifndef duc
#define duc
// khai báo tên 
#include <Arduino.h>

class Duc {
    private:
    String data;// data chuỗi
    int t;
    float x[99];// nơi nhận dự liệu bị phân tách
  public:
  // cách hàm chức năng chính của thư viện
    Duc(String data_new);// hàm khai báo
    void Split();//hàm tách 
    float get(int desire) const;//hàm lấy dữ liệu được tách ra ngoài, desire là số thứ tự trong mảng muốn lấy|| const có chức năng làm ổn định 
};
class Thu{
  private:
  int quantity;//số lượng dữ liệu trong mảng


  public:
  Thu(int quantity_new);// nhập số lượng data
  String fusion(float *p);//hàm chuyển đổi nhiều dữ liệu thành một chuỗi cách nhau =(;)||*p trỏ vào mảng 


};
#endif