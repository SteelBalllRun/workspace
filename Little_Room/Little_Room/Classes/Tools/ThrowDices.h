//
//  ThrowDices.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#ifndef __Little_Room__ThrowDices__
#define __Little_Room__ThrowDices__

#include <iostream>
#include "cocos2d.h"
using namespace std;
using namespace cocos2d;
class ThrowDice:public cocos2d::CCObject
{
public:
    static ThrowDice* getInstance();
    static int doThorwDice(int dice_amt);         //抛dice_amt个骰子并返回结果
    static int doThrowDiceWithDiceType(int dice_type,int dice_amt);//抛某种骰子，返回结果
    
};
#endif /* defined(__Little_Room__ThrowDices__) */
