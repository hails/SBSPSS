/*=========================================================================

	pause.h

	Author:		PKG
	Created:
	Project:	Spongebob
	Purpose:

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

#ifndef	__GAME_PAUSE_H__
#define	__GAME_PAUSE_H__

/*----------------------------------------------------------------------
	Includes
	-------- */

/*	Std Lib
	------- */

/*----------------------------------------------------------------------
	Tyepdefs && Defines
	------------------- */

/*----------------------------------------------------------------------
	Structure defintions
	-------------------- */

class CPauseMenu
{
public:
	void			init();
	void			shutdown();

	void			select();
	void			think(int _frames);
	void			render();

	int				isActive();


private:
	int				m_active;

};


/*----------------------------------------------------------------------
	Globals
	------- */

/*----------------------------------------------------------------------
	Functions
	--------- */

/*---------------------------------------------------------------------- */

#endif	/* __GAME_CONVO_H__ */

/*===========================================================================
 end */
