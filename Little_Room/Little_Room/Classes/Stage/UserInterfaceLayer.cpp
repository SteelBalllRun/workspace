//
//  UserInterfaceLayer.cpp
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#include "UserInterfaceLayer.h"
UserInterfaceLayer::UserInterfaceLayer()
{
    
}
UserInterfaceLayer::~UserInterfaceLayer()
{
    
}
bool UserInterfaceLayer::init()
{
    //todo create and setdata for layer ;
    return true;
}

UserInterfaceLayer* UserInterfaceLayer::create()
{
    UserInterfaceLayer* layer= new UserInterfaceLayer();
    if (layer&& layer->init()) {
        return layer;
    }
    CC_SAFE_DELETE(layer);
    return NULL;
}

/*
 methods to make views
 */

bool UserInterfaceLayer::setViewWithPlayerType(PlayerModel *player)
{
    
    this->player= player;
    //1. 设置views
    this->setUserItemBox();
    this->setUserOmenBox();
    this->setPlayerStatus();
    this->setPlayerOtherBox();
    //2. 设置是否可以操作
    if (this->player->getIsLocked()) {
        //todo set user-inter_action_enable;
        
    }
    //3. 设置玩家类型设置具体操作界面
    return true;
}