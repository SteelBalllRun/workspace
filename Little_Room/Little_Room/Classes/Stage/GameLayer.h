//
//  GameLayer.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#ifndef __Little_Room__GameLayer__
#define __Little_Room__GameLayer__

#include <iostream>
#include "cocos2d.h"
class GameLayer:cocos2d::CCLayer
{
public:
    GameLayer* create();
    bool init();
//todo make 45˚地图
    bool loadMap();
};
#endif /* defined(__Little_Room__GameLayer__) */
