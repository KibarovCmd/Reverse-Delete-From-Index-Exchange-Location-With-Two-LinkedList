/*
* File: SayilarListesi.hpp
* Description: SayilarListesi sinifinin cpp dosyasını olusturuyor.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "SayilarListesi.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

SayilarListesi::SayilarListesi() {
    head = NULL;
    listLenght = 0;
}
SayilarListesi::~SayilarListesi() {
    cout << "Removed List" << endl;
    clearListData();
    clearList();
}
void SayilarListesi::clearListData () {
    Dugum* current = head;
    while (current != NULL) {
        Dugum* nextNode = current->next;
        delete current->veri;
        current = nextNode;
    }
}
void SayilarListesi::clearList() {
    Dugum* current = head;
    while (current != NULL) {
        Dugum* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    listLenght = 0;
}
void SayilarListesi::deleteTheBiggestDataStructer() {
    cout << "Removed Alexander Alexander Alexander" << endl;
    if(listLenght != 0) {
        int theBiggestData;
        Dugum *notImportantData, *itr=head;
        int index = 0;
        int indexPosition = 1;
        theBiggestData = stringToInt(itr->veri->excludeData());
        notImportantData = itr;
        itr = itr->next;
        for(; itr != NULL; itr=itr->next, indexPosition++) {
            if(theBiggestData < stringToInt(itr->veri->excludeData())) {
                theBiggestData = stringToInt(itr->veri->excludeData());
                notImportantData = itr;
                index = indexPosition;
            }
        }
        deleteInsertNumber(index);
    }
    else {
        cout << "Warning! Process Could Not Running: You Can't Delete Number Now 'Cause List Already Is Empty" << endl;
    }
}
void SayilarListesi::deleteInsertNumber(int position) {
    cout  << "Removed Mr.Alexander" << endl;
    if(position == 0) {
        Dugum *node = head;
        head = head->next;
        delete node->veri;
        delete node;
    }
    else {
        Dugum *node = FindPrevByPosition(position);
        Dugum *nodeToDelete = node->next;
        node->next = node->next->next;
        delete nodeToDelete->veri;
        delete nodeToDelete; 
    }
    listLenght--;
}
void SayilarListesi::makeVersVersaTheTextDocument() {
    for(Dugum* itr = head; itr != NULL; itr = itr->next) {
        itr->veri->makeVersVersaTheTextDocument();
    }
}
void SayilarListesi::evenNumberToFirstPlace() {
    for(Dugum* itr = head; itr != NULL; itr = itr->next) {
        itr->veri->evenNumberToFirstPlace();
    }
}
void SayilarListesi::printValuesToTheScreen() {
    if (listLenght == 0) cout << "Can't Write To The Screen 'Cause List Is Empty" << endl;
    else {
        cout << endl;
        for(Dugum *itr = head; itr != NULL; itr=itr->next) {
            const void * address = static_cast<const void*>(itr);
            stringstream ss;
            ss << address;  
            string name = ss.str();
            if(itr->veri->listLenghtFonc() < name.length()) {
            for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl;
            cout << "#" << itr << "#";
            itr->veri->printValuesFarFormToTheScreen();
            for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl;
            cout << "#"; itr->veri->printValuesToTheScreen(); cout << "#";
            if((itr->veri->setValuesUntilFinish()).length() <= name.length()) {
                for(int indexNumber = 0; indexNumber < name.length()-(itr->veri->setValuesUntilFinish()).length(); indexNumber++) {
                    cout << " ";
                }
            }
            cout << "     ";
            string dataInhere = itr->veri->setValuesUntilFinish();
            for(int indexNumber2 = 0; indexNumber2 < (itr->veri->setValuesUntilFinish()).length(); indexNumber2++) {
                cout << "# " << dataInhere[indexNumber2] << " #";
                cout << "     ";
            }
            cout << endl;
            for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl << endl;
            }
            else {
                int emptyLenght = itr->veri->listLenghtFonc() - name.length() + 5;
                for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else if(i == 1) {
                    for(int j = 0; j < emptyLenght; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl;
            cout << "#" << itr << "#";
            for(int i = 0; i < emptyLenght-5; i++) {
                cout << " ";
            }
            itr->veri->printValuesFarFormToTheScreen();
            for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else if(i == 1) {
                    for(int j = 0; j < emptyLenght; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl;
            cout << "#"; itr->veri->printValuesToTheScreen(); cout << "#";
            if((itr->veri->setValuesUntilFinish()).length() <= name.length()) {
                for(int indexNumber = 0; indexNumber < name.length()-(itr->veri->setValuesUntilFinish()).length(); indexNumber++) {
                    cout << " ";
                }
            }
            cout << "     ";
            string dataInhere = itr->veri->setValuesUntilFinish();
            for(int indexNumber2 = 0; indexNumber2 < (itr->veri->setValuesUntilFinish()).length(); indexNumber2++) {
                cout << "# " << dataInhere[indexNumber2] << " #";
                cout << "     ";
            }
            cout << endl;
            for(int i = 0; i < itr->veri->listLenghtFonc()+1; i++) {
                if(i == 0) {
                    for(int j = 0; j < name.length()+2; j++) {
                        cout << '#';
                    }
                }
                else if(i == 1) {
                    for(int j = 0; j < emptyLenght; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
                else {
                    for(int j = 0; j < 5; j++) {
                        cout << ' ';
                    }
                    for(int j = 0; j < 5; j++) {
                        cout << '#';
                    }
                }
            }
            cout << endl << endl;
            }
        }         
    }
}
void SayilarListesi::readTxtDocumentAndAddValuesLinkedList() {
    ifstream dosyaOku("Sayilar.txt");
    string row;
    if (dosyaOku.is_open()) {
        getline(dosyaOku, row);
        dosyaOku.close();
        row += " 145.";
        string addValue;
        for(int i = 0; i < row.length(); i++) {
            if(i != 0) {
                if(row[i] == ' ') {
                    addValueToLastPointWithValue(addValue);
                    addValue = "";
                }
            }
            if(row[i] == '.') {
                break;
            }
            else {
                if(row[i] != ' ') {
                addValue += row[i];
                }
            }
        }
    }
    else {
        dosyaOku.open("../Sayilar.txt");
        if (dosyaOku.is_open()) {
            getline(dosyaOku, row);
            dosyaOku.close();
            row += " 145."; //Important number for class
            string addValue;
            for(int i = 0; i < row.length(); i++) {
                if(i != 0) {
                    if(row[i] == ' ') {
                        addValueToLastPointWithValue(addValue);
                        addValue = "";
                    }
                }
                if(row[i] == '.') {
                    break;
                }
                else {
                    if(row[i] != ' ') {
                        addValue += row[i];
                    }
                }
            }
        }
    }
    
}
void SayilarListesi::addValueToLastPointWithValue(string number) {
    insertWithValue(listLenght, number);
}
int SayilarListesi::stringToInt(string value) {
    int times = 1;
    int sum = 0;
    for(int i = value.length()-1; i >= 0; i--) {
        int myChar = value[i] - '0';
        sum += times*myChar;
        times *= 10;
    }
    return sum;
}
Dugum* SayilarListesi::FindPrevByPosition(int position) {
    if(position < 0 || position > listLenght) {
        throw "Index Out Of Range";
    }
    int index = 1;
    for(Dugum* itr=head; itr != NULL; itr=itr->next, index++) {
        if(position == index) {
            return itr;
        }
    }
    return NULL;
}
void SayilarListesi::insertWithValue(int position, string number) {
    Sayi* sayi = new Sayi();
    for(int i = 0; i < number.length(); i++) {
        sayi->addNumberToLastPoint(number[i]);
    }
    if(position == 0) {
        head = new Dugum(sayi,head);
    }
    else {
        Dugum *prev = FindPrevByPosition(position);
        prev->next = new Dugum(sayi, prev->next);
    }
    listLenght++;
}