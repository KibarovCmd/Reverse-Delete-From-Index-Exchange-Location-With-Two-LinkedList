/*
* File: Sayi.hpp
* Description: Sayi sinifinin başlık dosyasını oluşturuyor.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "Basamak.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Sayi {
    public:
        Sayi();
        ~Sayi();
        void printValuesToTheScreen();
        string excludeData();
        void printValuesFarFormToTheScreen();
        string setValuesUntilFinish();
        void evenNumberToFirstPlace();
        void makeVersVersaTheTextDocument();
        void addNumberToLastPoint(char);
        void addNumberToFirstPoint(char);
        void insert(int, char);
        void clearList();
        int listLenghtFonc();
        void deleteInsertNumber(int);
    private:
        Basamak* head;
        int listLenght;

        Basamak* FindPrevByPosition(int);
        Basamak* FindPrevByPositionWithoutRange(int);
};