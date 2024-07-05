#pragma once
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HitungPersamaan
	/// </summary>
	public ref class HitungPersamaan : public System::Windows::Forms::Form
	{
	public:
		HitungPersamaan(void)
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
		~HitungPersamaan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HitungPersamaan::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(113, 254);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MENGHITUNG PERSAMAAN";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Location = System::Drawing::Point(131, 376);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(365, 34);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &HitungPersamaan::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(127, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Masukkan Persamaan";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(127, 478);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"HASIL";
			this->label3->Click += gcnew System::EventHandler(this, &HitungPersamaan::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(132, 502);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 34);
			this->label4->TabIndex = 4;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &HitungPersamaan::label4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(417, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Hitung";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HitungPersamaan::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(238, 598);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 42);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Kembali Ke Menu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &HitungPersamaan::button3_Click);
			// 
			// HitungPersamaan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"HitungPersamaan";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mengitung Persamaan";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string equation = msclr::interop::marshal_as<std::string>(textBox1->Text);

		std::stack<double> numbers;
		std::stack<char> operators;

		for (size_t i = 0; i < equation.size(); ++i) {
			if (equation[i] == ' ') {
				continue;
			}
			else if (isdigit(equation[i])) {
				int num = 0;
				while (i < equation.size() && isdigit(equation[i])) {
					num = num * 10 + (equation[i] - '0');
					++i;
				}
				numbers.push(num);
				--i;
			}
			else if (equation[i] == '(') {
				if (equation[i + 1] == '-') {
					int num = 0;
					int min = -1;
					while (isdigit(equation[i + 2])) {
						num = num * 10 + (equation[i + 2] - '0');
						i++;
					}
					numbers.push(num * min);
					i += 2;
				}
				else {
					operators.push(equation[i]);
				}
			}
			else if (equation[i] == ')') {
				while (!operators.empty() && operators.top() != '(') {
					double num2 = numbers.top();
					numbers.pop();
					double num1 = numbers.top();
					numbers.pop();
					char op = operators.top();
					operators.pop();
					double result;
					if (op == '+') {
						result = num1 + num2;
					}
					else if (op == '-') {
						result = num1 - num2;
					}
					else if (op == '*') {
						result = num1 * num2;
					}
					else {
						result = num1 / num2;
					}
					numbers.push(result);
				}
				operators.pop();
			}
			else if (equation[i] == '^') {
				int num1 = numbers.top();
				numbers.pop();
				int pangkat = 0;
				while (isdigit(equation[i + 1])) {
					pangkat = pangkat * 10 + (equation[i + 1] - '0');
					i++;
				}
				int hasil_pangkat = 1;
				for (int j = 1; j <= pangkat; j++) {
					hasil_pangkat = hasil_pangkat * num1;;
				}
				numbers.push(hasil_pangkat);
			}
			else {
				while (!operators.empty() && ((operators.top() == '*' || operators.top() == '/') || (operators.top() == '+' || operators.top() == '-') && equation[i] == '+' || equation[i] == '-')) {
					double num2 = numbers.top();
					numbers.pop();
					double num1 = numbers.top();
					numbers.pop();
					char op = operators.top();
					operators.pop();
					double result;
					if (op == '+') {
						result = num1 + num2;
					}
					else if (op == '-') {
						result = num1 - num2;
					}
					else if (op == '*') {
						result = num1 * num2;
					}
					else {
						result = num1 / num2;
					}
					numbers.push(result);
				}
				operators.push(equation[i]);
			}
		}

		while (!operators.empty()) {
			double num2 = numbers.top();
			numbers.pop();
			double num1 = numbers.top();
			numbers.pop();
			char op = operators.top();
			operators.pop();
			double result;
			if (op == '+') {
				result = num1 + num2;
			}
			else if (op == '-') {
				result = num1 - num2;
			}
			else if (op == '*') {
				result = num1 * num2;
			}
			else {
				result = num1 / num2;
			}
			numbers.push(result);
		}

		label4->Text = numbers.top().ToString();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
