//
// Created by rudri on 3/29/2019.
//
#include <iostream>
#include "Vector.h"

namespace UTEC {
    void vector::push_back(const int &value) {
        // Completarlo
        int *arrtemp=new int[_size+1];
        for(int i=0; i<_size; i++){
            arrtemp[i]=_arr[i];
        }
        arrtemp[_size]=value;
        _arr=arrtemp;
        _size++;
    }

    void vector::pop_back() {
        // Completarlo
        int *arrtemp=new int[_size-1];
        for(int i=0; i<_size-1; i++){
            arrtemp[i]=_arr[i];
        }
        _arr=arrtemp;
        _size--;
    }

    void vector::insert(int pos, const int &value){
        // Completarlo
        int *arrtemp=new int[_size+1];
        for(int i=0; i<pos; i++){
            arrtemp[i]=_arr[i];
        }
        arrtemp[pos]=value;
        for(int i=pos+1; i<_size; i++){
            arrtemp[i]=_arr[i];
        }
        _arr=arrtemp;
        _size++;
    }

    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
        delete[] _arr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}
}