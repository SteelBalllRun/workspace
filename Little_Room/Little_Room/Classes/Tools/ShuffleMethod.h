//
//  ShuffleMethod.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#ifndef __Little_Room__ShuffleMethod__
#define __Little_Room__ShuffleMethod__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;
class ShuffleMethod:public cocos2d::CCObject
{
public:
    static void ShuffleCards(CCArray *& card_deck);
};
#endif /* defined(__Little_Room__ShuffleMethod__) */
