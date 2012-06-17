/*
 * GPlayer.cpp
 *
 *  Created on: 17.06.2012
 *      Author: javamain
 */


#include "GPlayer.h"



Player::Player() {
}

PlayerManager::PlayerManager() {
}

Player PlayerManager::CreateNewPlayer() {
	return Player();
}

Skill::Skill() {
}

SkillManager::SkillManager() {
}

SkillValue SkillManager::GetSkill(SkillName skill_name) {
	SkillValue a;
	return a;
}

None SkillManager::SetSkill(SkillName skill_name,SkillValue skill_valie) {
}

PlayerListManager::PlayerListManager() {
}

PlayerManager PlayerListManager::GetPlayerManager() {
	return PlayerManager();
}






