#include "GiftBoxes.h"

bool GiftBoxesPlayer::OnBeforeOpenItem(Player* player, Item* item)
{
    auto itemTemplate = item->GetTemplate();
    uint32 itemId = itemTemplate->ItemId;

    switch (itemId)
    {
    case 34077:
        ChatHandler(player->GetSession()).SendSysMessage("OnBeforeOpenItem::FAIL");
        player->SendEquipError(EQUIP_ERR_CANT_DO_RIGHT_NOW, item, nullptr);
        return false;

    case 41426:
        ChatHandler(player->GetSession()).SendSysMessage("OnBeforeOpenItem::SUCCESS");
        return true;
    }

    return true;
}

void AddSCGiftBoxesScripts()
{
    if(sConfigMgr->GetOption<bool>("GiftBoxes.Enable", false))
        new GiftBoxesPlayer();
}
