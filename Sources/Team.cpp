#include "../Headers/Team.h"
#include <string>

Team::Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot)
        : name(name), color(color), primaryPilot(primaryPilot), secondaryPilot(secondaryPilot) {}
