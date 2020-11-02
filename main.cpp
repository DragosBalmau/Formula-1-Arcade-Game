#include <iostream>
#include <vector>
#include <string>
#include "Pilot.h"
#include "Team.h"
#include "F1car.h"
#include "Engine.h"

using namespace std;

void increaseSalary(Pilot *pilot) {

    pilot->setSalary(pilot->getSalary() * 1.20);

}

void display(Pilot pilot) {

    cout << pilot.getSalary() << endl;

}


int main() {

    Pilot ham("Lewis Hamilton", "Mercedes", "british", 35, 2000000, 44, 92, 120, 200, 300, 6);

    increaseSalary(&ham);

    display(ham);

    Pilot bot("Valteri Bottas", "Mercedes", "british", 25, 100000, 77, 6, 20, 20, 334, 0);

    bot = ham;

    display(bot);


}