/*
* File: SayilarListesi.hpp
* Description: SayilarListesi sinifinin başlık dosyasını olusturuyor.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "Dugum.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class SayilarListesi {
    public:
        SayilarListesi();
        ~SayilarListesi();
        void clearListData();
        void clearList();
        void deleteTheBiggestDataStructer();
        void deleteInsertNumber(int);
        void makeVersVersaTheTextDocument();
        void evenNumberToFirstPlace();
        void printValuesToTheScreen();
        void readTxtDocumentAndAddValuesLinkedList();
        void addValueToLastPointWithValue(string);
        int stringToInt(string);
    private:
        Dugum* head;
        int listLenght;
        
        Dugum* FindPrevByPosition(int);
        void insertWithValue(int, string);
};