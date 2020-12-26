#pragma once
#include <iostream>
#include <fstream>
#include "Math.h"
#include "myClass.h"
#include <msclr\marshal_cppstd.h>
using namespace std;

Result res;

namespace Panasenko {

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
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBoxDay;
	private: System::Windows::Forms::Button^ buttonExit;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxDay = (gcnew System::Windows::Forms::ComboBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 125);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(89, 125);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Длительность(мин)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"День недели";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 86);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результат";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 24);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(10, 101);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// comboBoxDay
			// 
			this->comboBoxDay->FormattingEnabled = true;
			this->comboBoxDay->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Понедельник", L"Вторник", L"Среда", L"Четверг",
					L"Пятница", L"Субота", L"Воскресенье"
			});
			this->comboBoxDay->Location = System::Drawing::Point(11, 62);
			this->comboBoxDay->Name = L"comboBoxDay";
			this->comboBoxDay->Size = System::Drawing::Size(145, 21);
			this->comboBoxDay->TabIndex = 8;
			this->comboBoxDay->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(10, 156);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(147, 23);
			this->buttonExit->TabIndex = 9;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(168, 198);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->comboBoxDay);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Panasenko";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = "";
		textBox3->Text = "";
		comboBoxDay->SelectedIndex = -1;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox3->Text = "";

		string control = msclr::interop::marshal_as <std::string>(textBox1->Text);
		int flag = 0;
		for (auto a : control)                                                          // проверка на наличие букв 
			if (!(a >= '0' && a <= '9'))
			{
				flag = 1;
				break;
			}

		if (textBox1->Text != "" && flag == 0
			&& textBox1->Text != "Только цифры"
			&& textBox1->Text != "Введите время"
			&& comboBoxDay->SelectedIndex != -1)
		{
			int ind = comboBoxDay->SelectedIndex;
			res.set_day(ind);
			res.set_minutes(Convert::ToInt32(textBox1->Text));
			textBox3->Text = Convert::ToString(res.calcule_price()) + " грн.";
		}
		else
		{
			if (flag == 1 && textBox1->Text != "Введите время" && textBox1->Text != "Только цифры")
			{
				textBox1->Text = "Только цифры";

				if (comboBoxDay->SelectedIndex == -1)
					comboBoxDay->Text = "Выберете день";

			}

			else if (textBox1->Text == "")
			{
				textBox1->Text = "Введите время";

				if (comboBoxDay->SelectedIndex == -1)
					comboBoxDay->Text = "Выберете день";
			}

			else
				comboBoxDay->Text = "Выберете день";
		}
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
