#pragma once
#include "model.h"


unsigned int size = 3;
//unsigned int x, y;
CellType nowPlay = X;
bool HaveMove = false;
Board* board = new Board(size);
WinType winner = NONE;

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ p06;

	private: System::Windows::Forms::PictureBox^ p05;

	private: System::Windows::Forms::PictureBox^ p04;

	private: System::Windows::Forms::PictureBox^ p03;

	private: System::Windows::Forms::PictureBox^ p02;

	private: System::Windows::Forms::PictureBox^ p01;
	private: System::Windows::Forms::PictureBox^ p16;
	private: System::Windows::Forms::PictureBox^ p26;



	private: System::Windows::Forms::PictureBox^ p00;
	private: System::Windows::Forms::PictureBox^ p15;




	private: System::Windows::Forms::PictureBox^ p14;

	private: System::Windows::Forms::PictureBox^ p13;

	private: System::Windows::Forms::PictureBox^ p12;

	private: System::Windows::Forms::PictureBox^ p11;




	private: System::Windows::Forms::PictureBox^ p10;
	private: System::Windows::Forms::PictureBox^ p25;


	private: System::Windows::Forms::PictureBox^ p24;

	private: System::Windows::Forms::PictureBox^ p23;

	private: System::Windows::Forms::PictureBox^ p22;

	private: System::Windows::Forms::PictureBox^ p21;

	private: System::Windows::Forms::PictureBox^ p20;
	private: System::Windows::Forms::PictureBox^ p36;


	private: System::Windows::Forms::PictureBox^ p35;

	private: System::Windows::Forms::PictureBox^ p34;

	private: System::Windows::Forms::PictureBox^ p33;


	private: System::Windows::Forms::PictureBox^ p32;

	private: System::Windows::Forms::PictureBox^ p31;

	private: System::Windows::Forms::PictureBox^ p30;
	private: System::Windows::Forms::PictureBox^ p46;


	private: System::Windows::Forms::PictureBox^ p45;

	private: System::Windows::Forms::PictureBox^ p44;

	private: System::Windows::Forms::PictureBox^ p43;

	private: System::Windows::Forms::PictureBox^ p42;

	private: System::Windows::Forms::PictureBox^ p40;
private: System::Windows::Forms::PictureBox^ p56;


private: System::Windows::Forms::PictureBox^ p55;

private: System::Windows::Forms::PictureBox^ p54;

private: System::Windows::Forms::PictureBox^ p53;

private: System::Windows::Forms::PictureBox^ p52;

private: System::Windows::Forms::PictureBox^ p51;

private: System::Windows::Forms::PictureBox^ p50;
private: System::Windows::Forms::PictureBox^ p66;


private: System::Windows::Forms::PictureBox^ p65;

private: System::Windows::Forms::PictureBox^ p64;

private: System::Windows::Forms::PictureBox^ p63;



private: System::Windows::Forms::PictureBox^ p62;

private: System::Windows::Forms::PictureBox^ p61;

private: System::Windows::Forms::PictureBox^ p60;

