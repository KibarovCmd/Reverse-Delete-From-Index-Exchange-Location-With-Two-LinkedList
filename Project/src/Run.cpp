/*
* File: Run.cpp
* Description: Main kismi.
* Course: Birinci öğretim A grubu
* Assignment: 1
* Date: 11.10.2023(Month.Day.Year)
* Author: İskender Musaoğlu iskender.musaoglu@ogr.sakarya.edu.tr
*/
#include "SayilarListesi.hpp"

using namespace std;

int main() {
    system("color a");
    SayilarListesi sayi;
    sayi.readTxtDocumentAndAddValuesLinkedList();
    while(true) {
        sayi.printValuesToTheScreen();
        cout << "1) Reverse The List" << endl << "2) Put Odd Numbers First In The List" <<
        endl << "3) Delete The Biggest Number In The Linked List" << endl << "4) Quit" << endl;
        string number;
        cout << "Choose Process: "; cin >> number;
        if(number == "1") {
            sayi.makeVersVersaTheTextDocument();
        }
        else if(number == "2") {
            sayi.evenNumberToFirstPlace();
        }
        else if(number == "3") {
            sayi.deleteTheBiggestDataStructer();
        }
        else if (number == "4") {
            break;
        }
        else {
            cout << "Not Found Process" << endl;
        }
    }
    
}