//
// C00204076
// Brandon Seah-Demspey
// Started at 10:33 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#include "Entity.h"
//
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
//
#include "AISystem.h"
#include "RenderSystem.h"
#include "ControlSystem.h"

int main(void*)
{
	/*
	Entity player;

	HealthComponent hc; PositionComponent pc;
	
	player.addComponent(hc); player.addComponent(pc);
	
	HealthSystem hs; PositionSystem ps;
	
	hs.addEntity(player); ps.addEntity(player);
	
	while (true) 
	{
		hs.update(); ps.update();
	}
	*/

	Entity *m_player, *m_alien, *m_dog, *m_cat;
	//
	HealthComponent m_hc = HealthComponent(100);
	PositionComponent m_pc;
	ControlComponent m_cc;

	//
	m_player->addComponent(m_hc);
	m_player->addComponent(m_pc);
	m_player->addComponent(m_cc);
	//
	m_alien->addComponent(m_hc);
	m_alien->addComponent(m_pc);
	//
	m_dog->addComponent(m_hc);
	m_dog->addComponent(m_pc);
	//
	m_cat->addComponent(m_pc);

	//
	AISystem m_as;
	RenderSystem m_rs;
	ControlSystem m_cs;
	
	//
	m_as.addEntity(m_alien);
	m_as.addEntity(m_dog);
	m_as.addEntity(m_cat);
	//
	m_rs.addEntity(m_player);
	m_rs.addEntity(m_alien);
	m_rs.addEntity(m_dog);
	m_rs.addEntity(m_cat);
	//
	m_cs.addEntity(m_player);

	//
	while (true)
	{
		//
		m_as.update();
		m_rs.update();
		m_cs.update();
	}

	return 0;
};