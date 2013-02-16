//
//  UserInterfaceLayer.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#ifndef __Little_Room__UserInterfaceLayer__
#define __Little_Room__UserInterfaceLayer__

#include <iostream>
#include "cocos2d.h"
#include "PlayerModel.h"

using namespace cocos2d;
class UserInterfaceLayer:cocos2d::CCLayer
{
    PlayerModel* player ;
public:
    UserInterfaceLayer();
    ~UserInterfaceLayer();
    static UserInterfaceLayer* create();
    bool init();
 
    /*
     根据playerModel对象来初始化游戏的操作界面
     比如： 
     一开始玩家的界面都是一样的，
     进入作祟阶段之后，奸徒的操作界面和生存者的操作界面会不一样
     */
    
    bool setViewWithPlayerType(PlayerModel*);
    void setUserItemBox();                  //设置物品界面
    void setUserOmenBox();                  //设置预兆卡片界面
    void setPlayerStatus();                 //设置玩家状态界面
    void setPlayerOtherBox();               //设置玩家其他信息界面（主要是当了奸徒以后
    
#pragma makr -methods for touch dispatcher
    virtual void registerWithTouchDispatcher(void);
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchesBegan(CCSet* touches,CCEvent* pEvent);
    virtual void ccTouchesMove(CCSet* touches, CCEvent* pEvent);
};
#endif /* defined(__Little_Room__UserInterfaceLayer__) */
