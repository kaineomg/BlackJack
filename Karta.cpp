#include "Karta.h"

int Karta::getValue()
{
    if (znachenie >= 2 && znachenie <= 10) {
        return znachenie;
    }
    if (znachenie >= 11 && znachenie <= 13) {
        return 10;
    }
    if (znachenie >= 14) {
        return 11;
    }
    else
        return -100;
}

int Karta::getMast()
{
    return this->mast;
}

int Karta::getZnach()
{
    return this->znachenie;
}



string  Karta::showCard()
{
    string s = " ";
    switch (this->znachenie)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        s = to_string(this->znachenie);
        break;
    case 11:
        s = "Valet";
        break;
    case 12:
        s = "Queen";
        break;
    case 13:
        s = "King";
        break;
    case 14:
        s = "Tuz";

        break;
    }
        s += " ";
        switch (this->mast)
            
        {
        case 0:
            s += "Chervy";
            break;
        case 1:
            s += "Bubi";
            break;
        case 2:
            s += "Piki";
            break;
        case 3: 
            s += "Tref";
            break;
            
            
    
        }
        return s;
    }

       
