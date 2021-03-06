#include <iostream>
#include <memory>
#include <vector>
#include "../Headers/Pilot.h"
#include "../Headers/Team.h"
#include "../Teams/Headers/AlfaRomeoRacing.h"
#include "../Teams/Headers/AlphaTauri.h"
#include "../Teams/Headers/Haas.h"
#include "../Teams/Headers/McLaren.h"
#include "../Teams/Headers/MercedesAMG.h"
#include "../Teams/Headers/RacingPoint.h"
#include "../Teams/Headers/Williams.h"
#include "../Game.h"


Game *Game::instance = nullptr;

int main() {


    Engine renaultEngine(907, "Renault");
    Engine ferrariEngine(934, "Ferrari");
    Engine mercedesEngine(949, "Mercedes");
    Engine hondaEngine(881, "Honda");

    renaultEngine.startEngine();
    ferrariEngine.startEngine();
    mercedesEngine.startEngine();
    hondaEngine.startEngine();

    printf("Engines are done!\n");

    std::vector<Pilot> pilots;

    //Mercedes
    Pilot HAM("Lewis Hamilton", "United Kingdom", 44);
    pilots.push_back(HAM);
    Pilot BOT("Valtteri Bottas", "Finland", 77);
    pilots.push_back(BOT);

    //Ferrari
    Pilot VET("Sebastian Vettel", "Germany", 5);
    pilots.push_back(VET);
    Pilot LEC("Charles Leclerc", "Monaco", 16);
    pilots.push_back(LEC);

    //Renault
    Pilot RIC("Daniel Ricciardo", "Australia", 3);
    pilots.push_back(RIC);
    Pilot OCO("Esteban Ocon", "France", 31);
    pilots.push_back(OCO);

    //RedBull
    Pilot VER("Max Verstappen", "Netherlands", 33);
    pilots.push_back(VER);
    Pilot ALB("Alexander Albon", "Thailand", 23);
    pilots.push_back(ALB);

    //McLaren
    Pilot SAI("Carlos Sainz", "Spain", 55);
    pilots.push_back(SAI);
    Pilot NOR("Lando Norris", "United Kingdom", 4);
    pilots.push_back(NOR);

    //Racing Point
    Pilot STR("Lance Stroll", "Canada", 18);
    pilots.push_back(HAM);
    Pilot PER("Sergio Perez", "Mexico", 11);
    pilots.push_back(HAM);

    //AlphaTauri
    Pilot GAS("Pierre Gasly", "France", 10);
    pilots.push_back(GAS);
    Pilot KVY("Daniil Kvyat", "Russia", 26);
    pilots.push_back(KVY);

    //Alfa Romeo Racing
    Pilot GIO("Antonio Giovinazzi", "Italy", 99);
    pilots.push_back(GIO);
    Pilot RAI("Kimi Raikkonen", "Finland", 7);
    pilots.push_back(RAI);

    //Haas
    Pilot MAG("Kevin Magnussen", "France", 20);
    pilots.push_back(MAG);
    Pilot GRO("Romain Grojean", "Denmark", 8);
    pilots.push_back(GRO);

    //Williams
    Pilot RUS("George Russel", "United Kingdom", 63);
    pilots.push_back(RUS);
    Pilot LAT("Nicholas Latifi", "Canada", 6);


    try {
        if (pilots.size() != 20) {
            int e = pilots.size();
            throw e;
        }
    }
    catch (int e) {
        std::cout << "There are " << e << " pilots right now. The number of pilots should be 20!";
    }

    HAM.finishRace(1);
    BOT.finishRace(2);
    VET.finishRace(3);
    LEC.finishRace(4);
    RIC.finishRace(5);
    OCO.finishRace(6);
    VER.finishRace(7);
    ALB.finishRace(8);
    SAI.finishRace(9);
    NOR.finishRace(10);
    STR.finishRace(11);
    PER.finishRace(12);
    GAS.finishRace(13);
    KVY.finishRace(14);
    GIO.finishRace(15);
    RAI.finishRace(16);
    MAG.finishRace(17);
    GRO.finishRace(18);
    RUS.finishRace(19);
    LAT.finishRace(20);

    HAM.winTheChampionship();

    std::unique_ptr<AlfaRomeoRacing> alfaRomeoRacing = std::make_unique<AlfaRomeoRacing>("AlfaRomeoRacing", "white and red", RAI, GIO, mercedesEngine);
    std::unique_ptr<Haas> haas = std::make_unique<Haas>("Haas", "black and white", GRO, MAG, ferrariEngine);
    std::unique_ptr<AlphaTauri> alphaTauri = std::make_unique<AlphaTauri>("AlphaTauri", "white and dark blue", GAS, KVY, hondaEngine);
    std::unique_ptr<McLaren> mcLaren = std::make_unique<McLaren>("McLaren", "papaya orange", SAI, NOR, renaultEngine);
    std::unique_ptr<MercedesAMG> mercedes = std::make_unique<MercedesAMG>("Mercedes", "black", HAM, BOT, mercedesEngine);
    std::unique_ptr<RacingPoint> racingPoint = std::make_unique<RacingPoint>("RacingPoint", "pink", PER, STR, mercedesEngine);
    std::unique_ptr<RedBullRacing> redBullRacing = std::make_unique<RedBullRacing>("RedBullRacing", "dark blue", VER, ALB, hondaEngine);
    std::unique_ptr<Renault> renault = std::make_unique<Renault>("Renault", "black and yellow", RIC, OCO, renaultEngine);
    std::unique_ptr<ScuderiaFerrari> scuderiaFerrari = std::make_unique<ScuderiaFerrari>("ScuderiaFerrari", "red", VET, LAT, ferrariEngine);
    std::unique_ptr<Williams> williams = std::make_unique<Williams>("Williams", "white", RUS, LAT, mercedesEngine);

    std::vector<std::unique_ptr<Team>> teams;

    teams.push_back(std::move(alphaTauri));
    teams.push_back(std::move(alfaRomeoRacing));
    teams.push_back(std::move(haas));
    teams.push_back(std::move(mcLaren));
    teams.push_back(std::move(mercedes));
    teams.push_back(std::move(scuderiaFerrari));
    teams.push_back(std::move(redBullRacing));
    teams.push_back(std::move(racingPoint));
    teams.push_back(std::move(renault));
    teams.push_back(std::move(williams));


    for (const auto &t:teams)
        t->getPosition();


    Game *game = Game::getInstance();
    game->init();


}