private: System::Windows::Forms::PictureBox^ p41;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ restart;
private: System::Windows::Forms::PictureBox^ pictureBox1;







	protected:

	protected:

	protected:

	private:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->p06 = (gcnew System::Windows::Forms::PictureBox());
			this->p05 = (gcnew System::Windows::Forms::PictureBox());
			this->p04 = (gcnew System::Windows::Forms::PictureBox());
			this->p03 = (gcnew System::Windows::Forms::PictureBox());
			this->p02 = (gcnew System::Windows::Forms::PictureBox());
			this->p01 = (gcnew System::Windows::Forms::PictureBox());
			this->p16 = (gcnew System::Windows::Forms::PictureBox());
			this->p26 = (gcnew System::Windows::Forms::PictureBox());
			this->p00 = (gcnew System::Windows::Forms::PictureBox());
			this->p15 = (gcnew System::Windows::Forms::PictureBox());
			this->p14 = (gcnew System::Windows::Forms::PictureBox());
			this->p13 = (gcnew System::Windows::Forms::PictureBox());
			this->p12 = (gcnew System::Windows::Forms::PictureBox());
			this->p11 = (gcnew System::Windows::Forms::PictureBox());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->p25 = (gcnew System::Windows::Forms::PictureBox());
			this->p24 = (gcnew System::Windows::Forms::PictureBox());
			this->p23 = (gcnew System::Windows::Forms::PictureBox());
			this->p22 = (gcnew System::Windows::Forms::PictureBox());
			this->p21 = (gcnew System::Windows::Forms::PictureBox());
			this->p20 = (gcnew System::Windows::Forms::PictureBox());
			this->p36 = (gcnew System::Windows::Forms::PictureBox());
			this->p35 = (gcnew System::Windows::Forms::PictureBox());
			this->p34 = (gcnew System::Windows::Forms::PictureBox());
			this->p33 = (gcnew System::Windows::Forms::PictureBox());
			this->p32 = (gcnew System::Windows::Forms::PictureBox());
			this->p31 = (gcnew System::Windows::Forms::PictureBox());
			this->p30 = (gcnew System::Windows::Forms::PictureBox());
			this->p46 = (gcnew System::Windows::Forms::PictureBox());
			this->p45 = (gcnew System::Windows::Forms::PictureBox());
			this->p44 = (gcnew System::Windows::Forms::PictureBox());
			this->p43 = (gcnew System::Windows::Forms::PictureBox());
			this->p42 = (gcnew System::Windows::Forms::PictureBox());
			this->p40 = (gcnew System::Windows::Forms::PictureBox());
			this->p56 = (gcnew System::Windows::Forms::PictureBox());
			this->p55 = (gcnew System::Windows::Forms::PictureBox());
			this->p54 = (gcnew System::Windows::Forms::PictureBox());
			this->p53 = (gcnew System::Windows::Forms::PictureBox());
			this->p52 = (gcnew System::Windows::Forms::PictureBox());
			this->p51 = (gcnew System::Windows::Forms::PictureBox());
			this->p50 = (gcnew System::Windows::Forms::PictureBox());
			this->p66 = (gcnew System::Windows::Forms::PictureBox());
			this->p65 = (gcnew System::Windows::Forms::PictureBox());
			this->p64 = (gcnew System::Windows::Forms::PictureBox());
			this->p63 = (gcnew System::Windows::Forms::PictureBox());
			this->p62 = (gcnew System::Windows::Forms::PictureBox());
			this->p61 = (gcnew System::Windows::Forms::PictureBox());
			this->p60 = (gcnew System::Windows::Forms::PictureBox());
			this->p41 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->restart);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(675, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(250, 186);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"КОЛИЧЕСТВО              ПОЛЕЙ";
			// 
			// restart
			// 
			this->restart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->restart->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->restart->Location = System::Drawing::Point(6, 141);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(238, 39);
			this->restart->TabIndex = 5;
			this->restart->Text = L"RESTART";
			this->restart->UseVisualStyleBackColor = true;
			this->restart->Click += gcnew System::EventHandler(this, &MyForm::restart_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton5.BackgroundImage")));
			this->radioButton5->Location = System::Drawing::Point(16, 114);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(34, 21);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"7";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton4.BackgroundImage")));
			this->radioButton4->Location = System::Drawing::Point(16, 91);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(35, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"6";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton3.BackgroundImage")));
			this->radioButton3->Location = System::Drawing::Point(16, 67);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(35, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"5";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->Location = System::Drawing::Point(16, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(35, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"4";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->Location = System::Drawing::Point(16, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"3";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->Controls->Add(this->p06, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->p05, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->p04, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->p03, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->p02, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->p01, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->p16, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->p26, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->p00, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->p15, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->p14, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->p13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->p12, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->p11, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->p10, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->p25, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->p24, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->p23, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->p22, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->p21, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->p20, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->p36, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->p35, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->p34, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->p33, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->p32, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->p31, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->p30, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->p46, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->p45, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->p44, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->p43, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->p42, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->p40, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->p56, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->p55, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->p54, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->p53, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->p52, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->p51, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->p50, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->p66, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->p65, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->p64, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->p63, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->p62, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->p61, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->p60, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->p41, 5, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->MaximumSize = System::Drawing::Size(1000, 1000);
			this->tableLayoutPanel1->MinimumSize = System::Drawing::Size(100, 100);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(634, 584);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// p06
			// 
			this->p06->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p06->Location = System::Drawing::Point(547, 3);
			this->p06->Name = L"p06";
			this->p06->Size = System::Drawing::Size(84, 77);
			this->p06->TabIndex = 0;
			this->p06->TabStop = false;
			this->p06->Click += gcnew System::EventHandler(this, &MyForm::p06_Click);
			// 
			// p05
			// 
			this->p05->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p05->Location = System::Drawing::Point(457, 3);
			this->p05->Name = L"p05";
			this->p05->Size = System::Drawing::Size(84, 77);
			this->p05->TabIndex = 1;
			this->p05->TabStop = false;
			this->p05->Click += gcnew System::EventHandler(this, &MyForm::p05_Click);
			// 
			// p04
			// 
			this->p04->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p04->Location = System::Drawing::Point(367, 3);
			this->p04->Name = L"p04";
			this->p04->Size = System::Drawing::Size(84, 77);
			this->p04->TabIndex = 2;
			this->p04->TabStop = false;
			this->p04->Click += gcnew System::EventHandler(this, &MyForm::p04_Click);
			// 
			// p03
			// 
			this->p03->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p03->Location = System::Drawing::Point(277, 3);
			this->p03->Name = L"p03";
			this->p03->Size = System::Drawing::Size(84, 77);
			this->p03->TabIndex = 3;
			this->p03->TabStop = false;
			this->p03->Click += gcnew System::EventHandler(this, &MyForm::p03_Click);
			// 
			// p02
			// 
			this->p02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p02->Location = System::Drawing::Point(187, 3);
			this->p02->Name = L"p02";
			this->p02->Size = System::Drawing::Size(84, 77);
			this->p02->TabIndex = 4;
			this->p02->TabStop = false;
			this->p02->Click += gcnew System::EventHandler(this, &MyForm::p02_Click);
			// 
			// p01
			// 
			this->p01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p01->Location = System::Drawing::Point(97, 3);
			this->p01->Name = L"p01";
			this->p01->Size = System::Drawing::Size(84, 77);
			this->p01->TabIndex = 5;
			this->p01->TabStop = false;
			this->p01->Click += gcnew System::EventHandler(this, &MyForm::p01_Click);
			// 
			// p16
			// 
			this->p16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p16->Location = System::Drawing::Point(547, 86);
			this->p16->Name = L"p16";
			this->p16->Size = System::Drawing::Size(84, 77);
			this->p16->TabIndex = 6;
			this->p16->TabStop = false;
			this->p16->Click += gcnew System::EventHandler(this, &MyForm::p16_Click);
			// 
			// p26
			// 
			this->p26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p26->Location = System::Drawing::Point(547, 169);
			this->p26->Name = L"p26";
			this->p26->Size = System::Drawing::Size(84, 77);
			this->p26->TabIndex = 7;
			this->p26->TabStop = false;
			this->p26->Click += gcnew System::EventHandler(this, &MyForm::p26_Click);
			// 
			// p00
			// 
			this->p00->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p00->Location = System::Drawing::Point(3, 3);
			this->p00->Name = L"p00";
			this->p00->Size = System::Drawing::Size(88, 77);
			this->p00->TabIndex = 8;
			this->p00->TabStop = false;
			this->p00->Click += gcnew System::EventHandler(this, &MyForm::p00_Click);
			// 
			// p15
			// 
			this->p15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p15->Location = System::Drawing::Point(457, 86);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(84, 77);
			this->p15->TabIndex = 9;
			this->p15->TabStop = false;
			this->p15->Click += gcnew System::EventHandler(this, &MyForm::p15_Click);
			// 
			// p14
			// 
			this->p14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p14->Location = System::Drawing::Point(367, 86);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(84, 77);
			this->p14->TabIndex = 10;
			this->p14->TabStop = false;
			this->p14->Click += gcnew System::EventHandler(this, &MyForm::p14_Click);
			// 
			// p13
			// 
			this->p13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p13->Location = System::Drawing::Point(277, 86);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(84, 77);
			this->p13->TabIndex = 11;
			this->p13->TabStop = false;
			this->p13->Click += gcnew System::EventHandler(this, &MyForm::p13_Click);
			// 
			// p12
			// 
			this->p12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p12->Location = System::Drawing::Point(187, 86);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(84, 77);
			this->p12->TabIndex = 12;
			this->p12->TabStop = false;
			this->p12->Click += gcnew System::EventHandler(this, &MyForm::p12_Click);
			// 
			// p11
			// 
			this->p11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p11->Location = System::Drawing::Point(97, 86);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(84, 77);
			this->p11->TabIndex = 13;
			this->p11->TabStop = false;
			this->p11->Click += gcnew System::EventHandler(this, &MyForm::p11_Click);
			// 
			// p10
			// 
			this->p10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p10->Location = System::Drawing::Point(3, 86);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(88, 77);
			this->p10->TabIndex = 14;
			this->p10->TabStop = false;
			this->p10->Click += gcnew System::EventHandler(this, &MyForm::p10_Click);
			// 
			// p25
			// 
			this->p25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p25->Location = System::Drawing::Point(457, 169);
			this->p25->Name = L"p25";
			this->p25->Size = System::Drawing::Size(84, 77);
			this->p25->TabIndex = 15;
			this->p25->TabStop = false;
			this->p25->Click += gcnew System::EventHandler(this, &MyForm::p25_Click);
			// 
			// p24
			// 
			this->p24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p24->Location = System::Drawing::Point(367, 169);
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(84, 77);
			this->p24->TabIndex = 16;
			this->p24->TabStop = false;
			this->p24->Click += gcnew System::EventHandler(this, &MyForm::p24_Click);
			// 
			// p23
			// 
			this->p23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p23->Location = System::Drawing::Point(277, 169);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(84, 77);
			this->p23->TabIndex = 17;
			this->p23->TabStop = false;
			this->p23->Click += gcnew System::EventHandler(this, &MyForm::p23_Click);
			// 
			// p22
			// 
			this->p22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p22->Location = System::Drawing::Point(187, 169);
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(84, 77);
			this->p22->TabIndex = 18;
			this->p22->TabStop = false;
			this->p22->Click += gcnew System::EventHandler(this, &MyForm::p22_Click);
			// 
			// p21
			// 
			this->p21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p21->Location = System::Drawing::Point(97, 169);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(84, 77);
			this->p21->TabIndex = 19;
			this->p21->TabStop = false;
			this->p21->Click += gcnew System::EventHandler(this, &MyForm::p21_Click);
			// 
			// p20
			// 
			this->p20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p20->Location = System::Drawing::Point(3, 169);
			this->p20->Name = L"p20";
			this->p20->Size = System::Drawing::Size(88, 77);
			this->p20->TabIndex = 20;
			this->p20->TabStop = false;
			this->p20->Click += gcnew System::EventHandler(this, &MyForm::p20_Click);
			// 
			// p36
			// 
			this->p36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p36->Location = System::Drawing::Point(547, 252);
			this->p36->Name = L"p36";
			this->p36->Size = System::Drawing::Size(84, 77);
			this->p36->TabIndex = 21;
			this->p36->TabStop = false;
			this->p36->Click += gcnew System::EventHandler(this, &MyForm::p36_Click);
			// 
			// p35
			// 
			this->p35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p35->Location = System::Drawing::Point(457, 252);
			this->p35->Name = L"p35";
			this->p35->Size = System::Drawing::Size(84, 77);
			this->p35->TabIndex = 22;
			this->p35->TabStop = false;
			this->p35->Click += gcnew System::EventHandler(this, &MyForm::p35_Click);
			// 
			// p34
			// 
			this->p34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p34->Location = System::Drawing::Point(367, 252);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(84, 77);
			this->p34->TabIndex = 23;
			this->p34->TabStop = false;
			this->p34->Click += gcnew System::EventHandler(this, &MyForm::p34_Click);
			// 
			// p33
			// 
			this->p33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p33->Location = System::Drawing::Point(277, 252);
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(84, 77);
			this->p33->TabIndex = 24;
			this->p33->TabStop = false;
			this->p33->Click += gcnew System::EventHandler(this, &MyForm::p33_Click);
			// 
			// p32
			// 
			this->p32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p32->Location = System::Drawing::Point(187, 252);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(84, 77);
			this->p32->TabIndex = 25;
			this->p32->TabStop = false;
			this->p32->Click += gcnew System::EventHandler(this, &MyForm::p32_Click);
			// 
			// p31
			// 
			this->p31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p31->Location = System::Drawing::Point(97, 252);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(84, 77);
			this->p31->TabIndex = 26;
			this->p31->TabStop = false;
			this->p31->Click += gcnew System::EventHandler(this, &MyForm::p31_Click);
			// 
			// p30
			// 
			this->p30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p30->Location = System::Drawing::Point(3, 252);
			this->p30->Name = L"p30";
			this->p30->Size = System::Drawing::Size(88, 77);
			this->p30->TabIndex = 27;
			this->p30->TabStop = false;
			this->p30->Click += gcnew System::EventHandler(this, &MyForm::p30_Click);
			// 
			// p46
			// 
			this->p46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p46->Location = System::Drawing::Point(547, 335);
			this->p46->Name = L"p46";
			this->p46->Size = System::Drawing::Size(84, 77);
			this->p46->TabIndex = 28;
			this->p46->TabStop = false;
			this->p46->Click += gcnew System::EventHandler(this, &MyForm::p46_Click);
			// 
			// p45
			// 
			this->p45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p45->Location = System::Drawing::Point(457, 335);
			this->p45->Name = L"p45";
			this->p45->Size = System::Drawing::Size(84, 77);
			this->p45->TabIndex = 29;
			this->p45->TabStop = false;
			this->p45->Click += gcnew System::EventHandler(this, &MyForm::p45_Click);
			// 
			// p44
			// 
			this->p44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p44->Location = System::Drawing::Point(367, 335);
			this->p44->Name = L"p44";
			this->p44->Size = System::Drawing::Size(84, 77);
			this->p44->TabIndex = 30;
			this->p44->TabStop = false;
			this->p44->Click += gcnew System::EventHandler(this, &MyForm::p44_Click);
			// 
			// p43
			// 
			this->p43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p43->Location = System::Drawing::Point(277, 335);
			this->p43->Name = L"p43";
			this->p43->Size = System::Drawing::Size(84, 77);
			this->p43->TabIndex = 31;
			this->p43->TabStop = false;
			this->p43->Click += gcnew System::EventHandler(this, &MyForm::p43_Click);
			// 
			// p42
			// 
			this->p42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p42->Location = System::Drawing::Point(187, 335);
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(84, 77);
			this->p42->TabIndex = 32;
			this->p42->TabStop = false;
			this->p42->Click += gcnew System::EventHandler(this, &MyForm::p42_Click);
			// 
			// p40
			// 
			this->p40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p40->Location = System::Drawing::Point(3, 335);
			this->p40->Name = L"p40";
			this->p40->Size = System::Drawing::Size(88, 77);
			this->p40->TabIndex = 34;
			this->p40->TabStop = false;
			this->p40->Click += gcnew System::EventHandler(this, &MyForm::p40_Click);
			// 
			// p56
			// 
			this->p56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p56->Location = System::Drawing::Point(547, 418);
			this->p56->Name = L"p56";
			this->p56->Size = System::Drawing::Size(84, 77);
			this->p56->TabIndex = 35;
			this->p56->TabStop = false;
			this->p56->Click += gcnew System::EventHandler(this, &MyForm::p56_Click);
			// 
			// p55
			// 
			this->p55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p55->Location = System::Drawing::Point(457, 418);
			this->p55->Name = L"p55";
			this->p55->Size = System::Drawing::Size(84, 77);
			this->p55->TabIndex = 36;
			this->p55->TabStop = false;
			this->p55->Click += gcnew System::EventHandler(this, &MyForm::p55_Click);
			// 
			// p54
			// 
			this->p54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p54->Location = System::Drawing::Point(367, 418);
			this->p54->Name = L"p54";
			this->p54->Size = System::Drawing::Size(84, 77);
			this->p54->TabIndex = 37;
			this->p54->TabStop = false;
			this->p54->Click += gcnew System::EventHandler(this, &MyForm::p54_Click);
			// 
			// p53
			// 
			this->p53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p53->Location = System::Drawing::Point(277, 418);
			this->p53->Name = L"p53";
			this->p53->Size = System::Drawing::Size(84, 77);
			this->p53->TabIndex = 38;
			this->p53->TabStop = false;
			this->p53->Click += gcnew System::EventHandler(this, &MyForm::p53_Click);
			// 
			// p52
			// 
			this->p52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p52->Location = System::Drawing::Point(187, 418);
			this->p52->Name = L"p52";
			this->p52->Size = System::Drawing::Size(84, 77);
			this->p52->TabIndex = 39;
			this->p52->TabStop = false;
			this->p52->Click += gcnew System::EventHandler(this, &MyForm::p52_Click);
			// 
			// p51
			// 
			this->p51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p51->Location = System::Drawing::Point(97, 418);
			this->p51->Name = L"p51";
			this->p51->Size = System::Drawing::Size(84, 77);
			this->p51->TabIndex = 40;
			this->p51->TabStop = false;
			this->p51->Click += gcnew System::EventHandler(this, &MyForm::p51_Click);
			// 
			// p50
			// 
			this->p50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p50->Location = System::Drawing::Point(3, 418);
			this->p50->Name = L"p50";
			this->p50->Size = System::Drawing::Size(88, 77);
			this->p50->TabIndex = 41;
			this->p50->TabStop = false;
			this->p50->Click += gcnew System::EventHandler(this, &MyForm::p50_Click);
			// 
			// p66
			// 
			this->p66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p66->Location = System::Drawing::Point(547, 501);
			this->p66->Name = L"p66";
			this->p66->Size = System::Drawing::Size(84, 80);
			this->p66->TabIndex = 42;
			this->p66->TabStop = false;
			this->p66->Click += gcnew System::EventHandler(this, &MyForm::p66_Click);
			// 
			// p65
			// 
			this->p65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p65->Location = System::Drawing::Point(457, 501);
			this->p65->Name = L"p65";
			this->p65->Size = System::Drawing::Size(84, 80);
			this->p65->TabIndex = 43;
			this->p65->TabStop = false;
			this->p65->Click += gcnew System::EventHandler(this, &MyForm::p65_Click);
			// 
			// p64
			// 
			this->p64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p64->Location = System::Drawing::Point(367, 501);
			this->p64->Name = L"p64";
			this->p64->Size = System::Drawing::Size(84, 80);
			this->p64->TabIndex = 44;
			this->p64->TabStop = false;
			this->p64->Click += gcnew System::EventHandler(this, &MyForm::p64_Click);
			// 
			// p63
			// 
			this->p63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p63->Location = System::Drawing::Point(277, 501);
			this->p63->Name = L"p63";
			this->p63->Size = System::Drawing::Size(84, 80);
			this->p63->TabIndex = 45;
			this->p63->TabStop = false;
			this->p63->Click += gcnew System::EventHandler(this, &MyForm::p63_Click);
			// 
			// p62
			// 
			this->p62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p62->Location = System::Drawing::Point(187, 501);
			this->p62->Name = L"p62";
			this->p62->Size = System::Drawing::Size(84, 80);
			this->p62->TabIndex = 46;
			this->p62->TabStop = false;
			this->p62->Click += gcnew System::EventHandler(this, &MyForm::p62_Click);
			// 
			// p61
			// 
			this->p61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p61->Location = System::Drawing::Point(97, 501);
			this->p61->Name = L"p61";
			this->p61->Size = System::Drawing::Size(84, 80);
			this->p61->TabIndex = 47;
			this->p61->TabStop = false;
			this->p61->Click += gcnew System::EventHandler(this, &MyForm::p61_Click);
			// 
			// p60
			// 
			this->p60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p60->Location = System::Drawing::Point(3, 501);
			this->p60->Name = L"p60";
			this->p60->Size = System::Drawing::Size(88, 80);
			this->p60->TabIndex = 48;
			this->p60->TabStop = false;
			this->p60->Click += gcnew System::EventHandler(this, &MyForm::p60_Click);
			// 
			// p41
			// 
			this->p41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p41->Location = System::Drawing::Point(97, 335);
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(84, 77);
			this->p41->TabIndex = 33;
			this->p41->TabStop = false;
			this->p41->Click += gcnew System::EventHandler(this, &MyForm::p41_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(675, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 55);
			this->label1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(774, 513);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(171, 155);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(937, 661);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MaximumSize = System::Drawing::Size(2000, 2000);
			this->MinimumSize = System::Drawing::Size(900, 700);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"крестики-нолики";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			Start();
		}
		

	   private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void statusStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
		}
        
		 private: PictureBox^ InitImage(PictureBox^ p) {
			
			 unsigned int row = tableLayoutPanel1->GetRow(p);
			 unsigned int column = ((6-(tableLayoutPanel1->GetColumn(p))));
			 if ((row < size) && (column < size)) {
				 p->Image = p->Image->FromFile("1.bmp");
				 
			 }
			 return p;
		 }

		private: PictureBox^ MoveX(PictureBox^ p) {

			unsigned int row = tableLayoutPanel1->GetRow(p);
			unsigned int column = ((6 - (tableLayoutPanel1->GetColumn(p))));
			
				p->Image = p->Image->FromFile("2.bmp");

			
			return p;
		}
        
		private: PictureBox^ MoveO(PictureBox^ p) {

			unsigned int row = tableLayoutPanel1->GetRow(p);
			unsigned int column = ((6 - (tableLayoutPanel1->GetColumn(p))));
			
				p->Image = p->Image->FromFile("3.bmp");

			
			return p;
		}

		private: Void _Restart() {
			p00->Image = nullptr;
			p01->Image = nullptr;
			p10->Image = nullptr;
			p11->Image = nullptr;
			p02->Image = nullptr;
			p12->Image = nullptr;
			p21->Image = nullptr;
			p20->Image = nullptr;
			p22->Image = nullptr;


			p03->Image = nullptr;
			p04->Image = nullptr;
			p05->Image = nullptr;
			p06->Image = nullptr;

			p13->Image = nullptr;
			p14->Image = nullptr;
			p15->Image = nullptr;
			p16->Image = nullptr;

			p23->Image = nullptr;
			p24->Image = nullptr;
			p25->Image = nullptr;
			p26->Image = nullptr;

			p30->Image = nullptr;
			p31->Image = nullptr;
			p32->Image = nullptr;
			p33->Image = nullptr;
			p34->Image = nullptr;
			p35->Image = nullptr;
			p36->Image = nullptr;

			p40->Image = nullptr;
			p41->Image = nullptr;
			p42->Image = nullptr;
			p43->Image = nullptr;
			p44->Image = nullptr;
			p45->Image = nullptr;
			p46->Image = nullptr;

			p50->Image = nullptr;
			p51->Image = nullptr;
			p52->Image = nullptr;
			p53->Image = nullptr;
			p54->Image = nullptr;
			p55->Image = nullptr;
			p56->Image = nullptr;

			p60->Image = nullptr;
			p61->Image = nullptr;
			p62->Image = nullptr;
			p63->Image = nullptr;
			p64->Image = nullptr;
			p65->Image = nullptr;
			p66->Image = nullptr;
		}

		private: Void _InitAllImage() {
			p00 = this->InitImage(p00);
			p01 = this->InitImage(p01);
			p10 = this->InitImage(p10);
			p11 = this->InitImage(p11);
			p02 = this->InitImage(p02);
			p12 = this->InitImage(p12);
			p21 = this->InitImage(p21);
			p20 = this->InitImage(p20);
			p22 = this->InitImage(p22);


			p03 = this->InitImage(p03);
			p04 = this->InitImage(p04);
			p05 = this->InitImage(p05);
			p06 = this->InitImage(p06);

			p13 = this->InitImage(p13);
			p14 = this->InitImage(p14);
			p15 = this->InitImage(p15);
			p16 = this->InitImage(p16);

			p23 = this->InitImage(p23);
			p24 = this->InitImage(p24);
			p25 = this->InitImage(p25);
			p26 = this->InitImage(p26);

			p30 = this->InitImage(p30);
			p31 = this->InitImage(p31);
			p32 = this->InitImage(p32);
			p33 = this->InitImage(p33);
			p34 = this->InitImage(p34);
			p35 = this->InitImage(p35);
			p36 = this->InitImage(p36);

			p40 = this->InitImage(p40);
			p41 = this->InitImage(p41);
			p42 = this->InitImage(p42);
			p43 = this->InitImage(p43);
			p44 = this->InitImage(p44);
			p45 = this->InitImage(p45);
			p46 = this->InitImage(p46);

			p50 = this->InitImage(p50);
			p51 = this->InitImage(p51);
			p52 = this->InitImage(p52);
			p53 = this->InitImage(p53);
			p54 = this->InitImage(p54);
			p55 = this->InitImage(p55);
			p56 = this->InitImage(p56);

			p60 = this->InitImage(p60);
			p61 = this->InitImage(p61);
			p62 = this->InitImage(p62);
			p63 = this->InitImage(p63);
			p64 = this->InitImage(p64);
			p65 = this->InitImage(p65);
			p66 = this->InitImage(p66);
		}
		

		private: Void _MoveImage() {
			this->MoveX(p00);
		}

		private: System::Void Start() {
			delete board;
			board = new Board(size);
			
			
		  this->_Restart();

		  this->_InitAllImage();

		  nowPlay = X;
		  winner = NONE;
		  this->label1->Text = L"Play!";
		   
        }


   private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
   }


private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	size = 4;
	Start();


}


		private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			size = 3;
			Start();



		}
		private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			size = 5;
			Start();


		}
		private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			size = 6;
			Start();

		}
		private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			size = 7;
			Start();
		}

    
		private: System::Void ClSomeImage(PictureBox^ p, unsigned int x, unsigned int y) {
			
			unsigned int row = tableLayoutPanel1->GetRow(p);
			unsigned int column = ((6 - (tableLayoutPanel1->GetColumn(p))));
			if ((row < size) && (column < size)&&(winner==NONE)) {

				if (nowPlay == X) {
					if (board->MakeMove(x, y, X)) {
						this->MoveX(p);
						nowPlay = O;
						winner = board->IsWin(X, x, y);
						if (winner != NONE) {
							if (winner== X_WIN)
							this->label1->Text = L"X Win";
							if (winner == O_WIN)
								this->label1->Text = L"O Win";
							if (winner == DPAW)
								this->label1->Text = L"Ничья(";
							
						}
					}
				}
				

				
				  if (nowPlay == O) {
					if (board->MakeMove(x, y, O)) {
						this->MoveO(p);
						nowPlay = X;
						winner = board->IsWin(O, x, y);
						if (winner != NONE) {
							if (winner == X_WIN)
								this->label1->Text = L"X Win";
							if (winner == O_WIN)
								this->label1->Text = L"O Win";
							if (winner == DPAW)
								this->label1->Text = L"Ничья(";
						}
					}
				  } 
				

			}
		}



		private: System::Void p00_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p00, 0, 0);
		}
	   

		private: System::Void p01_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p01, 0, 1);
		}

     
		private: System::Void p10_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p10, 1, 0);
		}

		private: System::Void p11_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p11, 1, 1);
		}

        private: System::Void p02_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p02, 0, 2);
        }
		private: System::Void p12_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p12, 1, 2);
		}
		private: System::Void p22_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p22, 2, 2);
		}


		private: System::Void p21_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p21, 2, 1);
		}
		private: System::Void p20_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ClSomeImage(p20, 2, 0);
		}
         
         private: System::Void p03_Click(System::Object^ sender, System::EventArgs^ e) {
			 this->ClSomeImage(p03, 0, 3);
         }

