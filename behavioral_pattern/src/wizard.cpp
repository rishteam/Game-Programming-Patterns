#include "wizard.h"
#include "iostream"

Wizards::Wizards(){
    for(int i = 0 ; i < WIZARD_SIZE ; i++ ){
        m_health[i] = 45;
        m_wisdom[i] = 11;
        m_agility[i] = 7;
    }
}

void Wizards::setHealth(int wizard, int amount){
    m_health[wizard] = amount;    
}

void Wizards::setWisdom(int wizard, int amount){
    m_wisdom[wizard] = amount;
}

void Wizards::setAgility(int wizard, int amount){
    m_agility[wizard] = amount;
}

int Wizards::getHealth(int wizard){
    return m_health[wizard];
}

int Wizards::getWisdom(int wizard){
    return m_wisdom[wizard];
}

int Wizards::getAgility(int wizard){
    return m_agility[wizard];
}

void Wizards::showData(int wizard){
    printf("ID: %2d\n",wizard);
    printf("Health:  %2d\n", m_health[wizard]);
    printf("Wisdom:  %2d\n", m_wisdom[wizard]);
    printf("Agility: %2d\n", m_agility[wizard]);
}