/*
* File: Dugum.cpp
* Description: Dugum düğümünün cpp dosyasını oluşturuyor sayilarlistesi sınıfı için.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/


#include "Dugum.hpp"

#include <iostream>
using namespace std;

Dugum::Dugum(Sayi* veri, Dugum* next=NULL) {
    this->veri = veri;
    this->next = next;
}