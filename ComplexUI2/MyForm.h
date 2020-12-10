#pragma once

#include "Comlpex.h"
#include <stdlib.h>
namespace ComplexUI2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	int m_p[12];
	ComplexArr* a;
	ComplexArr* b;
	unsigned int t, g, p, o;
	String^* str[6];
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//float x, c, r, i;
		unsigned int i;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			a = new ComplexArr();
			b = new ComplexArr();
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
	private: System::Windows::Forms::Button^ buttonEnter;
	protected:
	private: System::Windows::Forms::Button^ buttonShow;
	private: System::Windows::Forms::Button^ buttonAbs;
	private: System::Windows::Forms::Button^ buttonPhase;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxImag;

	private: System::Windows::Forms::TextBox^ textBoxReal;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ OutToolStripMenuItem;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxShow;
	private: System::Windows::Forms::TextBox^ textBoxMod;
	private: System::Windows::Forms::TextBox^ textBoxPfase;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxComb;


	public:









	private: System::Windows::Forms::Button^ buttonInc;
	public:
	private: System::Windows::Forms::Button^ buttonSum;
	private: System::Windows::Forms::Button^ buttonLess;
	private: System::Windows::Forms::Button^ buttonAbove;
	private: System::Windows::Forms::Button^ buttonComp;
	private: System::Windows::Forms::Button^ buttonEqa;

	private: System::Windows::Forms::TextBox^ textBoxInc;
	private: System::Windows::Forms::TextBox^ textBoxComp;
	private: System::Windows::Forms::TextBox^ textBoxLess;
	private: System::Windows::Forms::TextBox^ textBoxAbove;

	private: System::Windows::Forms::TextBox^ textBoxSum;
	private: System::Windows::Forms::TextBox^ textBoxDifr;


	public:
	private: System::Windows::Forms::Button^ buttonDifr;
	private: System::Windows::Forms::TextBox^ textBoxProd;

	private: System::Windows::Forms::Button^ buttonProd;
	private: System::Windows::Forms::TextBox^ textBoxQuo;

	private: System::Windows::Forms::Button^ buttonQuo;

	private: System::Windows::Forms::Button^ buttonEqb;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: System::Windows::Forms::Button^ buttonPrint;
	private:

	private: System::Windows::Forms::TextBox^ textBoxIncb;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxCh;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxChB;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxMasB;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxMas;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxId;
private: System::Windows::Forms::Button^ buttonSetmas;
private: System::Windows::Forms::TextBox^ textBoxMassize;


