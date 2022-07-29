#ifndef MODULE_GIFT_BOXES
#define MODULE_GIFT_BOXES

#include "ScriptMgr.h"
#include "Player.h"
#include "Chat.h"
#include "Config.h"

class GiftBoxesPlayer : public PlayerScript
{
public:
    GiftBoxesPlayer() : PlayerScript("GiftBoxesPlayer") { }

    bool OnBeforeOpenItem(Player* player, Item* item) override;
};

#endif
