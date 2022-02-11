#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Titre_COCOMO;
	private: System::Windows::Forms::GroupBox^ groupBoxEAF;
	private: System::Windows::Forms::GroupBox^ groupBoxResultat;
	private: System::Windows::Forms::Button^ btnCalcul;
	private: System::Windows::Forms::GroupBox^ groupBoxVaraible;
	private: System::Windows::Forms::Label^ labelEffort;
	private: System::Windows::Forms::TextBox^ textBoxEffort;
	private: System::Windows::Forms::TextBox^ textBoxDevTime;
	private: System::Windows::Forms::Label^ labelDevTime;
	private: System::Windows::Forms::Label^ labelNumberPerson;
	private: System::Windows::Forms::TextBox^ textBoxNumberPerson;
	private: System::Windows::Forms::Label^ labelVeryHigh;
	private: System::Windows::Forms::Label^ labelHigh;
	private: System::Windows::Forms::Label^ labelNORMAL;
	private: System::Windows::Forms::Label^ labelLow;
	private: System::Windows::Forms::Label^ labelVeryLow;
	private: System::Windows::Forms::Label^ labelSalaire;
	private: System::Windows::Forms::Label^ labelKLOC;
	private: System::Windows::Forms::TextBox^ textBoxWage;
	private: System::Windows::Forms::TextBox^ textBoxKLOC;
	private: System::Windows::Forms::TextBox^ textBoxError;
	protected:





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Titre_COCOMO = (gcnew System::Windows::Forms::Label());
			this->groupBoxEAF = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxResultat = (gcnew System::Windows::Forms::GroupBox());
			this->btnCalcul = (gcnew System::Windows::Forms::Button());
			this->groupBoxVaraible = (gcnew System::Windows::Forms::GroupBox());
			this->labelEffort = (gcnew System::Windows::Forms::Label());
			this->textBoxEffort = (gcnew System::Windows::Forms::TextBox());
			this->labelDevTime = (gcnew System::Windows::Forms::Label());
			this->textBoxDevTime = (gcnew System::Windows::Forms::TextBox());
			this->labelNumberPerson = (gcnew System::Windows::Forms::Label());
			this->textBoxNumberPerson = (gcnew System::Windows::Forms::TextBox());
			this->labelVeryLow = (gcnew System::Windows::Forms::Label());
			this->labelLow = (gcnew System::Windows::Forms::Label());
			this->labelNORMAL = (gcnew System::Windows::Forms::Label());
			this->labelHigh = (gcnew System::Windows::Forms::Label());
			this->labelVeryHigh = (gcnew System::Windows::Forms::Label());
			this->labelKLOC = (gcnew System::Windows::Forms::Label());
			this->labelSalaire = (gcnew System::Windows::Forms::Label());
			this->textBoxKLOC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWage = (gcnew System::Windows::Forms::TextBox());
			this->textBoxError = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxEAF->SuspendLayout();
			this->groupBoxResultat->SuspendLayout();
			this->groupBoxVaraible->SuspendLayout();
			this->SuspendLayout();
			// 
			// Titre_COCOMO
			// 
			this->Titre_COCOMO->AutoSize = true;
			this->Titre_COCOMO->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titre_COCOMO->Location = System::Drawing::Point(12, 9);
			this->Titre_COCOMO->Name = L"Titre_COCOMO";
			this->Titre_COCOMO->Size = System::Drawing::Size(581, 54);
			this->Titre_COCOMO->TabIndex = 0;
			this->Titre_COCOMO->Text = L"The COnstructive COst MOdel";
			// 
			// groupBoxEAF
			// 
			this->groupBoxEAF->Controls->Add(this->labelVeryHigh);
			this->groupBoxEAF->Controls->Add(this->labelHigh);
			this->groupBoxEAF->Controls->Add(this->labelNORMAL);
			this->groupBoxEAF->Controls->Add(this->labelLow);
			this->groupBoxEAF->Controls->Add(this->labelVeryLow);
			this->groupBoxEAF->Location = System::Drawing::Point(21, 93);
			this->groupBoxEAF->Name = L"groupBoxEAF";
			this->groupBoxEAF->Size = System::Drawing::Size(734, 903);
			this->groupBoxEAF->TabIndex = 1;
			this->groupBoxEAF->TabStop = false;
			this->groupBoxEAF->Text = L"Effort Adjustement Factor";
			// 
			// groupBoxResultat
			// 
			this->groupBoxResultat->Controls->Add(this->labelNumberPerson);
			this->groupBoxResultat->Controls->Add(this->textBoxNumberPerson);
			this->groupBoxResultat->Controls->Add(this->textBoxDevTime);
			this->groupBoxResultat->Controls->Add(this->labelDevTime);
			this->groupBoxResultat->Controls->Add(this->textBoxEffort);
			this->groupBoxResultat->Controls->Add(this->labelEffort);
			this->groupBoxResultat->Location = System::Drawing::Point(772, 93);
			this->groupBoxResultat->Name = L"groupBoxResultat";
			this->groupBoxResultat->Size = System::Drawing::Size(374, 229);
			this->groupBoxResultat->TabIndex = 2;
			this->groupBoxResultat->TabStop = false;
			this->groupBoxResultat->Text = L"Results";
			// 
			// btnCalcul
			// 
			this->btnCalcul->Location = System::Drawing::Point(808, 368);
			this->btnCalcul->Name = L"btnCalcul";
			this->btnCalcul->Size = System::Drawing::Size(288, 65);
			this->btnCalcul->TabIndex = 3;
			this->btnCalcul->Text = L"Calculate";
			this->btnCalcul->UseVisualStyleBackColor = true;
			this->btnCalcul->Click += gcnew System::EventHandler(this, &Form1::BtnCalculateClick);
			// 
			// groupBoxVaraible
			// 
			this->groupBoxVaraible->Controls->Add(this->textBoxWage);
			this->groupBoxVaraible->Controls->Add(this->textBoxKLOC);
			this->groupBoxVaraible->Controls->Add(this->labelSalaire);
			this->groupBoxVaraible->Controls->Add(this->labelKLOC);
			this->groupBoxVaraible->Location = System::Drawing::Point(772, 476);
			this->groupBoxVaraible->Name = L"groupBoxVaraible";
			this->groupBoxVaraible->Size = System::Drawing::Size(356, 163);
			this->groupBoxVaraible->TabIndex = 4;
			this->groupBoxVaraible->TabStop = false;
			this->groupBoxVaraible->Text = L"Variables";
			// 
			// labelEffort
			// 
			this->labelEffort->AutoSize = true;
			this->labelEffort->Location = System::Drawing::Point(6, 56);
			this->labelEffort->Name = L"labelEffort";
			this->labelEffort->Size = System::Drawing::Size(49, 20);
			this->labelEffort->TabIndex = 0;
			this->labelEffort->Text = L"Effort";
			// 
			// textBoxEffort
			// 
			this->textBoxEffort->Location = System::Drawing::Point(61, 53);
			this->textBoxEffort->Name = L"textBoxEffort";
			this->textBoxEffort->Size = System::Drawing::Size(190, 26);
			this->textBoxEffort->TabIndex = 1;
			// 
			// labelDevTime
			// 
			this->labelDevTime->AutoSize = true;
			this->labelDevTime->Location = System::Drawing::Point(6, 113);
			this->labelDevTime->Name = L"labelDevTime";
			this->labelDevTime->Size = System::Drawing::Size(155, 20);
			this->labelDevTime->TabIndex = 2;
			this->labelDevTime->Text = L"Developpement time";
			// 
			// textBoxDevTime
			// 
			this->textBoxDevTime->Location = System::Drawing::Point(160, 110);
			this->textBoxDevTime->Name = L"textBoxDevTime";
			this->textBoxDevTime->Size = System::Drawing::Size(190, 26);
			this->textBoxDevTime->TabIndex = 3;
			// 
			// labelNumberPerson
			// 
			this->labelNumberPerson->AutoSize = true;
			this->labelNumberPerson->Location = System::Drawing::Point(6, 172);
			this->labelNumberPerson->Name = L"labelNumberPerson";
			this->labelNumberPerson->Size = System::Drawing::Size(249, 20);
			this->labelNumberPerson->TabIndex = 4;
			this->labelNumberPerson->Text = L"Most effective number of persons ";
			// 
			// textBoxNumberPerson
			// 
			this->textBoxNumberPerson->Location = System::Drawing::Point(251, 169);
			this->textBoxNumberPerson->Name = L"textBoxNumberPerson";
			this->textBoxNumberPerson->Size = System::Drawing::Size(117, 26);
			this->textBoxNumberPerson->TabIndex = 5;
			// 
			// labelVeryLow
			// 
			this->labelVeryLow->AutoSize = true;
			this->labelVeryLow->Location = System::Drawing::Point(336, 22);
			this->labelVeryLow->Name = L"labelVeryLow";
			this->labelVeryLow->Size = System::Drawing::Size(70, 20);
			this->labelVeryLow->TabIndex = 1;
			this->labelVeryLow->Text = L"VeryLow";
			// 
			// labelLow
			// 
			this->labelLow->AutoSize = true;
			this->labelLow->Location = System::Drawing::Point(412, 22);
			this->labelLow->Name = L"labelLow";
			this->labelLow->Size = System::Drawing::Size(38, 20);
			this->labelLow->TabIndex = 2;
			this->labelLow->Text = L"Low";
			// 
			// labelNORMAL
			// 
			this->labelNORMAL->AutoSize = true;
			this->labelNORMAL->Location = System::Drawing::Point(456, 22);
			this->labelNORMAL->Name = L"labelNORMAL";
			this->labelNORMAL->Size = System::Drawing::Size(77, 20);
			this->labelNORMAL->TabIndex = 3;
			this->labelNORMAL->Text = L"NORMAL";
			// 
			// labelHigh
			// 
			this->labelHigh->AutoSize = true;
			this->labelHigh->Location = System::Drawing::Point(539, 22);
			this->labelHigh->Name = L"labelHigh";
			this->labelHigh->Size = System::Drawing::Size(42, 20);
			this->labelHigh->TabIndex = 4;
			this->labelHigh->Text = L"High";
			// 
			// labelVeryHigh
			// 
			this->labelVeryHigh->AutoSize = true;
			this->labelVeryHigh->Location = System::Drawing::Point(587, 22);
			this->labelVeryHigh->Name = L"labelVeryHigh";
			this->labelVeryHigh->Size = System::Drawing::Size(74, 20);
			this->labelVeryHigh->TabIndex = 5;
			this->labelVeryHigh->Text = L"VeryHigh";
			// 
			// labelKLOC
			// 
			this->labelKLOC->AutoSize = true;
			this->labelKLOC->Location = System::Drawing::Point(6, 41);
			this->labelKLOC->Name = L"labelKLOC";
			this->labelKLOC->Size = System::Drawing::Size(77, 30);
			this->labelKLOC->TabIndex = 6;
			this->labelKLOC->Text = L"KLOC";
			// 
			// labelSalaire
			// 
			this->labelSalaire->AutoSize = true;
			this->labelSalaire->Location = System::Drawing::Point(6, 98);
			this->labelSalaire->Name = L"labelSalaire";
			this->labelSalaire->Size = System::Drawing::Size(77, 30);
			this->labelSalaire->TabIndex = 7;
			this->labelSalaire->Text = L"Wage";
			// 
			// textBoxKLOC
			// 
			this->textBoxKLOC->Location = System::Drawing::Point(61, 41);
			this->textBoxKLOC->Name = L"textBoxKLOC";
			this->textBoxKLOC->Size = System::Drawing::Size(190, 26);
			this->textBoxKLOC->TabIndex = 8;
			// 
			// textBoxWage
			// 
			this->textBoxWage->Location = System::Drawing::Point(61, 95);
			this->textBoxWage->Name = L"textBoxWage";
			this->textBoxWage->Size = System::Drawing::Size(190, 26);
			this->textBoxWage->TabIndex = 9;
			// 
			// textBoxError
			// 
			this->textBoxError->Location = System::Drawing::Point(855, 970);
			this->textBoxError->Name = L"textBoxError";
			this->textBoxError->Size = System::Drawing::Size(282, 26);
			this->textBoxError->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 1008);
			this->Controls->Add(this->textBoxError);
			this->Controls->Add(this->groupBoxVaraible);
			this->Controls->Add(this->btnCalcul);
			this->Controls->Add(this->groupBoxResultat);
			this->Controls->Add(this->groupBoxEAF);
			this->Controls->Add(this->Titre_COCOMO);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBoxEAF->ResumeLayout(false);
			this->groupBoxEAF->PerformLayout();
			this->groupBoxResultat->ResumeLayout(false);
			this->groupBoxResultat->PerformLayout();
			this->groupBoxVaraible->ResumeLayout(false);
			this->groupBoxVaraible->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void BtnCalculateClick(System::Object^ sender, System::EventArgs^ e) {
	textBoxError->Text = "Erreur"; 
}





};
}

