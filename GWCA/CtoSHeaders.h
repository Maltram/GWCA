#pragma once

const unsigned int CtoGS_MSGAcknowledgeTrade = 0x0;
const unsigned int CtoGS_MSGCancelTrade = 0x1;
const unsigned int CtoGS_MSGAddItemTrade = 0x2;
const unsigned int CtoGS_MSGRemoveItemTrade = 0x5;
const unsigned int CtoGS_MSGChangeOffer = 0x6;
const unsigned int CtoGS_MSGAcceptTrade = 0x7;
const unsigned int CtoGS_MSGSetAttributes = 0x10;
const unsigned int CtoGS_MSGAbandonQuest = 0x12;
const unsigned int CtoGS_MSGActivateQuest = 0x13;
const unsigned int CtoGS_MSGRequestQuest = 0x16;
const unsigned int CtoGS_MSGSetHeroAggression = 0x17;
const unsigned int CtoGS_MSGLockHeroTarget = 0x18;
const unsigned int CtoGS_MSGChangeHeroSkillSlotState = 0x1C;
const unsigned int CtoGS_MSGCommandHero = 0x1E;
const unsigned int CtoGS_MSGCommandAll = 0x1F;
const unsigned int CtoGS_MSGAddHero = 0x22;
const unsigned int CtoGS_MSGKickHero = 0x23;
const unsigned int CtoGS_MSGCallTarget = 0x27;
const unsigned int CtoGS_MSGCallSkill = 0x28;
const unsigned int CtoGS_MSGAttack = 0x2A;
const unsigned int CtoGS_MSGCancelAction = 0x2C;
const unsigned int CtoGS_MSGDropBuff = 0x2D;
const unsigned int CtoGS_MSGDrawMap = 0x2F;
const unsigned int CtoGS_MSGDropItem = 0x30;
const unsigned int CtoGS_MSGDropGold = 0x33;
const unsigned int CtoGS_MSGEquipItem = 0x34;
const unsigned int CtoGS_MSGSwapWeapon = 0x36;
const unsigned int CtoGS_MSGGoPlayer = 0x37;
const unsigned int CtoGS_MSGDonateFaction = 0x39;
const unsigned int CtoGS_MSGSubmitOffer = 0x3;
const unsigned int CtoGS_MSGGoNPC = 0x3D;
const unsigned int CtoGS_MSGDialog = 0x3F;
const unsigned int CtoGS_MSGMouseMove = 0x42;
const unsigned int CtoGS_MSGPickUpItem = 0x43;
const unsigned int CtoGS_MSGChangeSecondary = 0x45;
const unsigned int CtoGS_MSGUseSkill = 0x4A;
const unsigned int CtoGS_MSGStartTrade = 0x4D;
const unsigned int CtoGS_MSGTransactTrade = 0x4E;
const unsigned int CtoGS_MSGRequestQuote = 0x50;
const unsigned int CtoGS_MSGTransactItem = 0x51;
const unsigned int CtoGS_MSGGoGadget = 0x55;
const unsigned int CtoGS_MSGOpenChest = 0x57;
const unsigned int CtoGS_MSGSetDisplayedTitle = 0x5B;
const unsigned int CtoGS_MSGRemoveDisplayedTitle = 0x5C;
const unsigned int CtoGS_MSGSetSkillbarSkill = 0x5F;
const unsigned int CtoGS_MSGLoadSkillbar = 0x60;
const unsigned int CtoGS_MSGSkipCinematic = 0x66;
const unsigned int CtoGS_MSGSendChat = 0x67;
const unsigned int CtoGS_MSGDeleteItem = 0x6C;
const unsigned int CtoGS_MSGIdentifyItem = 0x6F;
const unsigned int CtoGS_MSGUnlockSkillByTome = 0x70;
const unsigned int CtoGS_MSGMoveItem = 0x75;
const unsigned int CtoGS_MSGAcceptAllItems = 0x76;
const unsigned int CtoGS_MSGSplitStack = 0x78;
const unsigned int CtoGS_MSGStartSalvage = 0x7A;
const unsigned int CtoGS_MSGSalvageMaterials = 0x7D;
const unsigned int CtoGS_MSGSalvageMod = 0x7E;
const unsigned int CtoGS_MSGChangeGold = 0x7F;
const unsigned int CtoGS_MSGUseItem = 0x81;
const unsigned int CtoGS_MSGDisconnect = 0x8;
const unsigned int CtoGS_MSGRequestSpawn = 0x8B;
const unsigned int CtoGS_MSGRequestAgents = 0x94;
const unsigned int CtoGS_MSGRequestItems = 0x95;
const unsigned int CtoGS_MSGSwitchMode = 0x9F;
const unsigned int CtoGS_MSGDenyPartyRequest = 0xA0;
const unsigned int CtoGS_MSGAcceptPartyRequest = 0xA2;
const unsigned int CtoGS_MSGAddNpc = 0xA3;
const unsigned int CtoGS_MSGInvitePlayer = 0xA4;
const unsigned int CtoGS_MSGInvitePlayerByName = 0xA5;
const unsigned int CtoGS_MSGLeaveParty = 0xA6;
const unsigned int CtoGS_MSGEnterChallenge = 0xA9;
const unsigned int CtoGS_MSGReturnToOutpost = 0xAB;
const unsigned int CtoGS_MSGKickNpc = 0xAC;
const unsigned int CtoGS_MSGKickPlayer = 0xAD;
const unsigned int CtoGS_MSGTick = 0xB3;
const unsigned int CtoGS_MSGTravelGH = 0xB4;
const unsigned int CtoGS_MSGTravelTo = 0xB5;
const unsigned int CtoGS_MSGLeaveGH = 0xB6;