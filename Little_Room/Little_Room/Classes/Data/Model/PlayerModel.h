//
//  PlayerModel.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#ifndef Little_Room_PlayerModel_h
#define Little_Room_PlayerModel_h

typedef enum
{
    PLAYER_TYPE=0,
    TRAITOR_TYPE,
    SURVIVER_TYPE
}RoleType;

class PlayerModel:cocos2d::CCObject
{
    //basic data
    int strength;
    int sprit;
    int speed;
    int knowledge;
    
    RoleType player_role;
    
    int action_point;    //行动点
    bool lock_status;       //是否可以行动
public:
    void changeStrength(int point);             //力量属性变化
    void chageSprit(int point);                 //神智属性变化
    void chageSpeed(int point);                 //速度属性变化
    void chageKnowledge(int point);             //知识属性变化
    
    inline bool getIsLocked(){return lock_status;}
    /*
     消耗一点行动点，并且返回当前行动点数
     */
    inline int costActionPtn(){
        if (action_point!=0) {
         return --action_point;
        }
        return 0;
    }
    /*
     回复行动
     */
    inline void recoverActionPtn(){
        lock_status = true;             //不可行动，进入下一回合
        action_point= speed;            //行动点数恢复到当前速度值
    };                                          //行动力回复
    
};

#endif
