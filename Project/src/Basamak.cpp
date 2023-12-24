/*
* File: Basamak.cpp
* Description: Basamak düğümünün cpp dosyasini oluşturuyor sayı sınıfı için.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "Basamak.hpp"

#include <iostream>
using namespace std;

Basamak::Basamak(char veri, Basamak* next=NULL) {
    this->veri = veri;
    this->next = next;
}