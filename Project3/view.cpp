
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#include "view.h"
using namespace Project3;







BoardView::BoardView(Board* _board)
{
	board = _board;
}

/*

void BoardView::show(MyForm^ myForm)
{
	
	unsigned int size = board->GetSize();
	for (unsigned int i = 0; i < size; i++) {
		for (unsigned int j = 0; j < size; j++) {
			//gotoxy(i+1+i, j+1);
			if (board->GetCell(i, j) == X) {
				//std::cout << "X";
				
				myForm->Controls->Add(Label)
				
			}
			else {
				if (board->GetCell(i, j) == O) {
					//std::cout << "0";
				}
				else {
					//std::cout << "-";
				}
			}
		}
	}
}
*/

WinType BoardView::StartGame(MyForm^ myForm)
{
	WinType winner = NONE;
	unsigned int size = board->GetSize();
	TableLayoutPanel^ table = gcnew TableLayoutPanel();
	table->ColumnCount = size;
	//table->AutoSize = true;
	unsigned int x, y;
	while (true) {
		
		

		 do{

          // std::cout << "Player X move \n";

		  // std::cin >> x;
		   

		   //std::cin >> y;
		   
		   } while (!(board->MakeMove(x, y, X)));

		
		 winner = board->IsWin(X, x, y);
		 if (winner != NONE) break;



		 //gotoxy(1, size + 10);

		do {
			 
		     //std::cout << "Player 0 move";

			// std::cin >> x;
			

			 //std::cin >> y;
			 
		 } while (!(board->MakeMove(x, y, O)));

		 ////show();
		 //winner = board->IsWin(O, x, y);
		// if (winner != NONE) break;



	}

	return winner;
}

