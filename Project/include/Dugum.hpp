/*
* File: Dugum.hpp
* Description: Dugum düğümünün başlık dosyasını oluşturuyor sayilarlistesi sınıfı için.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "Sayi.hpp"

#include <iostream>
using namespace std;

class Dugum {
    public:
        Dugum(Sayi*, Dugum*);
    public:
        Sayi* veri;
        Dugum* next;
};