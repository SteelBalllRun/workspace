//
//  GameController.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-14.
//
//

#ifndef __Little_Room__GameController__
#define __Little_Room__GameController__

#include <iostream>
#include "cocos2d.h"
#include "GameLayer.h"
#include "UserInterfaceLayer.h"

#include "BlockModel.h"
class GameController:cocos2d::CCNode
{
    GameLayer* m_gameLayer;
    UserInterfaceLayer* m_userLayer;
    
    int omen_amt;
    
public:
    bool mapDidLoad();      //返回地图资源载入结束
    bool ruleDidLoad(int rule_id);
    bool gameReady();
    BlockModel* getNextBlock();         //取得下一块地图
    
#pragma mark changeStatus callback Methods
    void goOnNewBlock();            //翻开场地的回调方法
};
#endif /* defined(__Little_Room__GameController__) */
