#ifndef VIEW_H
#define VIEW_H

#include "model.h"
#include "MyForm.h"


class BoardView {
	Board* board;
	//void show(MyForm^ myForm);

  public:

	  WinType StartGame(MyForm^ myForm);

	  BoardView(Board* board);
};


#endif
