/*
* File: Sayi.cpp
* Description: Sayi sinifinin cpp dosyasını oluşturuyor.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/

#include "Sayi.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

    
Sayi::Sayi() {
    head = NULL;
    listLenght = 0;
}
Sayi::~Sayi() {
    cout << "Removed Alex" << endl;
    clearList();
}
void Sayi::printValuesToTheScreen() {
    for(Basamak* itr=head; itr != NULL; itr=itr->next) {
        cout << itr->veri;
    }
}
string Sayi::excludeData() {
    string notImportantCharacterArray;
    for(Basamak* itr=head; itr != NULL; itr=itr->next) {
        notImportantCharacterArray += itr->veri;
    }
    return notImportantCharacterArray;
}
void Sayi::printValuesFarFormToTheScreen() {
    Basamak* itr = head;
    while (itr != NULL) {
        const void* address = static_cast<const void*>(itr);
        stringstream ss;
        ss << address;
        string name = ss.str();
        cout << "     #";
        cout << name.substr(5, 3) << "#";
        itr = itr->next;
    }
    cout << endl;
}
string Sayi::setValuesUntilFinish() {
    string tryValue;
    for(Basamak* itr=head; itr != NULL; itr=itr->next) {
        tryValue += itr->veri;
    }
    return tryValue;
}
void Sayi::evenNumberToFirstPlace() {
    Basamak *current, *currentControl2 = NULL, *prevCurrent2 = NULL;
    int i;

    if((head->veri - '0')%2 == 0) {
        current = head;
        i = 0;
    }
    else {
        current = head->next;
        i = 1;
    }   

    for(; current != NULL; i++) {
        int currentData = current->veri - '0';
        if(currentData%2 != 0) {
            currentControl2 = current;
            prevCurrent2 = FindPrevByPosition(i);
            prevCurrent2->next = prevCurrent2->next->next;
            currentControl2->next = head;
            head = current;
            for(int k = 0; k < i+1; k++) {
                current = current->next;
            }
        }
        else { current = current->next; }
    }
}
void Sayi::makeVersVersaTheTextDocument() {
    Basamak* current = head;
    Basamak *prev = NULL, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void Sayi::addNumberToLastPoint(char veri) {
    insert(listLenght, veri);
}
void Sayi::addNumberToFirstPoint(char veri) {
    insert(0, veri);
}
void Sayi::insert(int position, char value) {
    if(position == 0) head = new Basamak(value,head);
    else if(position == listLenght) {
        Basamak *prev = FindPrevByPosition(position);
        prev->next = new Basamak(value, NULL);
    }
    else {
        Basamak *prev = FindPrevByPosition(position);
        prev->next = new Basamak(value, prev->next);
    }
    listLenght++;
}
void Sayi::clearList() {
    Basamak* current = head;
    while (current != NULL) {
        Basamak* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
int Sayi::listLenghtFonc() {
    return listLenght;
}
void Sayi::deleteInsertNumber(int position) {
    if(position == 0) {
        Basamak *node = head;
        head = head->next;
        delete node;
    }
    else {
        Basamak *node = FindPrevByPosition(position);
        Basamak *nodeToDelete = node->next;
        node->next = node->next->next;
        delete nodeToDelete;
    }
    listLenght--;
}
Basamak* Sayi::FindPrevByPosition(int position) {
    if(position < 0 || position > listLenght) {
        throw "Index Out Of Range";
    }
    int index = 1;
    for(Basamak* itr=head; itr != NULL; itr=itr->next, index++) {
        if(position == index) {
            return itr;
        }
    }
    return NULL;
}
Basamak* Sayi::FindPrevByPositionWithoutRange(int position) {
    int index = 1;
    for(Basamak* itr=head; itr != NULL; itr=itr->next, index++) {
        if(position == index) {
            return itr;
        }
    }
    return NULL;
}