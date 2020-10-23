#include "MyForm.h"
#include <Windows.h>
#include "model.h"
//#include "view.h"
using namespace Project3;

using namespace System::Windows::Forms;

int  main(HINSTANCE, HINSTANCE, LPSTR, int) {
	
	Application::EnableVisualStyles();


	Application::SetCompatibleTextRenderingDefault(false);
	MyForm^ myForm = gcnew MyForm();
	Application::Run(myForm);
	//Board board(size);

	//BoardView boardView(&board);
}