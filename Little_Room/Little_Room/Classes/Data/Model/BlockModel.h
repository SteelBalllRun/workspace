//
//  BlockModel.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#ifndef __Little_Room__BlockModel__
#define __Little_Room__BlockModel__

#include <iostream>
#include "cocos2d.h"
typedef enum
{
    DIRECTION_0,
    DIRECTION_45,
    DIRECTION_90,
    DIRECTION_135,
    DIRECTION_180
}BlockDirection;


class Position
{
    int location_x;
    int location_y;
public:
    static Position* setLocation(int x, int y);
    Position(int x=0,int y=0){location_x=x;location_y=y;}
    Position operator =(Position _pos){return Position(_pos.location_x,_pos.location_y);}
};

Position* Position::setLocation(int x, int y)
{
    Position* _pos= new Position();
    _pos->location_x=x;
    _pos->location_y=y;
    return _pos;
}
class BlockModel:cocos2d::CCObject
{
    int block_id;
    bool covered;
    Position* _pos;
    BlockDirection block_direction;
public:
    inline bool getIsCovered(){return covered;}
};
#endif /* defined(__Little_Room__BlockModel__) */
