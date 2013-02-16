//
//  ThrowDices.cpp
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#include "ThrowDices.h"
static ThrowDice* instance=NULL;
ThrowDice* ThrowDice::getInstance()
{
    if (!instance) {
        instance= new ThrowDice();
    }
    return instance;
}

int ThrowDice::doThorwDice(int dice_amt)
{
    return doThrowDiceWithDiceType(2, dice_amt);
}

int ThrowDice::doThrowDiceWithDiceType(int dice_type, int dice_amt)
{
    int result=0;
    if (dice_type==0) {
        dice_type=1;
    }
    for (int amt=0; amt<dice_amt; ++amt) {
        //这里得到的是从0到dice_type的随机数作为骰子的结果
        int random_result= arc4random()%dice_type;
        result +=random_result;
    }
    return result;
}