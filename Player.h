#include <string>
#include "Point.h"
using namespace std;
#ifndef Player_H
#define Player_H

class Player
{
private:
    string name;
    static int PlayerSum;
    Point point;
public:
    Player();
    Player(string, int ,Point);//�W�r,�`��
    string getName();
    int getPlayerSum();
    string toString();
};

#endif