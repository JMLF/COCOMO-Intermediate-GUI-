#pragma once

#include "Header1.h"
#include "Header2.h"

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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 761);
			this->Controls->Add(this->Titre_COCOMO);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}

#include<iostream>

int main_()
{
	int n;
	std::cin >> n;
	int result = plus_2(n);
	std::cout << "plus_2(" << n << ") = " << result << std::endl;
	return 0;
}
