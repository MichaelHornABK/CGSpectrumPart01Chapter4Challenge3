#include <iostream>
#include "Enemy.h"
#include "Player.h"

int main()
{

    /*Character character;
    Player player;
    Enemy enemy;

    character.Draw();
    player.Draw();
    enemy.Draw();
    */

    constexpr int numberOfCharacter = 20;
    constexpr int numberOfPlayers = 2;
    constexpr int numberOfEnemies = numberOfCharacter - numberOfPlayers;

    Character* pCharacterArray[numberOfCharacter];

    //Create Players
    for (int i = 0; i < numberOfPlayers; i++)
    {
        pCharacterArray[i] = new Player();
    }

    for (int i = 0; i < numberOfEnemies; i++)
    {
        pCharacterArray[i + numberOfPlayers] = new Enemy();
    }

    for (int i = 0; i < numberOfCharacter; i++)
    {
        pCharacterArray[i]->Draw();
    }

    for (int i = 0; i < numberOfCharacter; i++)
    {
        delete pCharacterArray[i];
        pCharacterArray[i] = nullptr;
    }
};