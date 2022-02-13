#pragma once


#include "../../C_COCOMO/C_CALCUL.h"


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
	private: System::Windows::Forms::Label^ labelFiabilitelogicielle;
	private: System::Windows::Forms::Label^ labelAttributProjet;
	private: System::Windows::Forms::Label^ labelAttributPersonnel;
	private: System::Windows::Forms::Label^ labelAttributMateriel;
	private: System::Windows::Forms::Label^ labelAttributProduit;
	private: System::Windows::Forms::Label^ labelCalendrier;
	private: System::Windows::Forms::Label^ labeloutilslogicielles;
	private: System::Windows::Forms::Label^ labelmethodGenie;
	private: System::Windows::Forms::Label^ labelExpLanguageProg;
	private: System::Windows::Forms::Label^ labelExpEnv;
	private: System::Windows::Forms::Label^ labelCapIngeLogicielle;
	private: System::Windows::Forms::Label^ labelExpApp;
	private: System::Windows::Forms::Label^ labelCapaciteAnalyse;
	private: System::Windows::Forms::Label^ labelDelaiExeReq;
	private: System::Windows::Forms::Label^ labelVolatEnvirennement;
	private: System::Windows::Forms::Label^ labelContrainteMemoir;
	private: System::Windows::Forms::Label^ labelContraintePerfExe;
	private: System::Windows::Forms::Label^ labelComplexiteProduit;
	private: System::Windows::Forms::Label^ labelTailleBDD;
	private: System::Windows::Forms::CheckBox^ checkBoxFiabiliteLogiVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxComplexProduitNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxTailleBDDNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxFiabilitLogiNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxCalendirerNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxUtilisationOutilLogicielleNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxApplicationGenieNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxExpLangProgNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteIngeNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxExpEnviNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxExpAppNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteAnalyseNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxDelaiExeNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxVolatEnvNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxContrainteMemoireNormal;
	private: System::Windows::Forms::CheckBox^ checkBoxContraintePerfExeNormal;
	private: System::Windows::Forms::TextBox^ textBoxTotalCost;
	private: System::Windows::Forms::Label^ labelTotalCost;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::CheckBox^ checkBoxVolatEnvVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxContrainteMemoireVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxContraintePerfExeVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxComplexiteProduitVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxTailleBDDVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCalendrierVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxUtilisationOutilVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxApplicationGenieVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpLangProgVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteIngeVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpEnvironnementVerylow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpApplicationVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteAnalyseVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxDelaiExeVeryLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCalendrierLow;
	private: System::Windows::Forms::CheckBox^ checkBoxUtilisationOutilLogicielLow;
	private: System::Windows::Forms::CheckBox^ checkBoxApplicationGeniLow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpLanguageProgLow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpEnviironnementLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteIngeLow;
	private: System::Windows::Forms::CheckBox^ checkBoxExpAppLow;
	private: System::Windows::Forms::CheckBox^ checkBoxCapaciteAnalyseLow;
	private: System::Windows::Forms::CheckBox^ checkBoxDelaiExeLow;
	private: System::Windows::Forms::CheckBox^ checkBoxVolatEnvLow;
	private: System::Windows::Forms::CheckBox^ checkBoxContrainteMempirLow;
	private: System::Windows::Forms::CheckBox^ checkBoxContraintePerfExeLow;
	private: System::Windows::Forms::CheckBox^ checkBoxComplexiteProduitLow;
	private: System::Windows::Forms::CheckBox^ checkBoxTailleBDDLow;
	private: System::Windows::Forms::CheckBox^ checkBoxFiabiliteLogicielleLow;
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
			this->checkBoxCalendirerNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUtilisationOutilLogicielleNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxApplicationGenieNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpLangProgNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteIngeNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpEnviNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpAppNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteAnalyseNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDelaiExeNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVolatEnvNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContrainteMemoireNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContraintePerfExeNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxComplexProduitNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTailleBDDNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFiabilitLogiNormal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFiabiliteLogiVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->labelCalendrier = (gcnew System::Windows::Forms::Label());
			this->labeloutilslogicielles = (gcnew System::Windows::Forms::Label());
			this->labelmethodGenie = (gcnew System::Windows::Forms::Label());
			this->labelExpLanguageProg = (gcnew System::Windows::Forms::Label());
			this->labelExpEnv = (gcnew System::Windows::Forms::Label());
			this->labelCapIngeLogicielle = (gcnew System::Windows::Forms::Label());
			this->labelExpApp = (gcnew System::Windows::Forms::Label());
			this->labelCapaciteAnalyse = (gcnew System::Windows::Forms::Label());
			this->labelDelaiExeReq = (gcnew System::Windows::Forms::Label());
			this->labelVolatEnvirennement = (gcnew System::Windows::Forms::Label());
			this->labelContrainteMemoir = (gcnew System::Windows::Forms::Label());
			this->labelContraintePerfExe = (gcnew System::Windows::Forms::Label());
			this->labelComplexiteProduit = (gcnew System::Windows::Forms::Label());
			this->labelTailleBDD = (gcnew System::Windows::Forms::Label());
			this->labelFiabilitelogicielle = (gcnew System::Windows::Forms::Label());
			this->labelAttributProjet = (gcnew System::Windows::Forms::Label());
			this->labelAttributPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelAttributMateriel = (gcnew System::Windows::Forms::Label());
			this->labelAttributProduit = (gcnew System::Windows::Forms::Label());
			this->labelVeryHigh = (gcnew System::Windows::Forms::Label());
			this->labelHigh = (gcnew System::Windows::Forms::Label());
			this->labelNORMAL = (gcnew System::Windows::Forms::Label());
			this->labelLow = (gcnew System::Windows::Forms::Label());
			this->labelVeryLow = (gcnew System::Windows::Forms::Label());
			this->groupBoxResultat = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTotalCost = (gcnew System::Windows::Forms::TextBox());
			this->labelTotalCost = (gcnew System::Windows::Forms::Label());
			this->labelNumberPerson = (gcnew System::Windows::Forms::Label());
			this->textBoxNumberPerson = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDevTime = (gcnew System::Windows::Forms::TextBox());
			this->labelDevTime = (gcnew System::Windows::Forms::Label());
			this->textBoxEffort = (gcnew System::Windows::Forms::TextBox());
			this->labelEffort = (gcnew System::Windows::Forms::Label());
			this->btnCalcul = (gcnew System::Windows::Forms::Button());
			this->groupBoxVaraible = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxWage = (gcnew System::Windows::Forms::TextBox());
			this->textBoxKLOC = (gcnew System::Windows::Forms::TextBox());
			this->labelSalaire = (gcnew System::Windows::Forms::Label());
			this->labelKLOC = (gcnew System::Windows::Forms::Label());
			this->textBoxError = (gcnew System::Windows::Forms::TextBox());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->checkBoxTailleBDDVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxComplexiteProduitVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContraintePerfExeVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContrainteMemoireVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVolatEnvVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDelaiExeVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteAnalyseVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpApplicationVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpEnvironnementVerylow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteIngeVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpLangProgVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxApplicationGenieVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUtilisationOutilVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCalendrierVeryLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFiabiliteLogicielleLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTailleBDDLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxComplexiteProduitLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContraintePerfExeLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxContrainteMempirLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVolatEnvLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDelaiExeLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteAnalyseLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpAppLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCapaciteIngeLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpEnviironnementLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxExpLanguageProgLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxApplicationGeniLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUtilisationOutilLogicielLow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCalendrierLow = (gcnew System::Windows::Forms::CheckBox());
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
			this->groupBoxEAF->Controls->Add(this->checkBoxCalendrierLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxUtilisationOutilLogicielLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxApplicationGeniLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpLanguageProgLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpEnviironnementLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteIngeLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpAppLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteAnalyseLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxDelaiExeLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxVolatEnvLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxContrainteMempirLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxContraintePerfExeLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxComplexiteProduitLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxTailleBDDLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxFiabiliteLogicielleLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCalendrierVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxUtilisationOutilVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxApplicationGenieVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpLangProgVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteIngeVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpEnvironnementVerylow);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpApplicationVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteAnalyseVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxDelaiExeVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxVolatEnvVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxContrainteMemoireVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxContraintePerfExeVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxComplexiteProduitVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxTailleBDDVeryLow);
			this->groupBoxEAF->Controls->Add(this->checkBoxCalendirerNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxUtilisationOutilLogicielleNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxApplicationGenieNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpLangProgNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteIngeNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpEnviNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxExpAppNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxCapaciteAnalyseNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxDelaiExeNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxVolatEnvNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxContrainteMemoireNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxContraintePerfExeNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxComplexProduitNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxTailleBDDNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxFiabilitLogiNormal);
			this->groupBoxEAF->Controls->Add(this->checkBoxFiabiliteLogiVeryLow);
			this->groupBoxEAF->Controls->Add(this->labelCalendrier);
			this->groupBoxEAF->Controls->Add(this->labeloutilslogicielles);
			this->groupBoxEAF->Controls->Add(this->labelmethodGenie);
			this->groupBoxEAF->Controls->Add(this->labelExpLanguageProg);
			this->groupBoxEAF->Controls->Add(this->labelExpEnv);
			this->groupBoxEAF->Controls->Add(this->labelCapIngeLogicielle);
			this->groupBoxEAF->Controls->Add(this->labelExpApp);
			this->groupBoxEAF->Controls->Add(this->labelCapaciteAnalyse);
			this->groupBoxEAF->Controls->Add(this->labelDelaiExeReq);
			this->groupBoxEAF->Controls->Add(this->labelVolatEnvirennement);
			this->groupBoxEAF->Controls->Add(this->labelContrainteMemoir);
			this->groupBoxEAF->Controls->Add(this->labelContraintePerfExe);
			this->groupBoxEAF->Controls->Add(this->labelComplexiteProduit);
			this->groupBoxEAF->Controls->Add(this->labelTailleBDD);
			this->groupBoxEAF->Controls->Add(this->labelFiabilitelogicielle);
			this->groupBoxEAF->Controls->Add(this->labelAttributProjet);
			this->groupBoxEAF->Controls->Add(this->labelAttributPersonnel);
			this->groupBoxEAF->Controls->Add(this->labelAttributMateriel);
			this->groupBoxEAF->Controls->Add(this->labelAttributProduit);
			this->groupBoxEAF->Controls->Add(this->labelVeryHigh);
			this->groupBoxEAF->Controls->Add(this->labelHigh);
			this->groupBoxEAF->Controls->Add(this->labelNORMAL);
			this->groupBoxEAF->Controls->Add(this->labelLow);
			this->groupBoxEAF->Controls->Add(this->labelVeryLow);
			this->groupBoxEAF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxEAF->Location = System::Drawing::Point(21, 93);
			this->groupBoxEAF->Name = L"groupBoxEAF";
			this->groupBoxEAF->Size = System::Drawing::Size(734, 820);
			this->groupBoxEAF->TabIndex = 1;
			this->groupBoxEAF->TabStop = false;
			this->groupBoxEAF->Text = L"Effort Adjustement Factor";
			// 
			// checkBoxCalendirerNormal
			// 
			this->checkBoxCalendirerNormal->AutoSize = true;
			this->checkBoxCalendirerNormal->Location = System::Drawing::Point(505, 765);
			this->checkBoxCalendirerNormal->Name = L"checkBoxCalendirerNormal";
			this->checkBoxCalendirerNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxCalendirerNormal->TabIndex = 41;
			this->checkBoxCalendirerNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxUtilisationOutilLogicielleNormal
			// 
			this->checkBoxUtilisationOutilLogicielleNormal->AutoSize = true;
			this->checkBoxUtilisationOutilLogicielleNormal->Location = System::Drawing::Point(505, 734);
			this->checkBoxUtilisationOutilLogicielleNormal->Name = L"checkBoxUtilisationOutilLogicielleNormal";
			this->checkBoxUtilisationOutilLogicielleNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxUtilisationOutilLogicielleNormal->TabIndex = 40;
			this->checkBoxUtilisationOutilLogicielleNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxApplicationGenieNormal
			// 
			this->checkBoxApplicationGenieNormal->AutoSize = true;
			this->checkBoxApplicationGenieNormal->Location = System::Drawing::Point(505, 702);
			this->checkBoxApplicationGenieNormal->Name = L"checkBoxApplicationGenieNormal";
			this->checkBoxApplicationGenieNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxApplicationGenieNormal->TabIndex = 39;
			this->checkBoxApplicationGenieNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpLangProgNormal
			// 
			this->checkBoxExpLangProgNormal->AutoSize = true;
			this->checkBoxExpLangProgNormal->Location = System::Drawing::Point(505, 598);
			this->checkBoxExpLangProgNormal->Name = L"checkBoxExpLangProgNormal";
			this->checkBoxExpLangProgNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpLangProgNormal->TabIndex = 38;
			this->checkBoxExpLangProgNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteIngeNormal
			// 
			this->checkBoxCapaciteIngeNormal->AutoSize = true;
			this->checkBoxCapaciteIngeNormal->Location = System::Drawing::Point(505, 523);
			this->checkBoxCapaciteIngeNormal->Name = L"checkBoxCapaciteIngeNormal";
			this->checkBoxCapaciteIngeNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteIngeNormal->TabIndex = 37;
			this->checkBoxCapaciteIngeNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpEnviNormal
			// 
			this->checkBoxExpEnviNormal->AutoSize = true;
			this->checkBoxExpEnviNormal->Location = System::Drawing::Point(505, 559);
			this->checkBoxExpEnviNormal->Name = L"checkBoxExpEnviNormal";
			this->checkBoxExpEnviNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpEnviNormal->TabIndex = 36;
			this->checkBoxExpEnviNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpAppNormal
			// 
			this->checkBoxExpAppNormal->AutoSize = true;
			this->checkBoxExpAppNormal->Location = System::Drawing::Point(505, 492);
			this->checkBoxExpAppNormal->Name = L"checkBoxExpAppNormal";
			this->checkBoxExpAppNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpAppNormal->TabIndex = 35;
			this->checkBoxExpAppNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteAnalyseNormal
			// 
			this->checkBoxCapaciteAnalyseNormal->AutoSize = true;
			this->checkBoxCapaciteAnalyseNormal->Location = System::Drawing::Point(505, 458);
			this->checkBoxCapaciteAnalyseNormal->Name = L"checkBoxCapaciteAnalyseNormal";
			this->checkBoxCapaciteAnalyseNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteAnalyseNormal->TabIndex = 34;
			this->checkBoxCapaciteAnalyseNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxDelaiExeNormal
			// 
			this->checkBoxDelaiExeNormal->AutoSize = true;
			this->checkBoxDelaiExeNormal->Location = System::Drawing::Point(505, 375);
			this->checkBoxDelaiExeNormal->Name = L"checkBoxDelaiExeNormal";
			this->checkBoxDelaiExeNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxDelaiExeNormal->TabIndex = 33;
			this->checkBoxDelaiExeNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxVolatEnvNormal
			// 
			this->checkBoxVolatEnvNormal->AutoSize = true;
			this->checkBoxVolatEnvNormal->Location = System::Drawing::Point(505, 342);
			this->checkBoxVolatEnvNormal->Name = L"checkBoxVolatEnvNormal";
			this->checkBoxVolatEnvNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxVolatEnvNormal->TabIndex = 32;
			this->checkBoxVolatEnvNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxContrainteMemoireNormal
			// 
			this->checkBoxContrainteMemoireNormal->AutoSize = true;
			this->checkBoxContrainteMemoireNormal->Location = System::Drawing::Point(505, 307);
			this->checkBoxContrainteMemoireNormal->Name = L"checkBoxContrainteMemoireNormal";
			this->checkBoxContrainteMemoireNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxContrainteMemoireNormal->TabIndex = 31;
			this->checkBoxContrainteMemoireNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxContraintePerfExeNormal
			// 
			this->checkBoxContraintePerfExeNormal->AutoSize = true;
			this->checkBoxContraintePerfExeNormal->Location = System::Drawing::Point(505, 276);
			this->checkBoxContraintePerfExeNormal->Name = L"checkBoxContraintePerfExeNormal";
			this->checkBoxContraintePerfExeNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxContraintePerfExeNormal->TabIndex = 30;
			this->checkBoxContraintePerfExeNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxComplexProduitNormal
			// 
			this->checkBoxComplexProduitNormal->AutoSize = true;
			this->checkBoxComplexProduitNormal->Location = System::Drawing::Point(505, 185);
			this->checkBoxComplexProduitNormal->Name = L"checkBoxComplexProduitNormal";
			this->checkBoxComplexProduitNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxComplexProduitNormal->TabIndex = 29;
			this->checkBoxComplexProduitNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxTailleBDDNormal
			// 
			this->checkBoxTailleBDDNormal->AutoSize = true;
			this->checkBoxTailleBDDNormal->Location = System::Drawing::Point(505, 145);
			this->checkBoxTailleBDDNormal->Name = L"checkBoxTailleBDDNormal";
			this->checkBoxTailleBDDNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxTailleBDDNormal->TabIndex = 28;
			this->checkBoxTailleBDDNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxFiabilitLogiNormal
			// 
			this->checkBoxFiabilitLogiNormal->AutoSize = true;
			this->checkBoxFiabilitLogiNormal->Location = System::Drawing::Point(505, 105);
			this->checkBoxFiabilitLogiNormal->Name = L"checkBoxFiabilitLogiNormal";
			this->checkBoxFiabilitLogiNormal->Size = System::Drawing::Size(22, 21);
			this->checkBoxFiabilitLogiNormal->TabIndex = 27;
			this->checkBoxFiabilitLogiNormal->UseVisualStyleBackColor = true;
			// 
			// checkBoxFiabiliteLogiVeryLow
			// 
			this->checkBoxFiabiliteLogiVeryLow->AutoSize = true;
			this->checkBoxFiabiliteLogiVeryLow->Location = System::Drawing::Point(370, 107);
			this->checkBoxFiabiliteLogiVeryLow->Name = L"checkBoxFiabiliteLogiVeryLow";
			this->checkBoxFiabiliteLogiVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxFiabiliteLogiVeryLow->TabIndex = 26;
			this->checkBoxFiabiliteLogiVeryLow->UseVisualStyleBackColor = true;
			// 
			// labelCalendrier
			// 
			this->labelCalendrier->AutoSize = true;
			this->labelCalendrier->Location = System::Drawing::Point(34, 764);
			this->labelCalendrier->Name = L"labelCalendrier";
			this->labelCalendrier->Size = System::Drawing::Size(263, 20);
			this->labelCalendrier->TabIndex = 25;
			this->labelCalendrier->Text = L"Calendrier de développement requis";
			// 
			// labeloutilslogicielles
			// 
			this->labeloutilslogicielles->AutoSize = true;
			this->labeloutilslogicielles->Location = System::Drawing::Point(34, 733);
			this->labeloutilslogicielles->Name = L"labeloutilslogicielles";
			this->labeloutilslogicielles->Size = System::Drawing::Size(190, 20);
			this->labeloutilslogicielles->TabIndex = 24;
			this->labeloutilslogicielles->Text = L"Utilisation d\'outils logiciels";
			// 
			// labelmethodGenie
			// 
			this->labelmethodGenie->AutoSize = true;
			this->labelmethodGenie->Location = System::Drawing::Point(34, 701);
			this->labelmethodGenie->Name = L"labelmethodGenie";
			this->labelmethodGenie->Size = System::Drawing::Size(324, 20);
			this->labelmethodGenie->TabIndex = 23;
			this->labelmethodGenie->Text = L"Application des méthodes de génie logicielle ";
			// 
			// labelExpLanguageProg
			// 
			this->labelExpLanguageProg->AutoSize = true;
			this->labelExpLanguageProg->Location = System::Drawing::Point(34, 599);
			this->labelExpLanguageProg->Name = L"labelExpLanguageProg";
			this->labelExpLanguageProg->Size = System::Drawing::Size(313, 20);
			this->labelExpLanguageProg->TabIndex = 22;
			this->labelExpLanguageProg->Text = L"Expérience en language de programmation";
			// 
			// labelExpEnv
			// 
			this->labelExpEnv->AutoSize = true;
			this->labelExpEnv->Location = System::Drawing::Point(34, 560);
			this->labelExpEnv->Name = L"labelExpEnv";
			this->labelExpEnv->Size = System::Drawing::Size(225, 20);
			this->labelExpEnv->TabIndex = 21;
			this->labelExpEnv->Text = L"Expérience de l\'environnement";
			// 
			// labelCapIngeLogicielle
			// 
			this->labelCapIngeLogicielle->AutoSize = true;
			this->labelCapIngeLogicielle->Location = System::Drawing::Point(34, 524);
			this->labelCapIngeLogicielle->Name = L"labelCapIngeLogicielle";
			this->labelCapIngeLogicielle->Size = System::Drawing::Size(204, 20);
			this->labelCapIngeLogicielle->TabIndex = 20;
			this->labelCapIngeLogicielle->Text = L"Capacité d\'ingénieur logiciel";
			// 
			// labelExpApp
			// 
			this->labelExpApp->AutoSize = true;
			this->labelExpApp->Location = System::Drawing::Point(34, 491);
			this->labelExpApp->Name = L"labelExpApp";
			this->labelExpApp->Size = System::Drawing::Size(206, 20);
			this->labelExpApp->TabIndex = 19;
			this->labelExpApp->Text = L"Expérience des applications";
			// 
			// labelCapaciteAnalyse
			// 
			this->labelCapaciteAnalyse->AutoSize = true;
			this->labelCapaciteAnalyse->Location = System::Drawing::Point(34, 459);
			this->labelCapaciteAnalyse->Name = L"labelCapaciteAnalyse";
			this->labelCapaciteAnalyse->Size = System::Drawing::Size(142, 20);
			this->labelCapaciteAnalyse->TabIndex = 18;
			this->labelCapaciteAnalyse->Text = L"Capacité d\'analyse";
			// 
			// labelDelaiExeReq
			// 
			this->labelDelaiExeReq->AutoSize = true;
			this->labelDelaiExeReq->Location = System::Drawing::Point(34, 374);
			this->labelDelaiExeReq->Name = L"labelDelaiExeReq";
			this->labelDelaiExeReq->Size = System::Drawing::Size(176, 20);
			this->labelDelaiExeReq->TabIndex = 17;
			this->labelDelaiExeReq->Text = L"Délai d\'exécution requis";
			// 
			// labelVolatEnvirennement
			// 
			this->labelVolatEnvirennement->AutoSize = true;
			this->labelVolatEnvirennement->Location = System::Drawing::Point(34, 341);
			this->labelVolatEnvirennement->Name = L"labelVolatEnvirennement";
			this->labelVolatEnvirennement->Size = System::Drawing::Size(206, 20);
			this->labelVolatEnvirennement->TabIndex = 16;
			this->labelVolatEnvirennement->Text = L"Volatilité de l\'environnement";
			// 
			// labelContrainteMemoir
			// 
			this->labelContrainteMemoir->AutoSize = true;
			this->labelContrainteMemoir->Location = System::Drawing::Point(34, 306);
			this->labelContrainteMemoir->Name = L"labelContrainteMemoir";
			this->labelContrainteMemoir->Size = System::Drawing::Size(178, 20);
			this->labelContrainteMemoir->TabIndex = 15;
			this->labelContrainteMemoir->Text = L"Contraintes de mémoire";
			// 
			// labelContraintePerfExe
			// 
			this->labelContraintePerfExe->AutoSize = true;
			this->labelContraintePerfExe->Location = System::Drawing::Point(34, 275);
			this->labelContraintePerfExe->Name = L"labelContraintePerfExe";
			this->labelContraintePerfExe->Size = System::Drawing::Size(291, 20);
			this->labelContraintePerfExe->TabIndex = 14;
			this->labelContraintePerfExe->Text = L"Contrainte de performances d\'exécution";
			// 
			// labelComplexiteProduit
			// 
			this->labelComplexiteProduit->AutoSize = true;
			this->labelComplexiteProduit->Location = System::Drawing::Point(34, 184);
			this->labelComplexiteProduit->Name = L"labelComplexiteProduit";
			this->labelComplexiteProduit->Size = System::Drawing::Size(162, 20);
			this->labelComplexiteProduit->TabIndex = 13;
			this->labelComplexiteProduit->Text = L"Complexité du produit";
			// 
			// labelTailleBDD
			// 
			this->labelTailleBDD->AutoSize = true;
			this->labelTailleBDD->Location = System::Drawing::Point(34, 146);
			this->labelTailleBDD->Name = L"labelTailleBDD";
			this->labelTailleBDD->Size = System::Drawing::Size(122, 20);
			this->labelTailleBDD->TabIndex = 12;
			this->labelTailleBDD->Text = L"Taille de la BDD";
			// 
			// labelFiabilitelogicielle
			// 
			this->labelFiabilitelogicielle->AutoSize = true;
			this->labelFiabilitelogicielle->Location = System::Drawing::Point(34, 106);
			this->labelFiabilitelogicielle->Name = L"labelFiabilitelogicielle";
			this->labelFiabilitelogicielle->Size = System::Drawing::Size(182, 20);
			this->labelFiabilitelogicielle->TabIndex = 11;
			this->labelFiabilitelogicielle->Text = L"Fiabilité logicielle requise";
			// 
			// labelAttributProjet
			// 
			this->labelAttributProjet->AutoSize = true;
			this->labelAttributProjet->Location = System::Drawing::Point(6, 664);
			this->labelAttributProjet->Name = L"labelAttributProjet";
			this->labelAttributProjet->Size = System::Drawing::Size(135, 20);
			this->labelAttributProjet->TabIndex = 10;
			this->labelAttributProjet->Text = L"Attributs du projet";
			// 
			// labelAttributPersonnel
			// 
			this->labelAttributPersonnel->AutoSize = true;
			this->labelAttributPersonnel->Location = System::Drawing::Point(6, 430);
			this->labelAttributPersonnel->Name = L"labelAttributPersonnel";
			this->labelAttributPersonnel->Size = System::Drawing::Size(165, 20);
			this->labelAttributPersonnel->TabIndex = 9;
			this->labelAttributPersonnel->Text = L"Attributs du personnel";
			// 
			// labelAttributMateriel
			// 
			this->labelAttributMateriel->AutoSize = true;
			this->labelAttributMateriel->Location = System::Drawing::Point(6, 241);
			this->labelAttributMateriel->Name = L"labelAttributMateriel";
			this->labelAttributMateriel->Size = System::Drawing::Size(137, 20);
			this->labelAttributMateriel->TabIndex = 8;
			this->labelAttributMateriel->Text = L"Attributs matériels";
			// 
			// labelAttributProduit
			// 
			this->labelAttributProduit->AutoSize = true;
			this->labelAttributProduit->Location = System::Drawing::Point(6, 75);
			this->labelAttributProduit->Name = L"labelAttributProduit";
			this->labelAttributProduit->Size = System::Drawing::Size(144, 20);
			this->labelAttributProduit->TabIndex = 7;
			this->labelAttributProduit->Text = L"Attributs du produit";
			// 
			// labelVeryHigh
			// 
			this->labelVeryHigh->AutoSize = true;
			this->labelVeryHigh->Location = System::Drawing::Point(617, 22);
			this->labelVeryHigh->Name = L"labelVeryHigh";
			this->labelVeryHigh->Size = System::Drawing::Size(74, 20);
			this->labelVeryHigh->TabIndex = 5;
			this->labelVeryHigh->Text = L"VeryHigh";
			// 
			// labelHigh
			// 
			this->labelHigh->AutoSize = true;
			this->labelHigh->Location = System::Drawing::Point(569, 22);
			this->labelHigh->Name = L"labelHigh";
			this->labelHigh->Size = System::Drawing::Size(42, 20);
			this->labelHigh->TabIndex = 4;
			this->labelHigh->Text = L"High";
			// 
			// labelNORMAL
			// 
			this->labelNORMAL->AutoSize = true;
			this->labelNORMAL->Location = System::Drawing::Point(486, 22);
			this->labelNORMAL->Name = L"labelNORMAL";
			this->labelNORMAL->Size = System::Drawing::Size(77, 20);
			this->labelNORMAL->TabIndex = 3;
			this->labelNORMAL->Text = L"NORMAL";
			// 
			// labelLow
			// 
			this->labelLow->AutoSize = true;
			this->labelLow->Location = System::Drawing::Point(442, 22);
			this->labelLow->Name = L"labelLow";
			this->labelLow->Size = System::Drawing::Size(38, 20);
			this->labelLow->TabIndex = 2;
			this->labelLow->Text = L"Low";
			// 
			// labelVeryLow
			// 
			this->labelVeryLow->AutoSize = true;
			this->labelVeryLow->Location = System::Drawing::Point(366, 22);
			this->labelVeryLow->Name = L"labelVeryLow";
			this->labelVeryLow->Size = System::Drawing::Size(70, 20);
			this->labelVeryLow->TabIndex = 1;
			this->labelVeryLow->Text = L"VeryLow";
			// 
			// groupBoxResultat
			// 
			this->groupBoxResultat->Controls->Add(this->textBoxTotalCost);
			this->groupBoxResultat->Controls->Add(this->labelTotalCost);
			this->groupBoxResultat->Controls->Add(this->labelNumberPerson);
			this->groupBoxResultat->Controls->Add(this->textBoxNumberPerson);
			this->groupBoxResultat->Controls->Add(this->textBoxDevTime);
			this->groupBoxResultat->Controls->Add(this->labelDevTime);
			this->groupBoxResultat->Controls->Add(this->textBoxEffort);
			this->groupBoxResultat->Controls->Add(this->labelEffort);
			this->groupBoxResultat->Location = System::Drawing::Point(772, 93);
			this->groupBoxResultat->Name = L"groupBoxResultat";
			this->groupBoxResultat->Size = System::Drawing::Size(396, 315);
			this->groupBoxResultat->TabIndex = 2;
			this->groupBoxResultat->TabStop = false;
			this->groupBoxResultat->Text = L"Results";
			// 
			// textBoxTotalCost
			// 
			this->textBoxTotalCost->Location = System::Drawing::Point(90, 228);
			this->textBoxTotalCost->Name = L"textBoxTotalCost";
			this->textBoxTotalCost->Size = System::Drawing::Size(190, 26);
			this->textBoxTotalCost->TabIndex = 7;
			// 
			// labelTotalCost
			// 
			this->labelTotalCost->AutoSize = true;
			this->labelTotalCost->Location = System::Drawing::Point(6, 231);
			this->labelTotalCost->Name = L"labelTotalCost";
			this->labelTotalCost->Size = System::Drawing::Size(78, 20);
			this->labelTotalCost->TabIndex = 6;
			this->labelTotalCost->Text = L"Total cost";
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
			this->textBoxNumberPerson->Size = System::Drawing::Size(139, 26);
			this->textBoxNumberPerson->TabIndex = 5;
			// 
			// textBoxDevTime
			// 
			this->textBoxDevTime->Location = System::Drawing::Point(160, 110);
			this->textBoxDevTime->Name = L"textBoxDevTime";
			this->textBoxDevTime->Size = System::Drawing::Size(190, 26);
			this->textBoxDevTime->TabIndex = 3;
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
			// textBoxEffort
			// 
			this->textBoxEffort->Location = System::Drawing::Point(61, 53);
			this->textBoxEffort->Name = L"textBoxEffort";
			this->textBoxEffort->Size = System::Drawing::Size(190, 26);
			this->textBoxEffort->TabIndex = 1;
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
			// btnCalcul
			// 
			this->btnCalcul->Location = System::Drawing::Point(833, 434);
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
			this->groupBoxVaraible->Location = System::Drawing::Point(772, 614);
			this->groupBoxVaraible->Name = L"groupBoxVaraible";
			this->groupBoxVaraible->Size = System::Drawing::Size(356, 163);
			this->groupBoxVaraible->TabIndex = 4;
			this->groupBoxVaraible->TabStop = false;
			this->groupBoxVaraible->Text = L"Variables";
			// 
			// textBoxWage
			// 
			this->textBoxWage->Location = System::Drawing::Point(61, 95);
			this->textBoxWage->Name = L"textBoxWage";
			this->textBoxWage->Size = System::Drawing::Size(190, 26);
			this->textBoxWage->TabIndex = 9;
			// 
			// textBoxKLOC
			// 
			this->textBoxKLOC->Location = System::Drawing::Point(61, 41);
			this->textBoxKLOC->Name = L"textBoxKLOC";
			this->textBoxKLOC->Size = System::Drawing::Size(190, 26);
			this->textBoxKLOC->TabIndex = 8;
			// 
			// labelSalaire
			// 
			this->labelSalaire->AutoSize = true;
			this->labelSalaire->Location = System::Drawing::Point(6, 98);
			this->labelSalaire->Name = L"labelSalaire";
			this->labelSalaire->Size = System::Drawing::Size(51, 20);
			this->labelSalaire->TabIndex = 7;
			this->labelSalaire->Text = L"Wage";
			// 
			// labelKLOC
			// 
			this->labelKLOC->AutoSize = true;
			this->labelKLOC->Location = System::Drawing::Point(6, 41);
			this->labelKLOC->Name = L"labelKLOC";
			this->labelKLOC->Size = System::Drawing::Size(51, 20);
			this->labelKLOC->TabIndex = 6;
			this->labelKLOC->Text = L"KLOC";
			// 
			// textBoxError
			// 
			this->textBoxError->Location = System::Drawing::Point(800, 827);
			this->textBoxError->Name = L"textBoxError";
			this->textBoxError->Size = System::Drawing::Size(282, 26);
			this->textBoxError->TabIndex = 6;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(834, 507);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(288, 65);
			this->btnReset->TabIndex = 7;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnResetClick);
			// 
			// checkBoxTailleBDDVeryLow
			// 
			this->checkBoxTailleBDDVeryLow->AutoSize = true;
			this->checkBoxTailleBDDVeryLow->Location = System::Drawing::Point(370, 147);
			this->checkBoxTailleBDDVeryLow->Name = L"checkBoxTailleBDDVeryLow";
			this->checkBoxTailleBDDVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxTailleBDDVeryLow->TabIndex = 42;
			this->checkBoxTailleBDDVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxComplexiteProduitVeryLow
			// 
			this->checkBoxComplexiteProduitVeryLow->AutoSize = true;
			this->checkBoxComplexiteProduitVeryLow->Location = System::Drawing::Point(370, 183);
			this->checkBoxComplexiteProduitVeryLow->Name = L"checkBoxComplexiteProduitVeryLow";
			this->checkBoxComplexiteProduitVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxComplexiteProduitVeryLow->TabIndex = 43;
			this->checkBoxComplexiteProduitVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxContraintePerfExeVeryLow
			// 
			this->checkBoxContraintePerfExeVeryLow->AutoSize = true;
			this->checkBoxContraintePerfExeVeryLow->Location = System::Drawing::Point(370, 274);
			this->checkBoxContraintePerfExeVeryLow->Name = L"checkBoxContraintePerfExeVeryLow";
			this->checkBoxContraintePerfExeVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxContraintePerfExeVeryLow->TabIndex = 44;
			this->checkBoxContraintePerfExeVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxContrainteMemoireVeryLow
			// 
			this->checkBoxContrainteMemoireVeryLow->AutoSize = true;
			this->checkBoxContrainteMemoireVeryLow->Location = System::Drawing::Point(370, 307);
			this->checkBoxContrainteMemoireVeryLow->Name = L"checkBoxContrainteMemoireVeryLow";
			this->checkBoxContrainteMemoireVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxContrainteMemoireVeryLow->TabIndex = 45;
			this->checkBoxContrainteMemoireVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxVolatEnvVeryLow
			// 
			this->checkBoxVolatEnvVeryLow->AutoSize = true;
			this->checkBoxVolatEnvVeryLow->Location = System::Drawing::Point(370, 340);
			this->checkBoxVolatEnvVeryLow->Name = L"checkBoxVolatEnvVeryLow";
			this->checkBoxVolatEnvVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxVolatEnvVeryLow->TabIndex = 46;
			this->checkBoxVolatEnvVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxDelaiExeVeryLow
			// 
			this->checkBoxDelaiExeVeryLow->AutoSize = true;
			this->checkBoxDelaiExeVeryLow->Location = System::Drawing::Point(370, 375);
			this->checkBoxDelaiExeVeryLow->Name = L"checkBoxDelaiExeVeryLow";
			this->checkBoxDelaiExeVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxDelaiExeVeryLow->TabIndex = 47;
			this->checkBoxDelaiExeVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteAnalyseVeryLow
			// 
			this->checkBoxCapaciteAnalyseVeryLow->AutoSize = true;
			this->checkBoxCapaciteAnalyseVeryLow->Location = System::Drawing::Point(370, 460);
			this->checkBoxCapaciteAnalyseVeryLow->Name = L"checkBoxCapaciteAnalyseVeryLow";
			this->checkBoxCapaciteAnalyseVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteAnalyseVeryLow->TabIndex = 48;
			this->checkBoxCapaciteAnalyseVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpApplicationVeryLow
			// 
			this->checkBoxExpApplicationVeryLow->AutoSize = true;
			this->checkBoxExpApplicationVeryLow->Location = System::Drawing::Point(370, 492);
			this->checkBoxExpApplicationVeryLow->Name = L"checkBoxExpApplicationVeryLow";
			this->checkBoxExpApplicationVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpApplicationVeryLow->TabIndex = 49;
			this->checkBoxExpApplicationVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpEnvironnementVerylow
			// 
			this->checkBoxExpEnvironnementVerylow->AutoSize = true;
			this->checkBoxExpEnvironnementVerylow->Location = System::Drawing::Point(370, 559);
			this->checkBoxExpEnvironnementVerylow->Name = L"checkBoxExpEnvironnementVerylow";
			this->checkBoxExpEnvironnementVerylow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpEnvironnementVerylow->TabIndex = 50;
			this->checkBoxExpEnvironnementVerylow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteIngeVeryLow
			// 
			this->checkBoxCapaciteIngeVeryLow->AutoSize = true;
			this->checkBoxCapaciteIngeVeryLow->Location = System::Drawing::Point(370, 525);
			this->checkBoxCapaciteIngeVeryLow->Name = L"checkBoxCapaciteIngeVeryLow";
			this->checkBoxCapaciteIngeVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteIngeVeryLow->TabIndex = 51;
			this->checkBoxCapaciteIngeVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpLangProgVeryLow
			// 
			this->checkBoxExpLangProgVeryLow->AutoSize = true;
			this->checkBoxExpLangProgVeryLow->Location = System::Drawing::Point(370, 600);
			this->checkBoxExpLangProgVeryLow->Name = L"checkBoxExpLangProgVeryLow";
			this->checkBoxExpLangProgVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpLangProgVeryLow->TabIndex = 52;
			this->checkBoxExpLangProgVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxApplicationGenieVeryLow
			// 
			this->checkBoxApplicationGenieVeryLow->AutoSize = true;
			this->checkBoxApplicationGenieVeryLow->Location = System::Drawing::Point(370, 700);
			this->checkBoxApplicationGenieVeryLow->Name = L"checkBoxApplicationGenieVeryLow";
			this->checkBoxApplicationGenieVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxApplicationGenieVeryLow->TabIndex = 53;
			this->checkBoxApplicationGenieVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxUtilisationOutilVeryLow
			// 
			this->checkBoxUtilisationOutilVeryLow->AutoSize = true;
			this->checkBoxUtilisationOutilVeryLow->Location = System::Drawing::Point(370, 732);
			this->checkBoxUtilisationOutilVeryLow->Name = L"checkBoxUtilisationOutilVeryLow";
			this->checkBoxUtilisationOutilVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxUtilisationOutilVeryLow->TabIndex = 54;
			this->checkBoxUtilisationOutilVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCalendrierVeryLow
			// 
			this->checkBoxCalendrierVeryLow->AutoSize = true;
			this->checkBoxCalendrierVeryLow->Location = System::Drawing::Point(370, 763);
			this->checkBoxCalendrierVeryLow->Name = L"checkBoxCalendrierVeryLow";
			this->checkBoxCalendrierVeryLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCalendrierVeryLow->TabIndex = 55;
			this->checkBoxCalendrierVeryLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxFiabiliteLogicielleLow
			// 
			this->checkBoxFiabiliteLogicielleLow->AutoSize = true;
			this->checkBoxFiabiliteLogicielleLow->Location = System::Drawing::Point(446, 107);
			this->checkBoxFiabiliteLogicielleLow->Name = L"checkBoxFiabiliteLogicielleLow";
			this->checkBoxFiabiliteLogicielleLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxFiabiliteLogicielleLow->TabIndex = 56;
			this->checkBoxFiabiliteLogicielleLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxTailleBDDLow
			// 
			this->checkBoxTailleBDDLow->AutoSize = true;
			this->checkBoxTailleBDDLow->Location = System::Drawing::Point(446, 147);
			this->checkBoxTailleBDDLow->Name = L"checkBoxTailleBDDLow";
			this->checkBoxTailleBDDLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxTailleBDDLow->TabIndex = 57;
			this->checkBoxTailleBDDLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxComplexiteProduitLow
			// 
			this->checkBoxComplexiteProduitLow->AutoSize = true;
			this->checkBoxComplexiteProduitLow->Location = System::Drawing::Point(446, 185);
			this->checkBoxComplexiteProduitLow->Name = L"checkBoxComplexiteProduitLow";
			this->checkBoxComplexiteProduitLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxComplexiteProduitLow->TabIndex = 58;
			this->checkBoxComplexiteProduitLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxContraintePerfExeLow
			// 
			this->checkBoxContraintePerfExeLow->AutoSize = true;
			this->checkBoxContraintePerfExeLow->Location = System::Drawing::Point(446, 276);
			this->checkBoxContraintePerfExeLow->Name = L"checkBoxContraintePerfExeLow";
			this->checkBoxContraintePerfExeLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxContraintePerfExeLow->TabIndex = 59;
			this->checkBoxContraintePerfExeLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxContrainteMempirLow
			// 
			this->checkBoxContrainteMempirLow->AutoSize = true;
			this->checkBoxContrainteMempirLow->Location = System::Drawing::Point(446, 307);
			this->checkBoxContrainteMempirLow->Name = L"checkBoxContrainteMempirLow";
			this->checkBoxContrainteMempirLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxContrainteMempirLow->TabIndex = 60;
			this->checkBoxContrainteMempirLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxVolatEnvLow
			// 
			this->checkBoxVolatEnvLow->AutoSize = true;
			this->checkBoxVolatEnvLow->Location = System::Drawing::Point(446, 342);
			this->checkBoxVolatEnvLow->Name = L"checkBoxVolatEnvLow";
			this->checkBoxVolatEnvLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxVolatEnvLow->TabIndex = 61;
			this->checkBoxVolatEnvLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxDelaiExeLow
			// 
			this->checkBoxDelaiExeLow->AutoSize = true;
			this->checkBoxDelaiExeLow->Location = System::Drawing::Point(446, 375);
			this->checkBoxDelaiExeLow->Name = L"checkBoxDelaiExeLow";
			this->checkBoxDelaiExeLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxDelaiExeLow->TabIndex = 62;
			this->checkBoxDelaiExeLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteAnalyseLow
			// 
			this->checkBoxCapaciteAnalyseLow->AutoSize = true;
			this->checkBoxCapaciteAnalyseLow->Location = System::Drawing::Point(446, 460);
			this->checkBoxCapaciteAnalyseLow->Name = L"checkBoxCapaciteAnalyseLow";
			this->checkBoxCapaciteAnalyseLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteAnalyseLow->TabIndex = 63;
			this->checkBoxCapaciteAnalyseLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpAppLow
			// 
			this->checkBoxExpAppLow->AutoSize = true;
			this->checkBoxExpAppLow->Location = System::Drawing::Point(446, 492);
			this->checkBoxExpAppLow->Name = L"checkBoxExpAppLow";
			this->checkBoxExpAppLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpAppLow->TabIndex = 64;
			this->checkBoxExpAppLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCapaciteIngeLow
			// 
			this->checkBoxCapaciteIngeLow->AutoSize = true;
			this->checkBoxCapaciteIngeLow->Location = System::Drawing::Point(446, 525);
			this->checkBoxCapaciteIngeLow->Name = L"checkBoxCapaciteIngeLow";
			this->checkBoxCapaciteIngeLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCapaciteIngeLow->TabIndex = 65;
			this->checkBoxCapaciteIngeLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpEnviironnementLow
			// 
			this->checkBoxExpEnviironnementLow->AutoSize = true;
			this->checkBoxExpEnviironnementLow->Location = System::Drawing::Point(446, 561);
			this->checkBoxExpEnviironnementLow->Name = L"checkBoxExpEnviironnementLow";
			this->checkBoxExpEnviironnementLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpEnviironnementLow->TabIndex = 66;
			this->checkBoxExpEnviironnementLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxExpLanguageProgLow
			// 
			this->checkBoxExpLanguageProgLow->AutoSize = true;
			this->checkBoxExpLanguageProgLow->Location = System::Drawing::Point(446, 600);
			this->checkBoxExpLanguageProgLow->Name = L"checkBoxExpLanguageProgLow";
			this->checkBoxExpLanguageProgLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxExpLanguageProgLow->TabIndex = 67;
			this->checkBoxExpLanguageProgLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxApplicationGeniLow
			// 
			this->checkBoxApplicationGeniLow->AutoSize = true;
			this->checkBoxApplicationGeniLow->Location = System::Drawing::Point(446, 702);
			this->checkBoxApplicationGeniLow->Name = L"checkBoxApplicationGeniLow";
			this->checkBoxApplicationGeniLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxApplicationGeniLow->TabIndex = 68;
			this->checkBoxApplicationGeniLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxUtilisationOutilLogicielLow
			// 
			this->checkBoxUtilisationOutilLogicielLow->AutoSize = true;
			this->checkBoxUtilisationOutilLogicielLow->Location = System::Drawing::Point(446, 734);
			this->checkBoxUtilisationOutilLogicielLow->Name = L"checkBoxUtilisationOutilLogicielLow";
			this->checkBoxUtilisationOutilLogicielLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxUtilisationOutilLogicielLow->TabIndex = 69;
			this->checkBoxUtilisationOutilLogicielLow->UseVisualStyleBackColor = true;
			// 
			// checkBoxCalendrierLow
			// 
			this->checkBoxCalendrierLow->AutoSize = true;
			this->checkBoxCalendrierLow->Location = System::Drawing::Point(446, 765);
			this->checkBoxCalendrierLow->Name = L"checkBoxCalendrierLow";
			this->checkBoxCalendrierLow->Size = System::Drawing::Size(22, 21);
			this->checkBoxCalendrierLow->TabIndex = 70;
			this->checkBoxCalendrierLow->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 939);
			this->Controls->Add(this->btnReset);
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
	
