#pragma once
#include "ctdl.h"
#include "xuly.h"
void load_file_mon(ds_mon_hoc &ds_mh)
{
    ifstream file("ds_mh.txt");
    // mở file đọc
    while (file.eof() == false)
    {
        mon_hoc mh;
        // tao một biến môn học lưu các giá trị như là
        //tên mã mh như kiểu lưu trữ 1 soos nguyên trước
        getline(file,mh.ma_mh,',');
        // lưu vào biến mh từ file mã mh va bỏ dấu ,
        getline(file,mh.ten_mh,',');
        // tượng tự
        file >> mh.stclt;
        // lưu kiểu số nguyên vào số tín chi lt
        file.ignore(); // bỏ qua kí tự ,
        file>> mh.stcth;
        file.ignore();
        // sau khi lưu vào biến mh rồi
        // bây giờ ta chỉ cần cop biến mh vào ds_mh
        ds_mh.ds[ds_mh.sl++] =mh;
    }
    // kết thúc ct bây giờ ta đóng file vào;

    file.close();

}
void load_file_diem(danh_sach_diem_tp &ds_diem)
{
    ifstream file("ds_diem.txt");
    while(file.eof()==false)
    {
        diem_tp diem_handle;
        getline(file,diem_handle.ma_mh,',');
        file >> diem_handle.diem;
        file.ignore();
        file >> diem_handle.lan;
        file.ignore();
        them_diem(ds_diem,diem_handle);
    }
    file.close();
}