private: System::Void p04_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p04, 0, 4);
}

private: System::Void p05_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p05, 0, 5);
}
private: System::Void p06_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p06, 0, 6);
}


private: System::Void p13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p13, 1, 3);
}


private: System::Void p14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p14, 1, 4);
}
private: System::Void p15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p15, 1, 5);
}
private: System::Void p16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p16, 1, 6);
}


private: System::Void p23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p23, 2, 3);
}
private: System::Void p24_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p24, 2, 4);
}
private: System::Void p25_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p25, 2, 5);
}
private: System::Void p26_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p26, 2, 6);
}


private: System::Void p30_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p30, 3, 0);
}


private: System::Void p31_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p31, 3, 1);
}
private: System::Void p32_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p32, 3, 2);
}
private: System::Void p33_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p33, 3, 3);
}


private: System::Void p34_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p34, 3, 4);
}

private: System::Void p35_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p35, 3, 5);
}

private: System::Void p36_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p36, 3, 6);
}
private: System::Void p40_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p40, 4, 0);
}


private: System::Void p41_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p41, 4, 1);
}

private: System::Void p42_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p42, 4, 2);
}


private: System::Void p43_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p43, 4, 3);
}
private: System::Void p44_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p44, 4, 4);
}


private: System::Void p45_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p45, 4, 5);
}

private: System::Void p46_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p46, 4, 6);
}
private: System::Void p50_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p50, 5, 0);
}
private: System::Void p51_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p51, 5, 1);
}
private: System::Void p52_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p52, 5, 2);
}
private: System::Void p53_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p53, 5, 3);
}
private: System::Void p54_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p54, 5, 4);
}

private: System::Void p55_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p55, 5, 5);
}


private: System::Void p56_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p56, 5, 6);
}


private: System::Void p60_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p60, 6, 0);
}
private: System::Void p61_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p61, 6, 1);
}
private: System::Void p62_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p62, 6, 2);
}


private: System::Void p63_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p63, 6, 3);
}


private: System::Void p64_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p64, 6, 4);
}
private: System::Void p65_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p65, 6, 5);
}


private: System::Void p66_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClSomeImage(p66, 6, 6);
}
private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
	Start();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	   this->Close();
}
};
}
