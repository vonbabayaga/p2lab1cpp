#pragma once
#include <bits/stdc++.h> 
#include <iostream> 
#include <SFML/Graphics.hpp>
#include "Character.hpp"

class Stormtrooper : public Character
{
private:
    /* data */
public:
    void moveRandom(int **gameBoardLogic);

public:
    Stormtrooper(const char* name,int x,int y);
    Stormtrooper(/* args */);
    ~Stormtrooper();
};