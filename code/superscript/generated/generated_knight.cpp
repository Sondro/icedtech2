// This file been auto generated by the superbuild pipeline and the QuakeToC tool.
// Please do NOT modify this file. Instead please open the .qc files, and make changes there.
// This auto generated file is released under the GPL license, please see code_license.txt
// 

#define GENERATED_SUPERSCRIPT 1
#include "../../game/g_local.h "
#include "../superscript.h"
extern "C" {
	#include "generated_knight.h"

#include "save_func.h"
};

void knight_stand1(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand1, stand1, &frame, knight_stand2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_stand,stand1,stand9);
}
void knight_stand2(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand2, stand2, &frame, knight_stand3};
	self->monsterinfo.currentmove = &move;
}
void knight_stand3(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand3, stand3, &frame, knight_stand4};
	self->monsterinfo.currentmove = &move;
}
void knight_stand4(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand4, stand4, &frame, knight_stand5};
	self->monsterinfo.currentmove = &move;
}
void knight_stand5(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand5, stand5, &frame, knight_stand6};
	self->monsterinfo.currentmove = &move;
}
void knight_stand6(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand6, stand6, &frame, knight_stand7};
	self->monsterinfo.currentmove = &move;
}
void knight_stand7(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand7, stand7, &frame, knight_stand8};
	self->monsterinfo.currentmove = &move;
}
void knight_stand8(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand8, stand8, &frame, knight_stand9};
	self->monsterinfo.currentmove = &move;
}
void knight_stand9(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { stand9, stand9, &frame, knight_stand1};
	self->monsterinfo.currentmove = &move;
}
void knight_walk1(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk1, walk1, &frame, knight_walk2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_walk,walk1,walk14);

