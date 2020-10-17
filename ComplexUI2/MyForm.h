#pragma once

#include "Comlpex.h"

namespace ComplexUI2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//float x, c, r, i;
		Complex* a;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			a = new Complex();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->buttonAbs = (gcnew System::Windows::Forms::Button());
			this->buttonPhase = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxImag = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReal = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->OutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxShow = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMod = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPfase = (gcnew System::Windows::Forms::TextBox());
			this->textBoxComb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonEnter
			// 
			this->buttonEnter->Location = System::Drawing::Point(6, 19);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(267, 90);
			this->buttonEnter->TabIndex = 0;
			this->buttonEnter->Text = L"������ �����";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonEnter_Click);
			// 
			// buttonShow
			// 
			this->buttonShow->Location = System::Drawing::Point(18, 200);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(267, 90);
			this->buttonShow->TabIndex = 1;
			this->buttonShow->Text = L"������� �����";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &MyForm::buttonShow_Click);
			// 
			// buttonAbs
			// 
			this->buttonAbs->Location = System::Drawing::Point(18, 296);
			this->buttonAbs->Name = L"buttonAbs";
			this->buttonAbs->Size = System::Drawing::Size(267, 90);
			this->buttonAbs->TabIndex = 2;
			this->buttonAbs->Text = L"��������� ������";
			this->buttonAbs->UseVisualStyleBackColor = true;
			this->buttonAbs->Click += gcnew System::EventHandler(this, &MyForm::buttonAbs_Click);
			// 
			// buttonPhase
			// 
			this->buttonPhase->Location = System::Drawing::Point(18, 392);
			this->buttonPhase->Name = L"buttonPhase";
			this->buttonPhase->Size = System::Drawing::Size(267, 90);
			this->buttonPhase->TabIndex = 3;
			this->buttonPhase->Text = L"��������� ����";
			this->buttonPhase->UseVisualStyleBackColor = true;
			this->buttonPhase->Click += gcnew System::EventHandler(this, &MyForm::buttonPhase_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxComb);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxImag);
			this->groupBox1->Controls->Add(this->textBoxReal);
			this->groupBox1->Controls->Add(this->buttonEnter);
			this->groupBox1->Location = System::Drawing::Point(12, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(772, 123);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������ �����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Imaginary";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(363, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Real";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBoxImag
			// 
			this->textBoxImag->Location = System::Drawing::Point(398, 55);
			this->textBoxImag->Name = L"textBoxImag";
			this->textBoxImag->Size = System::Drawing::Size(339, 20);
			this->textBoxImag->TabIndex = 2;
			// 
			// textBoxReal
			// 
			this->textBoxReal->Location = System::Drawing::Point(398, 19);
			this->textBoxReal->Name = L"textBoxReal";
			this->textBoxReal->Size = System::Drawing::Size(339, 20);
			this->textBoxReal->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->OutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(796, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// OutToolStripMenuItem
			// 
			this->OutToolStripMenuItem->Name = L"OutToolStripMenuItem";
			this->OutToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->OutToolStripMenuItem->Text = L"�����";
			this->OutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OutToolStripMenuItem_Click);
			// 
			// textBoxShow
			// 
			this->textBoxShow->Location = System::Drawing::Point(410, 236);
			this->textBoxShow->Name = L"textBoxShow";
			this->textBoxShow->Size = System::Drawing::Size(339, 20);
			this->textBoxShow->TabIndex = 6;
			this->textBoxShow->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxShow_TextChanged);
			// 
			// textBoxMod
			// 
			this->textBoxMod->Location = System::Drawing::Point(410, 332);
			this->textBoxMod->Name = L"textBoxMod";
			this->textBoxMod->Size = System::Drawing::Size(339, 20);
			this->textBoxMod->TabIndex = 7;
			// 
			// textBoxPfase
			// 
			this->textBoxPfase->Location = System::Drawing::Point(410, 428);
			this->textBoxPfase->Name = L"textBoxPfase";
			this->textBoxPfase->Size = System::Drawing::Size(339, 20);
			this->textBoxPfase->TabIndex = 8;
			// 
			// textBoxComb
			// 
			this->textBoxComb->Location = System::Drawing::Point(398, 89);
			this->textBoxComb->Name = L"textBoxComb";
			this->textBoxComb->Size = System::Drawing::Size(339, 20);
			this->textBoxComb->TabIndex = 5;
			this->textBoxComb->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxComb_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(360, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"re+im";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 517);
			this->ControlBox = false;
			this->Controls->Add(this->textBoxPfase);
			this->Controls->Add(this->textBoxMod);
			this->Controls->Add(this->textBoxShow);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonPhase);
			this->Controls->Add(this->buttonAbs);
			this->Controls->Add(this->buttonShow);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(812, 556);
			this->MinimumSize = System::Drawing::Size(812, 556);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) 
{
	/*try
	{*/
	if ((textBoxReal->Text->Length != 0) && (textBoxImag->Text->Length != 0))
	{
		double rr = Convert::ToDouble(textBoxReal->Text);
		double ii = Convert::ToDouble(textBoxImag->Text);
		a->setall(rr, ii);
		return;
	}
	else
	if (textBoxComb->Text->Length < 1)
		return;
		String^ s = textBoxComb->Text;   //a+i*5
		String^ delimiter = "+";
		String^ token1 = s->Split('+')[0]; // 0- �� +     1- �����
		String^ token2 = s->Split('*')[1];
		double r = Convert::ToDouble(token1);
		double i = Convert::ToDouble(token2);
		a->setall(r, i);
		// ������ ���� ������ - ->Lenght
	    //String^ x = textBoxReal->Text;
		//float r = float::Parse(textBoxReal->Text);
		//String^ c = textBoxImag->Text;
		//float i = float::Parse(textBoxImag->Text);
	/*catch () {}*/
}
private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxShow->Text = a->getre() + "+" + "i" + "*" + a->getim()  ;

}
private: System::Void buttonAbs_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxMod->Text = a->abs();
}
private: System::Void buttonPhase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBoxPfase->Text = a->phase();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxShow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxComb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
