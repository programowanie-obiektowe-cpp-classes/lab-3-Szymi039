#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int ilosc = 0;
    int ilosc_zagle = 0;

    while(ilosc<towar) {
    if (towar==0){
        break;
    }
        Stocznia stocznia{};
        Statek* s1 = stocznia();
        int sledzie = s1->transportuj();
        ilosc = sledzie + ilosc;

        Zaglowiec* wsk_na_zaglowiec = dynamic_cast<Zaglowiec*>(s1);
        if (wsk_na_zaglowiec != nullptr) {
            ilosc_zagle = ilosc_zagle + 1;
        }
        delete s1;
    }

    return ilosc_zagle;
}


