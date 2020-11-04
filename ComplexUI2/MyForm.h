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

	int m_p[4];

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//float x, c, r, i;
		Complex* a;
		Complex* b;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			a = new Complex();
			b = new Complex();
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

	private: System::Windows::Forms::Label^ label4;
	public:
	private: System::Windows::Forms::TextBox^ textBoxCombb;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxImagb;
	private: System::Windows::Forms::TextBox^ textBoxRealb;
	private: System::Windows::Forms::TextBox^ textBoxPfaseb;
	private: System::Windows::Forms::TextBox^ textBoxModb;
	private: System::Windows::Forms::TextBox^ textBoxShowb;

	private: System::Windows::Forms::Button^ buttonInc;
	public:
	private: System::Windows::Forms::Button^ buttonSum;
	private: System::Windows::Forms::Button^ buttonLess;
	private: System::Windows::Forms::Button^ buttonAbove;
	private: System::Windows::Forms::Button^ buttonComp;
	private: System::Windows::Forms::Button^ buttonEq;
	private: System::Windows::Forms::TextBox^ textBoxInc;
	private: System::Windows::Forms::TextBox^ textBoxComp;
	private: System::Windows::Forms::TextBox^ textBoxLess;
	private: System::Windows::Forms::TextBox^ textBoxAbove;
	private: System::Windows::Forms::TextBox^ textBoxEq;
	private: System::Windows::Forms::TextBox^ textBoxSum;
	private: System::Windows::Forms::TextBox^ textBoxDifr;


	public:
	private: System::Windows::Forms::Button^ buttonDifr;
	private: System::Windows::Forms::TextBox^ textBoxProd;

	private: System::Windows::Forms::Button^ buttonProd;
	private: System::Windows::Forms::TextBox^ textBoxQuo;

	private: System::Windows::Forms::Button^ buttonQuo;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: System::Windows::Forms::Button^ buttonPrint;
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
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->buttonAbs = (gcnew System::Windows::Forms::Button());
			this->buttonPhase = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCombb = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxImagb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRealb = (gcnew System::Windows::Forms::TextBox());
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
			this->textBoxPfaseb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxShowb = (gcnew System::Windows::Forms::TextBox());
			this->buttonInc = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonLess = (gcnew System::Windows::Forms::Button());
			this->buttonAbove = (gcnew System::Windows::Forms::Button());
			this->buttonComp = (gcnew System::Windows::Forms::Button());
			this->buttonEq = (gcnew System::Windows::Forms::Button());
			this->textBoxInc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxComp = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLess = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAbove = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEq = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDifr = (gcnew System::Windows::Forms::TextBox());
			this->buttonDifr = (gcnew System::Windows::Forms::Button());
			this->textBoxProd = (gcnew System::Windows::Forms::TextBox());
			this->buttonProd = (gcnew System::Windows::Forms::Button());
			this->textBoxQuo = (gcnew System::Windows::Forms::TextBox());
			this->buttonQuo = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
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
			this->buttonShow->Location = System::Drawing::Point(18, 182);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(267, 30);
			this->buttonShow->TabIndex = 1;
			this->buttonShow->Text = L"Вывести число";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &MyForm::buttonShow_Click);
			// 
			// buttonAbs
			// 
			this->buttonAbs->Location = System::Drawing::Point(18, 218);
			this->buttonAbs->Name = L"buttonAbs";
			this->buttonAbs->Size = System::Drawing::Size(267, 26);
			this->buttonAbs->TabIndex = 2;
			this->buttonAbs->Text = L"Вычеслить модуль";
			this->buttonAbs->UseVisualStyleBackColor = true;
			this->buttonAbs->Click += gcnew System::EventHandler(this, &MyForm::buttonAbs_Click);
			// 
			// buttonPhase
			// 
			this->buttonPhase->Location = System::Drawing::Point(18, 250);
			this->buttonPhase->Name = L"buttonPhase";
			this->buttonPhase->Size = System::Drawing::Size(267, 30);
			this->buttonPhase->TabIndex = 3;
			this->buttonPhase->Text = L"Вычеслить фазу";
			this->buttonPhase->UseVisualStyleBackColor = true;
			this->buttonPhase->Click += gcnew System::EventHandler(this, &MyForm::buttonPhase_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxCombb);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxImagb);
			this->groupBox1->Controls->Add(this->textBoxRealb);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxComb);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxImag);
			this->groupBox1->Controls->Add(this->textBoxReal);
			this->groupBox1->Controls->Add(this->buttonEnter);
			this->groupBox1->Location = System::Drawing::Point(12, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1094, 123);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задать число";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(706, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"re+im";
			// 
			// textBoxCombb
			// 
			this->textBoxCombb->Location = System::Drawing::Point(744, 89);
			this->textBoxCombb->Name = L"textBoxCombb";
			this->textBoxCombb->Size = System::Drawing::Size(339, 20);
			this->textBoxCombb->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(686, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Imaginary";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(709, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Real";
			// 
			// textBoxImagb
			// 
			this->textBoxImagb->Location = System::Drawing::Point(744, 55);
			this->textBoxImagb->Name = L"textBoxImagb";
			this->textBoxImagb->Size = System::Drawing::Size(339, 20);
			this->textBoxImagb->TabIndex = 8;
			// 
			// textBoxRealb
			// 
			this->textBoxRealb->Location = System::Drawing::Point(744, 19);
			this->textBoxRealb->Name = L"textBoxRealb";
			this->textBoxRealb->Size = System::Drawing::Size(339, 20);
			this->textBoxRealb->TabIndex = 7;
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
			this->textBoxComb->Location = System::Drawing::Point(335, 89);
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
			this->textBoxReal->Location = System::Drawing::Point(335, 19);
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
			this->textBoxShow->Location = System::Drawing::Point(347, 188);
			this->textBoxShow->Name = L"textBoxShow";
			this->textBoxShow->Size = System::Drawing::Size(339, 20);
			this->textBoxShow->TabIndex = 6;
			this->textBoxShow->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxShow_TextChanged);
			// 
			// textBoxMod
			// 
			this->textBoxMod->Location = System::Drawing::Point(347, 222);
			this->textBoxMod->Name = L"textBoxMod";
			this->textBoxMod->Size = System::Drawing::Size(339, 20);
			this->textBoxMod->TabIndex = 7;
			// 
			// textBoxPfase
			// 
			this->textBoxPfase->Location = System::Drawing::Point(347, 256);
			this->textBoxPfase->Name = L"textBoxPfase";
			this->textBoxPfase->Size = System::Drawing::Size(339, 20);
			this->textBoxPfase->TabIndex = 8;
			// 
			// textBoxPfaseb
			// 
			this->textBoxPfaseb->Location = System::Drawing::Point(756, 256);
			this->textBoxPfaseb->Name = L"textBoxPfaseb";
			this->textBoxPfaseb->Size = System::Drawing::Size(339, 20);
			this->textBoxPfaseb->TabIndex = 11;
			// 
			// textBoxModb
			// 
			this->textBoxModb->Location = System::Drawing::Point(756, 224);
			this->textBoxModb->Name = L"textBoxModb";
			this->textBoxModb->Size = System::Drawing::Size(339, 20);
			this->textBoxModb->TabIndex = 10;
			// 
			// textBoxShowb
			// 
			this->textBoxShowb->Location = System::Drawing::Point(756, 188);
			this->textBoxShowb->Name = L"textBoxShowb";
			this->textBoxShowb->Size = System::Drawing::Size(339, 20);
			this->textBoxShowb->TabIndex = 9;
			// 
			// buttonInc
			// 
			this->buttonInc->Location = System::Drawing::Point(18, 400);
			this->buttonInc->Name = L"buttonInc";
			this->buttonInc->Size = System::Drawing::Size(267, 23);
			this->buttonInc->TabIndex = 12;
			this->buttonInc->Text = L"Увеличить";
			this->buttonInc->UseVisualStyleBackColor = true;
			this->buttonInc->Click += gcnew System::EventHandler(this, &MyForm::buttonInc_Click);
			// 
			// buttonSum
			// 
			this->buttonSum->Location = System::Drawing::Point(18, 429);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(267, 23);
			this->buttonSum->TabIndex = 13;
			this->buttonSum->Text = L"Сумма";
			this->buttonSum->UseVisualStyleBackColor = true;
			// 
			// buttonLess
			// 
			this->buttonLess->Location = System::Drawing::Point(476, 429);
			this->buttonLess->Name = L"buttonLess";
			this->buttonLess->Size = System::Drawing::Size(267, 23);
			this->buttonLess->TabIndex = 14;
			this->buttonLess->Text = L"Сравнение <";
			this->buttonLess->UseVisualStyleBackColor = true;
			// 
			// buttonAbove
			// 
			this->buttonAbove->Location = System::Drawing::Point(476, 400);
			this->buttonAbove->Name = L"buttonAbove";
			this->buttonAbove->Size = System::Drawing::Size(267, 23);
			this->buttonAbove->TabIndex = 15;
			this->buttonAbove->Text = L"Сравнение >";
			this->buttonAbove->UseVisualStyleBackColor = true;
			// 
			// buttonComp
			// 
			this->buttonComp->Location = System::Drawing::Point(476, 458);
			this->buttonComp->Name = L"buttonComp";
			this->buttonComp->Size = System::Drawing::Size(267, 24);
			this->buttonComp->TabIndex = 16;
			this->buttonComp->Text = L"Сравнение ==";
			this->buttonComp->UseVisualStyleBackColor = true;
			// 
			// buttonEq
			// 
			this->buttonEq->Location = System::Drawing::Point(476, 490);
			this->buttonEq->Name = L"buttonEq";
			this->buttonEq->Size = System::Drawing::Size(267, 23);
			this->buttonEq->TabIndex = 17;
			this->buttonEq->Text = L"Присвоение";
			this->buttonEq->UseVisualStyleBackColor = true;
			// 
			// textBoxInc
			// 
			this->textBoxInc->Location = System::Drawing::Point(292, 403);
			this->textBoxInc->Name = L"textBoxInc";
			this->textBoxInc->Size = System::Drawing::Size(178, 20);
			this->textBoxInc->TabIndex = 18;
			this->textBoxInc->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxInc_TextChanged);
			// 
			// textBoxComp
			// 
			this->textBoxComp->Location = System::Drawing::Point(749, 462);
			this->textBoxComp->Name = L"textBoxComp";
			this->textBoxComp->Size = System::Drawing::Size(178, 20);
			this->textBoxComp->TabIndex = 19;
			// 
			// textBoxLess
			// 
			this->textBoxLess->Location = System::Drawing::Point(749, 432);
			this->textBoxLess->Name = L"textBoxLess";
			this->textBoxLess->Size = System::Drawing::Size(178, 20);
			this->textBoxLess->TabIndex = 20;
			// 
			// textBoxAbove
			// 
			this->textBoxAbove->Location = System::Drawing::Point(749, 403);
			this->textBoxAbove->Name = L"textBoxAbove";
			this->textBoxAbove->Size = System::Drawing::Size(178, 20);
			this->textBoxAbove->TabIndex = 21;
			// 
			// textBoxEq
			// 
			this->textBoxEq->Location = System::Drawing::Point(749, 492);
			this->textBoxEq->Name = L"textBoxEq";
			this->textBoxEq->Size = System::Drawing::Size(178, 20);
			this->textBoxEq->TabIndex = 22;
			// 
			// textBoxSum
			// 
			this->textBoxSum->Location = System::Drawing::Point(292, 432);
			this->textBoxSum->Name = L"textBoxSum";
			this->textBoxSum->Size = System::Drawing::Size(178, 20);
			this->textBoxSum->TabIndex = 23;
			// 
			// textBoxDifr
			// 
			this->textBoxDifr->Location = System::Drawing::Point(292, 461);
			this->textBoxDifr->Name = L"textBoxDifr";
			this->textBoxDifr->Size = System::Drawing::Size(178, 20);
			this->textBoxDifr->TabIndex = 25;
			// 
			// buttonDifr
			// 
			this->buttonDifr->Location = System::Drawing::Point(18, 458);
			this->buttonDifr->Name = L"buttonDifr";
			this->buttonDifr->Size = System::Drawing::Size(267, 23);
			this->buttonDifr->TabIndex = 24;
			this->buttonDifr->Text = L"Разность";
			this->buttonDifr->UseVisualStyleBackColor = true;
			// 
			// textBoxProd
			// 
			this->textBoxProd->Location = System::Drawing::Point(292, 490);
			this->textBoxProd->Name = L"textBoxProd";
			this->textBoxProd->Size = System::Drawing::Size(178, 20);
			this->textBoxProd->TabIndex = 27;
			// 
			// buttonProd
			// 
			this->buttonProd->Location = System::Drawing::Point(18, 487);
			this->buttonProd->Name = L"buttonProd";
			this->buttonProd->Size = System::Drawing::Size(267, 23);
			this->buttonProd->TabIndex = 26;
			this->buttonProd->Text = L"Произведение";
			this->buttonProd->UseVisualStyleBackColor = true;
			// 
			// textBoxQuo
			// 
			this->textBoxQuo->Location = System::Drawing::Point(292, 519);
			this->textBoxQuo->Name = L"textBoxQuo";
			this->textBoxQuo->Size = System::Drawing::Size(178, 20);
			this->textBoxQuo->TabIndex = 29;
			// 
			// buttonQuo
			// 
			this->buttonQuo->Location = System::Drawing::Point(18, 516);
			this->buttonQuo->Name = L"buttonQuo";
			this->buttonQuo->Size = System::Drawing::Size(267, 23);
			this->buttonQuo->TabIndex = 28;
			this->buttonQuo->Text = L"Часное";
			this->buttonQuo->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(937, 317);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(237, 222);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(990, 565);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(116, 33);
			this->buttonPrint->TabIndex = 31;
			this->buttonPrint->Text = L"Нарисовать";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MyForm::buttonPrint_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 625);
			this->Controls->Add(this->buttonPrint);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxQuo);
			this->Controls->Add(this->buttonQuo);
			this->Controls->Add(this->textBoxProd);
			this->Controls->Add(this->buttonProd);
			this->Controls->Add(this->textBoxDifr);
			this->Controls->Add(this->buttonDifr);
			this->Controls->Add(this->textBoxSum);
			this->Controls->Add(this->textBoxEq);
			this->Controls->Add(this->textBoxAbove);
			this->Controls->Add(this->textBoxLess);
			this->Controls->Add(this->textBoxComp);
			this->Controls->Add(this->textBoxInc);
			this->Controls->Add(this->buttonEq);
			this->Controls->Add(this->buttonComp);
			this->Controls->Add(this->buttonAbove);
			this->Controls->Add(this->buttonLess);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->buttonInc);
			this->Controls->Add(this->textBoxPfaseb);
			this->Controls->Add(this->textBoxModb);
			this->Controls->Add(this->textBoxShowb);
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
	/*try
	{*/
	// a
	if ((textBoxReal->Text->Length != 0) && (textBoxImag->Text->Length != 0) && (textBoxComb->Text->Length < 1))
	{
		double rr = Convert::ToDouble(textBoxReal->Text);
		double ii = Convert::ToDouble(textBoxImag->Text);
		a->setall(rr, ii);
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
		a->setall(r, i);
	}
		//b
		if ((textBoxRealb->Text->Length != 0) && (textBoxImag->Text->Length != 0) && (textBoxCombb->Text->Length < 1))
		{
			double rr = Convert::ToDouble(textBoxRealb->Text);
			double ii = Convert::ToDouble(textBoxImagb->Text);
			b->setall(rr, ii);
			return;
		}
		else
			if (textBoxCombb->Text->Length < 1)
				return;
		String^ s = textBoxCombb->Text;   //a+i*5
		String^ delimiter = "+";
		String^ token1 = s->Split('+')[0]; // 0- до +     1- после
		String^ token2 = s->Split('*')[1];
		double r = Convert::ToDouble(token1);
		double i = Convert::ToDouble(token2);
		b->setall(r, i);
		// длинна всей строки - ->Lenght
	    //String^ x = textBoxReal->Text;
		//float r = float::Parse(textBoxReal->Text);
		//String^ c = textBoxImag->Text;
		//float i = float::Parse(textBoxImag->Text);
	/*catch () {}*/
}
private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxShow->Text = a->getre() + "+" + "i" + "*" + a->getim();
	textBoxShowb->Text = b->getre() + "+" + "i" + "*" + b->getim();
}
private: System::Void buttonAbs_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxMod->Text = a->abs();
	textBoxModb->Text = b->abs();
}
private: System::Void buttonPhase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxPfase->Text = a->phase();
	textBoxPfaseb->Text = b->phase();
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
}

private: System::Void buttonInc_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Complex* tmp = new Complex();
	String^ s = textBoxInc->Text;
	if (textBoxInc->Text->Length < 1)
		return;
	String^ token1 = s->Split('+')[0]; // 0- до +     1- после
	String^ token2 = s->Split('*')[1];
	double r = Convert::ToDouble(token1);
	double i = Convert::ToDouble(token2);
	tmp->setall(r, i);
	*a += *tmp;
}
private: System::Void buttonPrint_Click(System::Object^ sender, System::EventArgs^ e)
{
	m_p[1] = 0;
	m_p[2] = 0;
	m_p[3] = Convert::ToInt32(a->getre());
	m_p[4] = Convert::ToInt32(a->getim());
	pictureBox1->Refresh();
}
};
}
