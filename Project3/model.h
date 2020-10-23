#ifndef MODEL_H
#define MODEL_H

enum CellType { X, O, EMPTY };
enum WinType { X_WIN, O_WIN, DPAW, NONE };

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

};

#endif
