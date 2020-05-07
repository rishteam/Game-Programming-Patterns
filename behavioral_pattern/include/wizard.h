#pragma once

class Wizards{

public:

    Wizards();
    void setHealth(int wizard, int amount);
    void setWisdom(int wizard, int amount);
    void setAgility(int wizard, int amount);
    int getHealth(int wizard);
    int getWisdom(int wizard);
    int getAgility(int wizard);

    void showData(int wizard);

private:
    static const int WIZARD_SIZE = 16;
    int m_health[WIZARD_SIZE];
    int m_wisdom[WIZARD_SIZE];
    int m_agility[WIZARD_SIZE];

};