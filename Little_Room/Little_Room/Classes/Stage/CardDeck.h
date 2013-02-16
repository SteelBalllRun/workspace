//
//  CardDeck.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#ifndef __Little_Room__CardDeck__
#define __Little_Room__CardDeck__

#include <iostream>
#include "cocos2d.h"
#include "CardModel.h"
using namespace cocos2d;
class CardDeck:public cocos2d::CCObject
{
private:
    int event_card_index;
    int omen_card_index;
    int item_card_index;
    CCArray* event_card_deck;
    CCArray* omen_card_deck;
    CCArray* item_card_deck;
public:
    static CardDeck* create();
    bool init();
    bool refreshCardType(CardType withCardType);
    
    CardModel* getNextOmenCard();
    CardModel* getNextItemCard();
    CardModel* getNextEventCard();
    
    
};
#endif /* defined(__Little_Room__CardDeck__) */
