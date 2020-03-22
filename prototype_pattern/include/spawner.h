#pragma once
#include "monster.h"

class Spawner
{
public:
    virtual ~Spawner() = default;
    virtual Monster* spawnMonster() = 0;
};

template<typename T>
class SpawnFor : public Spawner
{
public:
    SpawnFor(T *prototype)
    {
        m_prototype = prototype;
    }
    virtual Monster* spawnMonster() override
    {
        return m_prototype->clone();
    }
private:
    T *m_prototype;
};