private: System::Windows::Forms::TextBox^ textBoxMasnum;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ buttonSetStep;
private: System::Windows::Forms::Button^ buttonEQ;
private: System::Windows::Forms::TextBox^ textBoxEQ1;
private: System::Windows::Forms::TextBox^ textBoxEQ2;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBoxClear;
private: System::Windows::Forms::Button^ buttonClear;

	private: System::ComponentModel::IContainer^ components;
		   /// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->buttonAbs = (gcnew System::Windows::Forms::Button());
			this->buttonPhase = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxMasB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMas = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxChB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCh = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxComb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxImag = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReal = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->OutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxShow = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMod = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPfase = (gcnew System::Windows::Forms::TextBox());
			this->buttonInc = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonLess = (gcnew System::Windows::Forms::Button());
			this->buttonAbove = (gcnew System::Windows::Forms::Button());
			this->buttonComp = (gcnew System::Windows::Forms::Button());
			this->buttonEqa = (gcnew System::Windows::Forms::Button());
			this->textBoxInc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxComp = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLess = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAbove = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDifr = (gcnew System::Windows::Forms::TextBox());
			this->buttonDifr = (gcnew System::Windows::Forms::Button());
			this->textBoxProd = (gcnew System::Windows::Forms::TextBox());
			this->buttonProd = (gcnew System::Windows::Forms::Button());
			this->textBoxQuo = (gcnew System::Windows::Forms::TextBox());
			this->buttonQuo = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->textBoxIncb = (gcnew System::Windows::Forms::TextBox());
			this->buttonEqb = (gcnew System::Windows::Forms::Button());
			this->buttonSetmas = (gcnew System::Windows::Forms::Button());
			this->textBoxMassize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMasnum = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonSetStep = (gcnew System::Windows::Forms::Button());
			this->buttonEQ = (gcnew System::Windows::Forms::Button());
			this->textBoxEQ1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEQ2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxClear = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEnter
			// 
			this->buttonEnter->Location = System::Drawing::Point(6, 19);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(267, 90);
			this->buttonEnter->TabIndex = 0;
			this->buttonEnter->Text = L"Задать число";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonEnter_Click);
			// 
			// buttonShow
			// 
			this->buttonShow->Location = System::Drawing::Point(12, 151);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(267, 30);
			this->buttonShow->TabIndex = 1;
			this->buttonShow->Text = L"Вывести число";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &MyForm::buttonShow_Click);
			// 
			// buttonAbs
			// 
			this->buttonAbs->Location = System::Drawing::Point(12, 187);
			this->buttonAbs->Name = L"buttonAbs";
			this->buttonAbs->Size = System::Drawing::Size(267, 26);
			this->buttonAbs->TabIndex = 2;
			this->buttonAbs->Text = L"Вычеслить модуль";
			this->buttonAbs->UseVisualStyleBackColor = true;
			this->buttonAbs->Click += gcnew System::EventHandler(this, &MyForm::buttonAbs_Click);
			// 
			// buttonPhase
			// 
			this->buttonPhase->Location = System::Drawing::Point(12, 219);
			this->buttonPhase->Name = L"buttonPhase";
			this->buttonPhase->Size = System::Drawing::Size(267, 30);
			this->buttonPhase->TabIndex = 3;
			this->buttonPhase->Text = L"Вычеслить фазу";
			this->buttonPhase->UseVisualStyleBackColor = true;
			this->buttonPhase->Click += gcnew System::EventHandler(this, &MyForm::buttonPhase_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBoxId);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxMasB);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBoxMas);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxChB);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxCh);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxComb);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxImag);
			this->groupBox1->Controls->Add(this->textBoxReal);
			this->groupBox1->Controls->Add(this->buttonEnter);
			this->groupBox1->Location = System::Drawing::Point(6, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1168, 123);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задать число";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(748, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"id";
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(769, 92);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(146, 20);
			this->textBoxId->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(924, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Массив числа b";
			// 
			// textBoxMasB
			// 
			this->textBoxMasB->Location = System::Drawing::Point(1013, 55);
			this->textBoxMasB->Name = L"textBoxMasB";
			this->textBoxMasB->Size = System::Drawing::Size(146, 20);
			this->textBoxMasB->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(924, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Массив числа a";
			// 
			// textBoxMas
			// 
			this->textBoxMas->Location = System::Drawing::Point(1013, 22);
			this->textBoxMas->Name = L"textBoxMas";
			this->textBoxMas->Size = System::Drawing::Size(146, 20);
			this->textBoxMas->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(680, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Номер числа B";
			// 
			// textBoxChB
			// 
			this->textBoxChB->Location = System::Drawing::Point(769, 55);
			this->textBoxChB->Name = L"textBoxChB";
			this->textBoxChB->Size = System::Drawing::Size(146, 20);
			this->textBoxChB->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(680, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Номер числа A";
			// 
			// textBoxCh
			// 
			this->textBoxCh->Location = System::Drawing::Point(769, 22);
			this->textBoxCh->Name = L"textBoxCh";
			this->textBoxCh->Size = System::Drawing::Size(146, 20);
			this->textBoxCh->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(297, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"re+im";
			// 
			// textBoxComb
			// 
			this->textBoxComb->Location = System::Drawing::Point(335, 92);
			this->textBoxComb->Name = L"textBoxComb";
			this->textBoxComb->Size = System::Drawing::Size(339, 20);
			this->textBoxComb->TabIndex = 5;
			this->textBoxComb->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxComb_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(277, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Imaginary";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(300, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Real";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBoxImag
			// 
			this->textBoxImag->Location = System::Drawing::Point(335, 55);
			this->textBoxImag->Name = L"textBoxImag";
			this->textBoxImag->Size = System::Drawing::Size(339, 20);
			this->textBoxImag->TabIndex = 2;
			// 
			// textBoxReal
			// 
			this->textBoxReal->Location = System::Drawing::Point(335, 22);
			this->textBoxReal->Name = L"textBoxReal";
			this->textBoxReal->Size = System::Drawing::Size(339, 20);
			this->textBoxReal->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->OutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1186, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// OutToolStripMenuItem
			// 
			this->OutToolStripMenuItem->Name = L"OutToolStripMenuItem";
			this->OutToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->OutToolStripMenuItem->Text = L"Выход";
			this->OutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OutToolStripMenuItem_Click);
			// 
			// textBoxShow
			// 
			this->textBoxShow->Location = System::Drawing::Point(341, 157);
			this->textBoxShow->Name = L"textBoxShow";
			this->textBoxShow->Size = System::Drawing::Size(339, 20);
			this->textBoxShow->TabIndex = 6;
			this->textBoxShow->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxShow_TextChanged);
			// 
			// textBoxMod
			// 
			this->textBoxMod->Location = System::Drawing::Point(341, 191);
			this->textBoxMod->Name = L"textBoxMod";
			this->textBoxMod->Size = System::Drawing::Size(339, 20);
			this->textBoxMod->TabIndex = 7;
			// 
			// textBoxPfase
			// 
			this->textBoxPfase->Location = System::Drawing::Point(341, 225);
			this->textBoxPfase->Name = L"textBoxPfase";
			this->textBoxPfase->Size = System::Drawing::Size(339, 20);
			this->textBoxPfase->TabIndex = 8;
			// 
			// buttonInc
			// 
			this->buttonInc->Location = System::Drawing::Point(12, 316);
			this->buttonInc->Name = L"buttonInc";
			this->buttonInc->Size = System::Drawing::Size(267, 49);
			this->buttonInc->TabIndex = 12;
			this->buttonInc->Text = L"Увеличить";
			this->buttonInc->UseVisualStyleBackColor = true;
			this->buttonInc->Click += gcnew System::EventHandler(this, &MyForm::buttonInc_Click);
			// 
			// buttonSum
			// 
			this->buttonSum->Location = System::Drawing::Point(12, 398);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(267, 23);
			this->buttonSum->TabIndex = 13;
			this->buttonSum->Text = L"Сумма";
			this->buttonSum->UseVisualStyleBackColor = true;
			this->buttonSum->Click += gcnew System::EventHandler(this, &MyForm::buttonSum_Click);
			// 
			// buttonLess
			// 
			this->buttonLess->Location = System::Drawing::Point(470, 398);
			this->buttonLess->Name = L"buttonLess";
			this->buttonLess->Size = System::Drawing::Size(267, 23);
			this->buttonLess->TabIndex = 14;
			this->buttonLess->Text = L"Сравнение a<b";
			this->buttonLess->UseVisualStyleBackColor = true;
			this->buttonLess->Click += gcnew System::EventHandler(this, &MyForm::buttonLess_Click);
			// 
			// buttonAbove
			// 
			this->buttonAbove->Location = System::Drawing::Point(470, 369);
			this->buttonAbove->Name = L"buttonAbove";
			this->buttonAbove->Size = System::Drawing::Size(267, 23);
			this->buttonAbove->TabIndex = 15;
			this->buttonAbove->Text = L"Сравнение a>b";
			this->buttonAbove->UseVisualStyleBackColor = true;
			this->buttonAbove->Click += gcnew System::EventHandler(this, &MyForm::buttonAbove_Click);
			// 
			// buttonComp
			// 
			this->buttonComp->Location = System::Drawing::Point(470, 427);
			this->buttonComp->Name = L"buttonComp";
			this->buttonComp->Size = System::Drawing::Size(267, 24);
			this->buttonComp->TabIndex = 16;
			this->buttonComp->Text = L"Сравнение a==b";
			this->buttonComp->UseVisualStyleBackColor = true;
			this->buttonComp->Click += gcnew System::EventHandler(this, &MyForm::buttonComp_Click);
			// 
			// buttonEqa
			// 
			this->buttonEqa->Location = System::Drawing::Point(470, 459);
			this->buttonEqa->Name = L"buttonEqa";
			this->buttonEqa->Size = System::Drawing::Size(267, 23);
			this->buttonEqa->TabIndex = 17;
			this->buttonEqa->Text = L"Присвоение A к B";
			this->buttonEqa->UseVisualStyleBackColor = true;
			this->buttonEqa->Click += gcnew System::EventHandler(this, &MyForm::buttonEqa_Click);
			// 
			// textBoxInc
			// 
			this->textBoxInc->Location = System::Drawing::Point(286, 319);
			this->textBoxInc->Name = L"textBoxInc";
			this->textBoxInc->Size = System::Drawing::Size(178, 20);
			this->textBoxInc->TabIndex = 18;
			this->textBoxInc->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxInc_TextChanged);
			// 
			// textBoxComp
			// 
			this->textBoxComp->Location = System::Drawing::Point(743, 431);
			this->textBoxComp->Name = L"textBoxComp";
			this->textBoxComp->Size = System::Drawing::Size(178, 20);
			this->textBoxComp->TabIndex = 19;
			// 
			// textBoxLess
			// 
			this->textBoxLess->Location = System::Drawing::Point(743, 401);
			this->textBoxLess->Name = L"textBoxLess";
			this->textBoxLess->Size = System::Drawing::Size(178, 20);
			this->textBoxLess->TabIndex = 20;
			// 
			// textBoxAbove
			// 
			this->textBoxAbove->Location = System::Drawing::Point(743, 372);
			this->textBoxAbove->Name = L"textBoxAbove";
			this->textBoxAbove->Size = System::Drawing::Size(178, 20);
			this->textBoxAbove->TabIndex = 21;
			// 
			// textBoxSum
			// 
			this->textBoxSum->Location = System::Drawing::Point(286, 401);
			this->textBoxSum->Name = L"textBoxSum";
			this->textBoxSum->Size = System::Drawing::Size(178, 20);
			this->textBoxSum->TabIndex = 23;
			// 
			// textBoxDifr
			// 
			this->textBoxDifr->Location = System::Drawing::Point(286, 430);
			this->textBoxDifr->Name = L"textBoxDifr";
			this->textBoxDifr->Size = System::Drawing::Size(178, 20);
			this->textBoxDifr->TabIndex = 25;
			// 
			// buttonDifr
			// 
			this->buttonDifr->Location = System::Drawing::Point(12, 427);
			this->buttonDifr->Name = L"buttonDifr";
			this->buttonDifr->Size = System::Drawing::Size(267, 23);
			this->buttonDifr->TabIndex = 24;
			this->buttonDifr->Text = L"Разность";
			this->buttonDifr->UseVisualStyleBackColor = true;
			this->buttonDifr->Click += gcnew System::EventHandler(this, &MyForm::buttonDifr_Click);
			// 
			// textBoxProd
			// 
			this->textBoxProd->Location = System::Drawing::Point(286, 459);
			this->textBoxProd->Name = L"textBoxProd";
			this->textBoxProd->Size = System::Drawing::Size(178, 20);
			this->textBoxProd->TabIndex = 27;
			// 
			// buttonProd
			// 
			this->buttonProd->Location = System::Drawing::Point(12, 456);
			this->buttonProd->Name = L"buttonProd";
			this->buttonProd->Size = System::Drawing::Size(267, 23);
			this->buttonProd->TabIndex = 26;
			this->buttonProd->Text = L"Произведение";
			this->buttonProd->UseVisualStyleBackColor = true;
			this->buttonProd->Click += gcnew System::EventHandler(this, &MyForm::buttonProd_Click);
			// 
			// textBoxQuo
			// 
			this->textBoxQuo->Location = System::Drawing::Point(286, 488);
			this->textBoxQuo->Name = L"textBoxQuo";
			this->textBoxQuo->Size = System::Drawing::Size(178, 20);
			this->textBoxQuo->TabIndex = 29;
			// 
			// buttonQuo
			// 
			this->buttonQuo->Location = System::Drawing::Point(12, 485);
			this->buttonQuo->Name = L"buttonQuo";
			this->buttonQuo->Size = System::Drawing::Size(267, 23);
			this->buttonQuo->TabIndex = 28;
			this->buttonQuo->Text = L"Часное";
			this->buttonQuo->UseVisualStyleBackColor = true;
			this->buttonQuo->Click += gcnew System::EventHandler(this, &MyForm::buttonQuo_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(927, 306);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(222, 197);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(984, 534);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(116, 33);
			this->buttonPrint->TabIndex = 31;
			this->buttonPrint->Text = L"Нарисовать";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MyForm::buttonPrint_Click);
			// 
			// textBoxIncb
			// 
			this->textBoxIncb->Location = System::Drawing::Point(286, 345);
			this->textBoxIncb->Name = L"textBoxIncb";
			this->textBoxIncb->Size = System::Drawing::Size(178, 20);
			this->textBoxIncb->TabIndex = 32;
			// 
			// buttonEqb
			// 
			this->buttonEqb->Location = System::Drawing::Point(470, 488);
			this->buttonEqb->Name = L"buttonEqb";
			this->buttonEqb->Size = System::Drawing::Size(267, 23);
			this->buttonEqb->TabIndex = 33;
			this->buttonEqb->Text = L"Присвоение B к A";
			this->buttonEqb->UseVisualStyleBackColor = true;
			this->buttonEqb->Click += gcnew System::EventHandler(this, &MyForm::buttonEqb_Click);
			// 
			// buttonSetmas
			// 
			this->buttonSetmas->Location = System::Drawing::Point(708, 155);
			this->buttonSetmas->Name = L"buttonSetmas";
			this->buttonSetmas->Size = System::Drawing::Size(213, 26);
			this->buttonSetmas->TabIndex = 34;
			this->buttonSetmas->Text = L"Задать массив случайно";
			this->buttonSetmas->UseVisualStyleBackColor = true;
			this->buttonSetmas->Click += gcnew System::EventHandler(this, &MyForm::buttonSetmas_Click);
			// 
			// textBoxMassize
			// 
			this->textBoxMassize->Location = System::Drawing::Point(1024, 187);
			this->textBoxMassize->Name = L"textBoxMassize";
			this->textBoxMassize->Size = System::Drawing::Size(146, 20);
			this->textBoxMassize->TabIndex = 18;
			// 
			// textBoxMasnum
			// 
			this->textBoxMasnum->Location = System::Drawing::Point(1024, 154);
			this->textBoxMasnum->Name = L"textBoxMasnum";
			this->textBoxMasnum->Size = System::Drawing::Size(146, 20);
			this->textBoxMasnum->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(930, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Размер массива";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(930, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Номер массива";
			// 
			// buttonSetStep
			// 
			this->buttonSetStep->Location = System::Drawing::Point(708, 185);
			this->buttonSetStep->Name = L"buttonSetStep";
			this->buttonSetStep->Size = System::Drawing::Size(213, 26);
			this->buttonSetStep->TabIndex = 35;
			this->buttonSetStep->Text = L"Задать массив с шагом";
			this->buttonSetStep->UseVisualStyleBackColor = true;
			this->buttonSetStep->Click += gcnew System::EventHandler(this, &MyForm::buttonSetStep_Click);
			// 
			// buttonEQ
			// 
			this->buttonEQ->Location = System::Drawing::Point(708, 219);
			this->buttonEQ->Name = L"buttonEQ";
			this->buttonEQ->Size = System::Drawing::Size(213, 26);
			this->buttonEQ->TabIndex = 36;
			this->buttonEQ->TabStop = false;
			this->buttonEQ->Text = L"Присвоить массив";
			this->buttonEQ->UseVisualStyleBackColor = true;
			this->buttonEQ->Click += gcnew System::EventHandler(this, &MyForm::buttonEQ_Click);
			// 
			// textBoxEQ1
			// 
			this->textBoxEQ1->Location = System::Drawing::Point(933, 223);
			this->textBoxEQ1->Name = L"textBoxEQ1";
			this->textBoxEQ1->Size = System::Drawing::Size(40, 20);
			this->textBoxEQ1->TabIndex = 37;
			// 
			// textBoxEQ2
			// 
			this->textBoxEQ2->Location = System::Drawing::Point(1002, 223);
			this->textBoxEQ2->Name = L"textBoxEQ2";
			this->textBoxEQ2->Size = System::Drawing::Size(40, 20);
			this->textBoxEQ2->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(981, 228);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"К";
			// 
			// textBoxClear
			// 
			this->textBoxClear->Location = System::Drawing::Point(933, 255);
			this->textBoxClear->Name = L"textBoxClear";
			this->textBoxClear->Size = System::Drawing::Size(40, 20);
			this->textBoxClear->TabIndex = 40;
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(708, 251);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(213, 26);
			this->buttonClear->TabIndex = 39;
			this->buttonClear->TabStop = false;
			this->buttonClear->Text = L"Очистить массив";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 600);
			this->Controls->Add(this->textBoxClear);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxEQ2);
			this->Controls->Add(this->textBoxEQ1);
			this->Controls->Add(this->buttonEQ);
			this->Controls->Add(this->buttonSetStep);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxMassize);
			this->Controls->Add(this->textBoxMasnum);
			this->Controls->Add(this->buttonSetmas);
			this->Controls->Add(this->buttonEqb);
			this->Controls->Add(this->textBoxIncb);
			this->Controls->Add(this->buttonPrint);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxQuo);
			this->Controls->Add(this->buttonQuo);
			this->Controls->Add(this->textBoxProd);
			this->Controls->Add(this->buttonProd);
			this->Controls->Add(this->textBoxDifr);
			this->Controls->Add(this->buttonDifr);
			this->Controls->Add(this->textBoxSum);
			this->Controls->Add(this->textBoxAbove);
			this->Controls->Add(this->textBoxLess);
			this->Controls->Add(this->textBoxComp);
			this->Controls->Add(this->textBoxInc);
			this->Controls->Add(this->buttonEqa);
			this->Controls->Add(this->buttonComp);
			this->Controls->Add(this->buttonAbove);
			this->Controls->Add(this->buttonLess);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->buttonInc);
			this->Controls->Add(this->textBoxPfase);
			this->Controls->Add(this->textBoxMod);
			this->Controls->Add(this->textBoxShow);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonPhase);
			this->Controls->Add(this->buttonAbs);
			this->Controls->Add(this->buttonShow);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L" ";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	abort;
}
private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxCh->Text->Length < 1)
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	if ((textBoxReal->Text->Length < 0) && (textBoxImag->Text->Length < 0) && (textBoxComb->Text->Length < 1) && (textBoxId->Text->Length != 1))
	{

	}
	if ((textBoxReal->Text->Length != 0) && (textBoxImag->Text->Length != 0) && (textBoxComb->Text->Length < 1))
	{
		switch (p)
		{
		case 1:
		{
			double rr = Convert::ToDouble(textBoxReal->Text);
			double ii = Convert::ToDouble(textBoxImag->Text);
			System::String^* s = 0;
			if (textBoxId->Text->Length < 1)
				return;
			*s = textBoxId->Text;
			(*a)[t].setall(rr, ii);
			(*a)[t].setid(s);
			return;
		}
		case 2:
		{
			double rr = Convert::ToDouble(textBoxReal->Text);
			double ii = Convert::ToDouble(textBoxImag->Text);
			System::String^* s;
			if (textBoxId->Text->Length < 1)
				return;
			*s = textBoxId->Text;
			(*b)[t].setall(rr, ii);
			(*b)[t].setid(s);
			return;
		}
		}
	}
	else
	{
		if (textBoxComb->Text->Length < 1)
			return;
		String^ s = textBoxComb->Text;   //a+i*5
		//String^ delimiter = "+";
		String^ token1 = s->Split('+')[0]; // 0- до +     1- после
		String^ token2 = s->Split('*')[1];
		double r = Convert::ToDouble(token1);
		double i = Convert::ToDouble(token2);
		switch (p)
		{
		case 1:
		{
			(*a)[t].setall(r, i);
		}
		case 2:
		{
			(*b)[t].setall(r, i);
		}
		}
	}
	
		// длинна всей строки - ->Lenght
	    //String^ x = textBoxReal->Text;
		//float r = float::Parse(textBoxReal->Text);
		//String^ c = textBoxImag->Text;
		//float i = float::Parse(textBoxImag->Text);
	/*catch () {}*/
}
private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) 
{
	p = Convert::ToDouble(textBoxMas->Text);
	switch (p)
	{
	case 1:
	{
		textBoxShow->Text = (*a)[ Convert::ToInt32(textBoxCh->Text)].getre() + "+" + "i" + "*" + (*a)[ Convert::ToInt32(textBoxCh->Text)].getim();
		return;
	}
	case 2:
	{
		textBoxShow->Text = (*b)[t = Convert::ToInt32(textBoxCh->Text)].getre() + "+" + "i" + "*" + (*a)[t = Convert::ToInt32(textBoxCh->Text)].getim();
		return;
	}
	}
}
private: System::Void buttonAbs_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxCh->Text->Length < 1)
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	switch (p)
	{
	case 1:
	{
		textBoxMod->Text = (*a)[t].abs();
		return;
	}
	case 2:
	{
		textBoxMod->Text = (*b)[t].abs();
		return;
	}
	}
}
private: System::Void buttonPhase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxCh->Text->Length < 1)
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	switch (p)
	{
	case 1:
	{
		textBoxPfase->Text = (*a)[t].phase();
		return;
	}
	case 2:
	{
		textBoxPfase->Text = (*b)[t].phase();
		return;
	}
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxShow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxComb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxInc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{ 
	// Рисуем линию
 e->Graphics->DrawLine(System::Drawing::Pens::Green, m_p[1], m_p[2], m_p[3], m_p[4]);
 e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[5], m_p[6], m_p[7], m_p[8]);
 e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[9], m_p[10], m_p[11], m_p[12]);
}

	private: System::Void buttonInc_Click(System::Object^ sender, System::EventArgs^ e)  // увеличение
	{
		if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
			return;
		t = Convert::ToDouble(textBoxCh->Text);
		Complex* tmp = new Complex();
		String^ s = textBoxInc->Text;
		if (textBoxInc->Text->Length < 1)
			return;
		String^ token1 = s->Split('+')[0]; // 0- до +     1- после
		String^ token2 = s->Split('*')[1];
		double r = Convert::ToDouble(token1);
		double i = Convert::ToDouble(token2);
		tmp->setall(r, i);
		p = Convert::ToDouble(textBoxMas->Text);
		switch (p)
		{
		case 1:
		{
			(*a)[t] += *tmp;
			return;
		}
		case 2:
		{
			(*b)[t] += *tmp;
			return;
		}
		}
	}