//quand on appuis sur le bouton calcul
private: System::Void BtnCalculateClick(System::Object^ sender, System::EventArgs^ e) {
	
	C_CALCUL COCOMO; //on declare un objet de notre classe de clacul 
	float KLOC;
	float Wage = -1;
	if (String::IsNullOrEmpty(textBoxKLOC->Text) == true ) //on regarde si la texte box est vide 
	{
		textBoxError->Text = "Il faut ajouter une valeur a KLOC";
		//Form1::Close();
		
	}
	else
	{
	KLOC = Convert::ToDouble(textBoxKLOC->Text);
	COCOMO.setKLOC(KLOC);
	}

	if (String::IsNullOrEmpty(textBoxWage->Text) == true) //on regarde si la texte box est vide 
	{
		textBoxError->Text = "Il faut ajouter une valeur a Wage";
		//Form1::Close();
	}
	else
	{
		Wage = Convert::ToDouble(textBoxWage->Text);
	}

	float EAF = 1;

	if (checkBoxFiabilitLogiNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté
		if (checkBoxFiabiliteLogiVeryLow->Checked == true) { EAF = EAF * 0.75; } //VeryLow
		if (checkBoxFiabiliteLogicielleLow->Checked == true) { EAF = EAF * 0.88; } //Low
	}
	if (checkBoxTailleBDDNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxComplexProduitNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxContraintePerfExeNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxContrainteMemoireNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxVolatEnvNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxDelaiExeNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxCapaciteAnalyseNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxExpAppNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxCapaciteIngeNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxExpEnviNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxExpLangProgNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxApplicationGenieNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxUtilisationOutilLogicielleNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}
	if (checkBoxCalendirerNormal->Checked == false) //si la valeur n'est pas a normal 
	{
		//tester chaque possiblilté 
	}

	COCOMO.setEAF(EAF);

	//on clacul et on affiche E
	float fEffort = COCOMO.calcul_E();
	String^ Effort = Convert::ToString(fEffort);
	textBoxEffort->Text = Effort;

	//on calcul et on affiche D
	float fDevTime = COCOMO.calcul_D(fEffort);
	String^ DevTime = Convert::ToString(fDevTime);
	textBoxDevTime->Text = DevTime;

	//on clacule et on affiche P
	float NumberOfPersons = COCOMO.calcul_P(fEffort, fDevTime);
	String^ NPersons = Convert::ToString(NumberOfPersons);
	textBoxNumberPerson->Text = NPersons;

	//on calcul et on affiche le cout total
	if (Wage >= 0)
	{
		float coutTotal = Wage * NumberOfPersons * fDevTime;
		String^ TotalCost = Convert::ToString(coutTotal);
		textBoxTotalCost->Text = TotalCost;
	}
	




}
//fin btnCalcul



//quand ont reset
private: System::Void btnResetClick(System::Object^ sender, System::EventArgs^ e) {
	textBoxDevTime->Clear();
	textBoxEffort->Clear();
	textBoxError->Clear();
	textBoxKLOC->Clear();
	textBoxNumberPerson->Clear();
	textBoxTotalCost->Clear();
	textBoxWage->Clear();

}
//fin btnReset



};
}

