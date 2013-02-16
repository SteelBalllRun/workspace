//
//  ShuffleMethod.cpp
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#include "ShuffleMethod.h"
#include "CardModel.h"

void ShuffleMethod::ShuffleCards(cocos2d::CCArray *&card_deck)
{
    //todo change card order
    int card_amt= card_deck->count();
    CCArray* tmp_arr=CCArray::create();
    for (int i=0; i<card_amt; ++i) {
        //todo shuffel objects in array
        CardModel* _card= (CardModel*)card_deck->objectAtIndex(i);
        int random_index=arc4random()%card_amt;
        tmp_arr->addObject(_card);
    }
}