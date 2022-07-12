#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include<cstring>
using namespace std;
#define MAX 100;
// ======== mon hoc

typedef struct mon_hoc
{
    string ma_mh;
    string ten_mh;
    int stclt;
    int stcth;
}mon_hoc;

typedef struct ds_mon_hoc
{
    mon_hoc ds['MAX'];
    int sl = 0;
}ds_mon_hoc;

//==============  DIEM
typedef struct diem_tp
{   
    string ma_mh;
    float diem;
    int lan;
}diem_tp;
struct note_diem_tp
{
    diem_tp data_diem;
    note_diem_tp* pnext;
};
typedef struct note_diem_tp;

typedef struct danh_sach_diem_tp
{
    note_diem_tp * phead =  NULL;
    note_diem_tp * ptail =  NULL;
}danh_sach_diem_tp;

// ========= SINH VIEN 
typedef struct sv
{
    string ho;
    string ten;
    string ma_sv; 
    string phai;
    string sdt;
    danh_sach_diem_tp ds_diem_tp;
};
struct note_sv
{
    // data
    sv data_sv;
    // pointer next;
    note_sv *pnext;
};
typedef struct note_sv note_sv;

typedef struct ds_sinh_vien
{
    note_sv *phead= NULL;
    note_sv *ptail = NULL;
}ds_sinh_vien;


//===========  LOPP
typedef struct lop  
{
    string ten_lop;
    string ma_lop;
    int nien_khoa;
    ds_sinh_vien ds_sv;
}lop;
typedef struct danh_sach_lop
{
    lop ds['MAX'];
    int sl = 0;
} danh_sach_lop;
