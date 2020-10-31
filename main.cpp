#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Engine {

    int nrHp;
    int nrCylinders;
    string engineCompany;

public:
    void startEngine() {
        printf("The engine just started!");
    }

    void stopEngine() {
        printf("The engine just stopped!");
    }

    Engine(int nrHp, int nrCylinders, string engineCompany) {

        this->nrHp = nrHp;
        this->nrCylinders = nrCylinders;
        this->engineCompany = engineCompany;

    }

    virtual ~Engine() {

        printf("Engine distroid");

    }

};

class F1car {

    string engine; // o sa fie mostenire cu motor

public:

    void moveForward() {

        printf("The car is moving forward!");
    }

    void moveBackward() {

        printf("The car is moving backward!");
    }

    void steerLeft() {
        printf("The car is steering left!");
    }

    void steerRight() {
        printf("The car is steering right!");
    }


};

class Pilot {

    string name;
    string team;
    string nationality;
    int age;
    int salary;

    int numberCar;
    int nrVictories;
    int nrPodiums;
    int nrRaces;
    int points;
    int nrChampionshipsWon;

public:

    Pilot operator=(Pilot const &pilot) {


        salary = pilot.salary;

        return *this;
    }

    Pilot() {

        printf("Pilot null created\n");

    }


    Pilot(const string name, string team, string nationality, int age, int salary,
          int numberCar, int nrVictories, int nrPodiums, int nrRaces, int points, int nrChampionshipsWon) {

        this->name = name;
        this->team = team;
        this->nationality = nationality;
        this->age = age;
        this->salary = salary;
        this->numberCar = numberCar;
        this->nrVictories = nrVictories;
        this->nrPodiums = nrPodiums;
        this->nrRaces = nrRaces;
        this->points = points;
        this->nrChampionshipsWon = nrChampionshipsWon;

    }

    Pilot(const Pilot &pilot) {

        name = pilot.name;
        team = pilot.team;
        nationality = pilot.nationality;
        age = pilot.age;
        salary = pilot.salary;
        numberCar = pilot.numberCar;
        nrVictories = pilot.nrVictories;
        nrPodiums = pilot.nrPodiums;
        nrRaces = pilot.nrRaces;
        points = pilot.points;
        nrChampionshipsWon = pilot.nrChampionshipsWon;

    }


    int finishRace(int position) {

        switch (position) {
            case 1:
                points += 25;
                nrPodiums++;
                nrVictories++;
                break;
            case 2:
                points += 18;
                nrPodiums++;
                break;
            case 3:
                points += 15;
                nrPodiums++;
                break;
            case 4:
                points += 12;
                break;
            case 5:
                points += 10;
                break;
            case 6:
                points += 8;
                break;
            case 7:
                points += 6;
                break;
            case 8:
                points += 4;
                break;
            case 9:
                points += 2;
                break;
            case 10:
                points += 1;
                break;
        }
        nrRaces++;
    }

    void winTheChampionship() {

        cout << name << " has won the 2020 F1 Championship!!!" << endl;
        nrChampionshipsWon++;

    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    int getSalary() {
        return salary;
    }


};

class Team { // o sa fie mostenire cu pilot

    string name;
    string manager;
    string pilotPrimary;
    string pilotSecondary;
    string color;
    vector<std::string> sponsors;
    int points;
    int nrVictories;


};

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