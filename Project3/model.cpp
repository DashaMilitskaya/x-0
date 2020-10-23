#include "model.h"

/*enum CellType { X, O, EMPTY };
enum WinType {X_WIN, O_WIN, DPAW, NONE};

class Board {
	unsigned int size;
	unsigned int xodov;
	CellType** field;
public:
	Board(unsigned int _size = 3);
	unsigned int GetSize();
	bool MakeMove(unsigned int x, unsigned int y, CellType CellValue);
	CellType GetCell(unsigned int x, unsigned int y);
	WinType IsWin(CellType player, unsigned int x, unsigned int y);
	~Board();

};*/

Board::Board(unsigned int _size){
	xodov = 0;
	size = _size;
	field = new CellType * [size];
	
	for (unsigned int i = 0; i < size; i++) {
		field[i] = new CellType[size];

		for (unsigned int j = 0; j < size; j++) {
			field[i][j] = EMPTY;
		}
	}
}

unsigned int Board::GetSize(){   
	//std::cin >> size;
	return size;
}

bool Board::MakeMove(unsigned int x, unsigned int y, CellType CellValue){
	if ((x < 0) || (x > size - 1) || (y < 0) || (y > size - 1)) {
	   return false;
	}
	if (field[x][y] == EMPTY) {
		field[x][y] = CellValue;
		xodov++;
		return true;
	}
	else {
		return false;
	}
}

CellType Board::GetCell(unsigned int x, unsigned int y){
  return(field[x][y]);
}

WinType Board::IsWin(CellType Player, unsigned int x, unsigned int y){
	unsigned int k = 0;
	unsigned int k_stolb = 0;
	for (unsigned int i = 0; i < size; i++) {
		if ((field[x][i]) == Player) {
			k++;
		}
		if ((field[i][y]) == Player) {
			k_stolb++;
		}
	}
	if (((k==size)||(k_stolb==size))&&(Player== X)) return X_WIN;
	if (((k == size) || (k_stolb == size)) && (Player == O)) return O_WIN;
	
	k = 0;
	if (x == y) {
		for (unsigned int i = 0; i < size; i++) {
			if ((field[i][i]) == Player) {
				k++;
			}
		}
	}
	if ((k == size) && (Player == X)) return X_WIN;
	if ((k == size) && (Player == O)) return O_WIN;

	k = 0;
	if (y == size-x-1) {
		for (unsigned int i = 0; i < size; i++) {
			if ((field[i][size-i-1]) == Player) {
				k++;
			}
		}
	}
	if ((k == size) && (Player == X)) return X_WIN;
	if ((k == size) && (Player == O)) return O_WIN;
	if (xodov >= size * size) return DPAW;
	return NONE;
}

Board::~Board(){
	for (unsigned int i = 0; i < size; i++) {
		delete[]field[i];
	}
	delete[]field;
}