private: System::Void buttonPrint_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxCh->Text->Length < 1)
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	switch (p)
	{
	case 1:
	{
		m_p[3] = (111 + Convert::ToInt32((*a)[t].getre())) * 5;
		m_p[4] = (111 - Convert::ToInt32((*a)[t].getim())) * 5;
		return;
	}
	case 2:
	{
		m_p[3] = (111 + Convert::ToInt32((*b)[t].getre())) * 5;
		m_p[4] = (111 - Convert::ToInt32((*b)[t].getim())) * 5;
		return;
	}
	}
	m_p[1] = 111;
	m_p[2] = 111;
	
	m_p[5] = 111;
	m_p[6] = 0;
	m_p[7] = 111;
	m_p[8] = 222;
	m_p[9] = 0;
	m_p[10] = 111;
	m_p[11] = 222;
	m_p[12] = 111;
	pictureBox1->Refresh();
}
private: System::Void buttonSum_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	Complex* tmp = new Complex();
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		tmp = (*a)[t] + (*a)[g];
	}
	else
		if (p == o == 2)
		{
			tmp = (*b)[t] + (*b)[g];
		}
		else
			if (p > o)
			{
				tmp = (*a)[t] + (*b)[g];
			}
			else
			{
				tmp = (*b)[t] + (*a)[g];
			}
	textBoxSum->Text = tmp->getre() + "+" + "i" + "*" + tmp->getim();
}
private: System::Void buttonDifr_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	Complex* tmp = new Complex();
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		tmp = (*a)[t] - (*a)[g];
	}
	else
		if (p == o == 2)
		{
			tmp = (*b)[t] - (*b)[g];
		}
		else
			if (p > o)
			{
				tmp = (*a)[t] - (*b)[g];
			}
			else
			{
				tmp = (*b)[t] - (*a)[g];
			}
	textBoxDifr->Text = tmp->getre() + "+" + "i" + "*" + tmp->getim();
}
private: System::Void buttonProd_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	Complex* tmp = new Complex();
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		tmp = (*a)[t] * (*a)[g];
	}
	else
		if (p == o == 2)
		{
			tmp = (*b)[t] * (*b)[g];
		}
		else
			if (p > o)
			{
				tmp = (*a)[t] * (*b)[g];
			}
			else
			{
				tmp = (*b)[t] * (*a)[g];
			}
	textBoxProd->Text = tmp->getre() + "+" + "i" + "*" + tmp->getim();
}
private: System::Void buttonQuo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	Complex* tmp = new Complex();
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		tmp = (*a)[t] / (*a)[g];
	}
	else
		if (p == o == 2)
		{
			tmp = (*b)[t] / (*b)[g];
		}
		else
			if (p > o)
			{
				tmp = (*a)[t] / (*b)[g];
			}
			else
			{
				tmp = (*b)[t] / (*a)[g];
			}
	textBoxQuo->Text = tmp->getre() + "+" + "i" + "*" + tmp->getim();
}
private: System::Void buttonAbove_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		if ((*a)[t] > (*a)[g])
		{
			textBoxAbove->Text = "True";
			return;
		}
		textBoxAbove->Text = "False";
	}
	else
		if (p == o == 2)
		{
			if ((*b)[t] > (*b)[g])
			{
				textBoxAbove->Text = "True";
				return;
			}
			textBoxAbove->Text = "False";
		}
		else
			if (p > o)
			{
				if ((*a)[t] > (*b)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
			else
			{
				if ((*b)[t] > (*a)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
}
private: System::Void buttonLess_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		if ((*a)[t] < (*a)[g])
		{
			textBoxAbove->Text = "True";
			return;
		}
		textBoxAbove->Text = "False";
	}
	else
		if (p == o == 2)
		{
			if ((*b)[t] < (*b)[g])
			{
				textBoxAbove->Text = "True";
				return;
			}
			textBoxAbove->Text = "False";
		}
		else
			if (p > o)
			{
				if ((*a)[t] < (*b)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
			else
			{
				if ((*b)[t] < (*a)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
}
private: System::Void buttonComp_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		if ((*a)[t] == (*a)[g])
		{
			textBoxAbove->Text = "True";
			return;
		}
		textBoxAbove->Text = "False";
	}
	else
		if (p == o == 2)
		{
			if ((*b)[t] == (*b)[g])
			{
				textBoxAbove->Text = "True";
				return;
			}
			textBoxAbove->Text = "False";
		}
		else
			if (p > o)
			{
				if ((*a)[t] == (*b)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
			else
			{
				if ((*b)[t] == (*a)[g])
				{
					textBoxAbove->Text = "True";
					return;
				}
				textBoxAbove->Text = "False";
			}
}
private: System::Void buttonEqa_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	/*if (a->getSize() > b->getSize())
		i = b->getSize();
	else
		i = a->getSize();*/

	if (p == o == 1)
	{
		(*a)[t] = (*a)[g];
	}
	else
		if (p == o == 2)
		{
			(*b)[t] = (*b)[g];
		}
		else
			if (p > o)
			{
				(*a)[t] = (*b)[g];
			}
			else
			{
				(*b)[t] = (*a)[g];
			}
	
}
private: System::Void buttonEqb_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBoxCh->Text->Length < 1) || (textBoxChB->Text->Length < 1))
		return;
	t = Convert::ToDouble(textBoxCh->Text);
	g = Convert::ToDouble(textBoxChB->Text);
	p = Convert::ToDouble(textBoxMas->Text);
	o = Convert::ToDouble(textBoxMasB->Text);
	if (p == o == 1)
	{
		(*a)[t] = (*a)[g];
	}
	else
		if (p == o == 2)
		{
			(*b)[t] = (*b)[g];
		}
		else
			if (p > o)
			{
				(*a)[t] = (*b)[g];
			}
			else
			{
				(*b)[t] = (*a)[g];
			}
}
private: System::Void buttonSetmas_Click(System::Object^ sender, System::EventArgs^ e)
{
	t = Convert::ToDouble(textBoxMasnum->Text);
	g = Convert::ToDouble(textBoxMassize->Text);
	unsigned int r = 0;
	unsigned int f = 0;
	String^ *s;
	s = new String^();
 	if (t == 1)
	{
		a->setSize(g);
		for (i = 0; i < g; i++)
		{
			r = rand();
			f = rand();
			(*a)[i].setall(r, f);
		}
		for (i = 0; i < g; i++)
		{
			*s = Convert::ToString(i);
			(*a)[i].setid(s);
		}
	}
	else
		if (t == 2)
		{
			b->setSize(g);
			for (i = 0; i < g; i++)
			{
				r = rand();
				f = rand();
				(*b)[i].setall(r, f);
			}
			for (i = 0; i < g; i++)
			{
				*s = Convert::ToString(i);
				(*b)[i].setid(s);
			}
		}
		else
			return;
}
private: System::Void buttonSetStep_Click(System::Object^ sender, System::EventArgs^ e) 
{
	t = Convert::ToDouble(textBoxMasnum->Text);
	g = Convert::ToDouble(textBoxMassize->Text);
	String^* s;
	if (t == 1)
	{
		a->setSize(g);
		a = new ComplexArr(g);
		for (i = 0; i < g; i++)
		{
			(*a)[i].setre(i+1);
			(*a)[i].setim(i+2);
		}
		for (i = 0; i < g; i++)
		{
			*s = Convert::ToString(i);
			(*a)[i].setid(s);
		}
	}
	else
		if (t == 2)
		{
			b->setSize(g);
			b = new ComplexArr(g);
			for (i = 0; i < g; i++)
			{
				(*b)[i].setre(i+1);
				(*b)[i].setim(i+2);
			}
			for (i = 0; i < g; i++)
			{
				*s = Convert::ToString(i);
				(*a)[i].setid(s);
			}
		}
		else
			return;
}
private: System::Void buttonEQ_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxEQ1->Text->Length < 1 || textBoxEQ2->Text->Length < 1)
		return;
	if (Convert::ToInt32(textBoxEQ1) == 1 && Convert::ToInt32(textBoxEQ2) != 1)
		a = b;
	else
		if (Convert::ToInt32(textBoxEQ1) == 2 && Convert::ToInt32(textBoxEQ2) != 2)
			b = a;
		else
			return;
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxClear->Text->Length < 1)
		return;
	if (Convert::ToInt32(textBoxClear) == 1)
		a->Clear();
	else
		if (Convert::ToInt32(textBoxClear) == 2)
			b->Clear();
		else
			return;
}
};
}