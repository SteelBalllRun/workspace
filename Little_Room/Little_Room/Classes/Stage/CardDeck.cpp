//
//  CardDeck.cpp
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#include "CardDeck.h"
CardDeck* CardDeck::create()
{
    CardDeck* deck_holder=new CardDeck();
    if (deck_holder&&deck_holder->init()) {
        return deck_holder;
    }
    CC_SAFE_DELETE(deck_holder);
    return NULL;
}
bool CardDeck::init()
{
    //data make
    event_card_deck = CCArray::create();
    omen_card_deck = CCArray::create();
    item_card_deck= CCArray::create();
    event_card_deck= 0;
    omen_card_deck=0;
    item_card_deck=0;
    
    //todo: load cardDetailFrom plist or database
    return true;
}

bool CardDeck::refreshCardType(CardType withCardType)
{
    bool handel= false;
    if (withCardType==ITEM_CARD_TYPE) {
        //todo refresh item card deck
        
    }
    
    if (withCardType==OMEN_CARD_TYPE) {
        //todo refresh omen card deck
    }
    
    if (withCardType==EVENT_CARD_TYPE) {
        //todo refresh event card deck
        
    }
    return handel;
}


#pragma mark GETCARD_METHODS
CardModel* CardDeck::getNextEventCard()
{
    int _index= event_card_index;
    if (_index>event_card_deck->count()) {
        CCLOG("evnet used up");
        
        //todo send notification for cardUseUp
        return NULL;
    }
    event_card_index+=1;
    return dynamic_cast<CardModel*>(event_card_deck->objectAtIndex(_index));
}
CardModel* CardDeck::getNextItemCard()
{
    int _index= item_card_index;
    if (_index>item_card_deck->count()) {
        CCLOG("item used up");
        
        //todo send notification for cardUsedUp
        return NULL;
    }
    item_card_index+=1;
    return dynamic_cast<CardModel*>(item_card_deck->objectAtIndex(_index));
}
CardModel* CardDeck::getNextOmenCard()
{
    int _index= omen_card_index;
    if (_index>omen_card_deck->count()) {
        CCLOG("omen used up");
        
        //todo send notification for cardUsedUp
        return NULL;
    }
    omen_card_index+=1;
    return dynamic_cast<CardModel*>(omen_card_deck->objectAtIndex(_index));
}