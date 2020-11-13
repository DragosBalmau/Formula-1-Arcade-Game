#include <iostream>
#include "../Headers/Pilot.h"
#include "../Headers/Team.h"
#include "../Teams/Headers/AlfaRomeoRacing.h"
#include "../Teams/Headers/AlphaTauri.h"
#include "../Teams/Headers/Haas.h"
#include "../Teams/Headers/McLaren.h"
#include "../Teams/Headers/MercedesAMG.h"
#include "../Teams/Headers/RacingPoint.h"
#include "../Teams/Headers/RedBullRacing.h"
#include "../Teams/Headers/Renault.h"
#include "../Teams/Headers/ScuderiaFerrari.h"
#include "../Teams/Headers/Williams.h"


int main() {


    Engine renaultEngine(907,"Renault");
    Engine ferrariEngine(934, "Ferrari");
    Engine mercedesEngine(949,"Mercedes");
    Engine hondaEngine(881, "Honda");

    //Mercedes
    Pilot HAM("Lewis Hamilton", "United Kingdom", 44);
    Pilot BOT("Valtteri Bottas", "Finland", 77);

    //Ferrari
    Pilot VET("Sebastian Vettel", "Germany", 5);
    Pilot LEC("Charles Leclerc", "Monaco", 16);

    //Renault
    Pilot RIC("Daniel Ricciardo", "Australia", 3);
    Pilot OCO("Esteban Ocon", "France", 31);

    //RedBull
    Pilot VER("Max Verstappen", "Netherlands", 33);
    Pilot ALB("Alexander Albon", "Thailand", 23);

    //McLaren
    Pilot SAI("Carlos Sainz", "Spain", 55);
    Pilot NOR("Lando Norris", "United Kingdom", 4);

    //Racing Point
    Pilot STR("Lance Stroll", "Canada", 18);
    Pilot PER("Sergio Perez", "Mexico", 11);

    //AlphaTauri
    Pilot GAS("Pierre Gasly", "France", 10);
    Pilot KVY("Daniil Kvyat", "Russia", 26);

    //Alfa Romeo Racing
    Pilot GIO("Antonio Giovinazzi", "Italy", 99);
    Pilot RAI("Kimi Raikkonen", "Finland", 7);

    //Haas
    Pilot MAG("Kevin Magnussen", "France", 20);
    Pilot GRO("Romain Grojean", "Denmark", 8);

    //Williams
    Pilot RUS("George Russel", "United Kingdom", 63);
    Pilot LAT("Nicholas Latifi", "Canada", 6);

    AlfaRomeoRacing alfaRomeoRacing();
    AlphaTauri alphaTauri();
    Haas hass();
    McLaren mcLaren();
    MercedesAMG mercedes("Mercedes", "black", HAM, BOT, mercedesEngine);
    RacingPoint racingPoint();
    RedBullRacing redBullRacing();
    Renault renault();
    ScuderiaFerrari scuderiaFerrari();
    Williams williams();


}