if (random() < 0.2)
	sound (self, CHAN_VOICE, "knight/idle.wav", 1,  ATTN_IDLE);
}
void knight_walk2(gentity_t *self) {
	static mframe_t frame = { ai_walk,2, NULL };
	static mmove_t move = { walk2, walk2, &frame, knight_walk3};
	self->monsterinfo.currentmove = &move;
}
void knight_walk3(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk3, walk3, &frame, knight_walk4};
	self->monsterinfo.currentmove = &move;
}
void knight_walk4(gentity_t *self) {
	static mframe_t frame = { ai_walk,4, NULL };
	static mmove_t move = { walk4, walk4, &frame, knight_walk5};
	self->monsterinfo.currentmove = &move;
}
void knight_walk5(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk5, walk5, &frame, knight_walk6};
	self->monsterinfo.currentmove = &move;
}
void knight_walk6(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk6, walk6, &frame, knight_walk7};
	self->monsterinfo.currentmove = &move;
}
void knight_walk7(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk7, walk7, &frame, knight_walk8};
	self->monsterinfo.currentmove = &move;
}
void knight_walk8(gentity_t *self) {
	static mframe_t frame = { ai_walk,4, NULL };
	static mmove_t move = { walk8, walk8, &frame, knight_walk9};
	self->monsterinfo.currentmove = &move;
}
void knight_walk9(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk9, walk9, &frame, knight_walk10};
	self->monsterinfo.currentmove = &move;
}
void knight_walk10(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk10, walk10, &frame, knight_walk11};
	self->monsterinfo.currentmove = &move;
}
void knight_walk11(gentity_t *self) {
	static mframe_t frame = { ai_walk,2, NULL };
	static mmove_t move = { walk11, walk11, &frame, knight_walk12};
	self->monsterinfo.currentmove = &move;
}
void knight_walk12(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk12, walk12, &frame, knight_walk13};
	self->monsterinfo.currentmove = &move;
}
void knight_walk13(gentity_t *self) {
	static mframe_t frame = { ai_walk,4, NULL };
	static mmove_t move = { walk13, walk13, &frame, knight_walk14};
	self->monsterinfo.currentmove = &move;
}
void knight_walk14(gentity_t *self) {
	static mframe_t frame = { ai_walk,3, NULL };
	static mmove_t move = { walk14, walk14, &frame, knight_walk1};
	self->monsterinfo.currentmove = &move;
}
void knight_run1(gentity_t *self) {
	static mframe_t frame = { ai_run,16, NULL };
	static mmove_t move = { runb1, runb1, &frame, knight_run2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_runb,runb1,runb8);

if (random() < 0.2)
	sound (self, CHAN_VOICE, "knight/idle.wav", 1,  ATTN_IDLE);
}
void knight_run2(gentity_t *self) {
	static mframe_t frame = { ai_run,20, NULL };
	static mmove_t move = { runb2, runb2, &frame, knight_run3};
	self->monsterinfo.currentmove = &move;
}
void knight_run3(gentity_t *self) {
	static mframe_t frame = { ai_run,13, NULL };
	static mmove_t move = { runb3, runb3, &frame, knight_run4};
	self->monsterinfo.currentmove = &move;
}
void knight_run4(gentity_t *self) {
	static mframe_t frame = { ai_run,7, NULL };
	static mmove_t move = { runb4, runb4, &frame, knight_run5};
	self->monsterinfo.currentmove = &move;
}
void knight_run5(gentity_t *self) {
	static mframe_t frame = { ai_run,16, NULL };
	static mmove_t move = { runb5, runb5, &frame, knight_run6};
	self->monsterinfo.currentmove = &move;
}
void knight_run6(gentity_t *self) {
	static mframe_t frame = { ai_run,20, NULL };
	static mmove_t move = { runb6, runb6, &frame, knight_run7};
	self->monsterinfo.currentmove = &move;
}
void knight_run7(gentity_t *self) {
	static mframe_t frame = { ai_run,14, NULL };
	static mmove_t move = { runb7, runb7, &frame, knight_run8};
	self->monsterinfo.currentmove = &move;
}
void knight_run8(gentity_t *self) {
	static mframe_t frame = { ai_run,6, NULL };
	static mmove_t move = { runb8, runb8, &frame, knight_run1};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk1(gentity_t *self) {
	static mframe_t frame = { ai_charge,20, NULL };
	static mmove_t move = { runattack1, runattack1, &frame, knight_runatk2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_runattack,runattack1,runattack5);

if (random() > 0.5)
	sound (self, CHAN_WEAPON, "knight/sword2.wav", 1, ATTN_NORM);
else
	sound (self, CHAN_WEAPON, "knight/sword1.wav", 1, ATTN_NORM);

}
void knight_runatk2(gentity_t *self) {
	static mframe_t frame = { ai_charge_side,0, NULL };
	static mmove_t move = { runattack2, runattack2, &frame, knight_runatk3};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk3(gentity_t *self) {
	static mframe_t frame = { ai_charge_side,0, NULL };
	static mmove_t move = { runattack3, runattack3, &frame, knight_runatk4};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk4(gentity_t *self) {
	static mframe_t frame = { ai_charge_side,0, NULL };
	static mmove_t move = { runattack4, runattack4, &frame, knight_runatk5};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk5(gentity_t *self) {
	static mframe_t frame = { ai_melee_side,0, NULL };
	static mmove_t move = { runattack5, runattack5, &frame, knight_runatk6};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk6(gentity_t *self) {
	static mframe_t frame = { ai_melee_side,0, NULL };
	static mmove_t move = { runattack6, runattack6, &frame, knight_runatk7};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_runattack,runattack6,runattack10);
}
void knight_runatk7(gentity_t *self) {
	static mframe_t frame = { ai_melee_side,0, NULL };
	static mmove_t move = { runattack7, runattack7, &frame, knight_runatk8};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk8(gentity_t *self) {
	static mframe_t frame = { ai_melee_side,0, NULL };
	static mmove_t move = { runattack8, runattack8, &frame, knight_runatk9};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk9(gentity_t *self) {
	static mframe_t frame = { ai_melee_side,0, NULL };
	static mmove_t move = { runattack9, runattack9, &frame, knight_runatk10};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk10(gentity_t *self) {
	static mframe_t frame = { ai_charge_side,0, NULL };
	static mmove_t move = { runattack10, runattack10, &frame, knight_runatk11};
	self->monsterinfo.currentmove = &move;
}
void knight_runatk11(gentity_t *self) {
	static mframe_t frame = { ai_charge,10, NULL };
	static mmove_t move = { runattack11, runattack11, &frame, knight_run1};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_runattack,runattack11,runattack11);
}
void knight_atk1(gentity_t *self) {
	static mframe_t frame = { ai_charge,0, NULL };
	static mmove_t move = { attackb1, attackb1, &frame, knight_atk2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_attackb,attackb1,attackb10);

sound (self, CHAN_WEAPON, "knight/sword1.wav", 1, ATTN_NORM);
}
void knight_atk2(gentity_t *self) {
	static mframe_t frame = { ai_charge,7, NULL };
	static mmove_t move = { attackb2, attackb2, &frame, knight_atk3};
	self->monsterinfo.currentmove = &move;
}
void knight_atk3(gentity_t *self) {
	static mframe_t frame = { ai_charge,4, NULL };
	static mmove_t move = { attackb3, attackb3, &frame, knight_atk4};
	self->monsterinfo.currentmove = &move;
}
void knight_atk4(gentity_t *self) {
	static mframe_t frame = { ai_charge,0, NULL };
	static mmove_t move = { attackb4, attackb4, &frame, knight_atk5};
	self->monsterinfo.currentmove = &move;
}
void knight_atk5(gentity_t *self) {
	static mframe_t frame = { ai_charge,3, NULL };
	static mmove_t move = { attackb5, attackb5, &frame, knight_atk6};
	self->monsterinfo.currentmove = &move;
}
void knight_atk6(gentity_t *self) {
	static mframe_t frame = { ai_melee,0, NULL };
	static mmove_t move = { attackb6, attackb6, &frame, knight_atk7};
	self->monsterinfo.currentmove = &move;
 }
void knight_atk7(gentity_t *self) {
	static mframe_t frame = { ai_melee,0, NULL };
	static mmove_t move = { attackb7, attackb7, &frame, knight_atk8};
	self->monsterinfo.currentmove = &move;
 }
void knight_atk8(gentity_t *self) {
	static mframe_t frame = { ai_melee,0, NULL };
	static mmove_t move = { attackb8, attackb8, &frame, knight_atk9};
	self->monsterinfo.currentmove = &move;

}
void knight_atk9(gentity_t *self) {
	static mframe_t frame = { ai_charge,1, NULL };
	static mmove_t move = { attackb9, attackb9, &frame, knight_atk10};
	self->monsterinfo.currentmove = &move;
}
void knight_atk10(gentity_t *self) {
	static mframe_t frame = { ai_charge,5, NULL };
	static mmove_t move = { attackb10, attackb10, &frame, knight_run1};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_pain1(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { pain1, pain1, &frame, knight_pain2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_pain,pain1,pain3);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_pain2(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { pain2, pain2, &frame, knight_pain3};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_pain3(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { pain3, pain3, &frame, knight_run1};
	self->monsterinfo.currentmove = &move;
}
void knight_painb1(gentity_t *self) {
	static mframe_t frame = { ai_painforward,0, NULL };
	static mmove_t move = { painb1, painb1, &frame, knight_painb2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_painb,painb1,painb11);
}
void knight_painb2(gentity_t *self) {
	static mframe_t frame = { ai_painforward,3, NULL };
	static mmove_t move = { painb2, painb2, &frame, knight_painb3};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_painb3(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { painb3, painb3, &frame, knight_painb4};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_painb4(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { painb4, painb4, &frame, knight_painb5};
	self->monsterinfo.currentmove = &move;
}
void knight_painb5(gentity_t *self) {
	static mframe_t frame = { ai_painforward,2, NULL };
	static mmove_t move = { painb5, painb5, &frame, knight_painb6};
	self->monsterinfo.currentmove = &move;
}
void knight_painb6(gentity_t *self) {
	static mframe_t frame = { ai_painforward,4, NULL };
	static mmove_t move = { painb6, painb6, &frame, knight_painb7};
	self->monsterinfo.currentmove = &move;
}
void knight_painb7(gentity_t *self) {
	static mframe_t frame = { ai_painforward,2, NULL };
	static mmove_t move = { painb7, painb7, &frame, knight_painb8};
	self->monsterinfo.currentmove = &move;
}
void knight_painb8(gentity_t *self) {
	static mframe_t frame = { ai_painforward,5, NULL };
	static mmove_t move = { painb8, painb8, &frame, knight_painb9};
	self->monsterinfo.currentmove = &move;
}
void knight_painb9(gentity_t *self) {
	static mframe_t frame = { ai_painforward,5, NULL };
	static mmove_t move = { painb9, painb9, &frame, knight_painb10};
	self->monsterinfo.currentmove = &move;
}
void knight_painb10(gentity_t *self) {
	static mframe_t frame = { ai_painforward,0, NULL };
	static mmove_t move = { painb10, painb10, &frame, knight_painb11};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_painb11(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { painb11, painb11, &frame, knight_run1};
	self->monsterinfo.currentmove = &move;
}
void knight_pain(gentity_t *self) {

	 float r;

	if (self->pain_finished > level.time)
		return;

	r = random();
	
	sound (self, CHAN_VOICE, "knight/khurt.wav", 1, ATTN_NORM);
	if (r < 0.85)
	{
		knight_pain1(self);
		self->pain_finished = level.time + 1;
	}
	else
	{
		knight_painb1(self);
		self->pain_finished = level.time + 1;
	}
	
}
void knight_bow1(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel1, kneel1, &frame, knight_bow2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_kneel,kneel1,kneel5);
}
void knight_bow2(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel2, kneel2, &frame, knight_bow3};
	self->monsterinfo.currentmove = &move;
}
void knight_bow3(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel3, kneel3, &frame, knight_bow4};
	self->monsterinfo.currentmove = &move;
}
void knight_bow4(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel4, kneel4, &frame, knight_bow5};
	self->monsterinfo.currentmove = &move;
}
void knight_bow5(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel5, kneel5, &frame, knight_bow5};
	self->monsterinfo.currentmove = &move;
}
void knight_bow6(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel4, kneel4, &frame, knight_bow7};
	self->monsterinfo.currentmove = &move;
}
void knight_bow7(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel3, kneel3, &frame, knight_bow8};
	self->monsterinfo.currentmove = &move;
}
void knight_bow8(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel2, kneel2, &frame, knight_bow9};
	self->monsterinfo.currentmove = &move;
}
void knight_bow9(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { kneel1, kneel1, &frame, knight_bow10};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_kneel,kneel1,kneel5);
}
void knight_bow10(gentity_t *self) {
	static mframe_t frame = { ai_turn,0, NULL };
	static mmove_t move = { walk1, walk1, &frame, knight_walk1};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_walk,walk1,walk14);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die1(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death1, death1, &frame, knight_die2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_death,death1,death10);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die2(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death2, death2, &frame, knight_die3};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die3(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death3, death3, &frame, knight_die4};
	self->monsterinfo.currentmove = &move;
	self->r.contents = 0;
	engine->SV_LinkEntity(self);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die4(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death4, death4, &frame, knight_die5};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die5(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death5, death5, &frame, knight_die6};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die6(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death6, death6, &frame, knight_die7};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die7(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death7, death7, &frame, knight_die8};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die8(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death8, death8, &frame, knight_die9};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die9(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death9, death9, &frame, knight_die10};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_die10(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { death10, death10, &frame, knight_die10};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb1(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb1, deathb1, &frame, knight_dieb2};
	self->monsterinfo.currentmove = &move;
// Anim Start function
G_SendAnimUpdate(self, anim_event_deathb,deathb1,deathb11);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb2(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb2, deathb2, &frame, knight_dieb3};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb3(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb3, deathb3, &frame, knight_dieb4};
	self->monsterinfo.currentmove = &move;
	self->r.contents = 0;
	engine->SV_LinkEntity(self);
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb4(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb4, deathb4, &frame, knight_dieb5};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb5(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb5, deathb5, &frame, knight_dieb6};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb6(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb6, deathb6, &frame, knight_dieb7};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb7(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb7, deathb7, &frame, knight_dieb8};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb8(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb8, deathb8, &frame, knight_dieb9};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb9(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb9, deathb9, &frame, knight_dieb10};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb10(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb10, deathb10, &frame, knight_dieb11};
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void knight_dieb11(gentity_t *self) {
	static mframe_t frame = { ai_stand,0, NULL };
	static mmove_t move = { deathb11, deathb11, &frame, knight_dieb11};
	self->monsterinfo.currentmove = &move;
}
void knight_die(gentity_t *self) {


	if (self->health < -40)
	{
		sound (self, CHAN_VOICE, "player/udeath.wav", 1, ATTN_NORM);
		SpawnGib(self);
		self->isGibbed = qtrue;
		return;
	}


	sound (self, CHAN_VOICE, "knight/kdeath.wav", 1, ATTN_NORM);
	if (random() < 0.5)
		knight_die1(self);
	else
		knight_dieb1(self);
}
void knight_attack(gentity_t *self) {

	 float		len;
	

	len = VectorLength(self->enemy->r.currentOrigin - self->r.currentOrigin);
	
	if (len<80)
		knight_atk1(self);
	else
		knight_runatk1(self);
}
void monster_knight_precache(gentity_t *self) {

	precache_model ("models/monsters/knight.md3");
	precache_model ("progs/h_knight.mdl");

	precache_sound ("knight/kdeath.wav");
	precache_sound ("knight/khurt.wav");
	precache_sound ("knight/ksight.wav");
	precache_sound ("knight/sword1.wav");
	precache_sound ("knight/sword2.wav");
	precache_sound ("knight/idle.wav");
}
void monster_knight(gentity_t *self) {

	monster_knight_precache(self);

		self->r.contents = CONTENTS_SOLID;
	engine->SV_LinkEntity(self);

	self->movetype = MOVETYPE_STEP;

	setmodel (self, "models/monsters/knight.md3");

	setsize (self, idVec3_t(-16, -16, -24), idVec3_t(16, 16, 40));
	self->health = 75;

	self->monsterinfo.stand = knight_stand1;
	self->monsterinfo.walk = knight_walk1;
	self->monsterinfo.run = knight_run1;
	self->monsterinfo.melee = knight_attack;
	self->monsterinfo.pain = knight_pain;
	self->monsterinfo.die = knight_die;
	
	walkmonster_start(self);
}
