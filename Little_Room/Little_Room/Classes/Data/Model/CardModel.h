//
//  CardModel.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#ifndef __Little_Room__CardModel__
#define __Little_Room__CardModel__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

typedef enum
{
    ITEM_CARD_TYPE,
    OMEN_CARD_TYPE,
    EVENT_CARD_TYPE
}CardType;

class CardModel:public cocos2d::CCObject
{
    CardType m_type;
public:
    int card_id;
    int card_type;                      // 1.能力鉴定卡 2.物品使用卡 3.场地变化卡
    CCString* card_otherInfo;           // record card other info;
    CCString* card_description;         // description about this card;
};
#endif /* defined(__Little_Room__CardModel__) */
