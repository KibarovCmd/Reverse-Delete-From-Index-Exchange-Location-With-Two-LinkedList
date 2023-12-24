/*
* File: Basamak.hpp
* Description: Basamak düğümünün başlık dosyasını oluşturuyor sayı sınıfı için.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include <iostream>
using namespace std;

class Basamak {
    public:
        Basamak(char, Basamak*);
    public:
        char veri;
        Basamak* next; 
};