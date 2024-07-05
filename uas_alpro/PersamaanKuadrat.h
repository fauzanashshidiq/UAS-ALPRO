#pragma once

#include <cmath>

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PersamaanKuadrat
	/// </summary>
	public ref class PersamaanKuadrat : public System::Windows::Forms::Form
	{
	public:
		PersamaanKuadrat(void)
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
		~PersamaanKuadrat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersamaanKuadrat::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(126, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MENGHITUNG AKAR KUADRAT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(133, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Masukkan nilai a";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Location = System::Drawing::Point(131, 301);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(279, 34);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox2->Location = System::Drawing::Point(132, 364);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(279, 34);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(134, 342);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Masukkan nilai b";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox3->Location = System::Drawing::Point(132, 428);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(279, 34);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(134, 406);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Masukkan nilai c";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(132, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Hitung";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PersamaanKuadrat::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(332, 477);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PersamaanKuadrat::button2_Click_1);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(132, 593);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 34);
			this->label5->TabIndex = 10;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &PersamaanKuadrat::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(127, 569);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"HASIL AKAR:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Location = System::Drawing::Point(133, 526);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 26);
			this->label7->TabIndex = 11;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Click += gcnew System::EventHandler(this, &PersamaanKuadrat::label7_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(237, 660);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 42);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Kembali Ke Menu";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PersamaanKuadrat::button3_Click);
			// 
			// PersamaanKuadrat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PersamaanKuadrat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menghitung Akar-Akar Penyelesaian Persamaan Kuadrat";
			this->Load += gcnew System::EventHandler(this, &PersamaanKuadrat::PersamaanKuadrat_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double a, b, c;
			if (Double::TryParse(textBox1->Text, a) && Double::TryParse(textBox2->Text, b) && Double::TryParse(textBox3->Text, c)) {
				double delta = b * b - 4 * a * c;
				label7->Text = a + "x^2 + " + b + "x + " + c;

				if (delta > 0) {
					double x1 = (-b + sqrt(delta)) / (2 * a);
					double x2 = (-b - sqrt(delta)) / (2 * a);
					label5->Text = "x1 = " + x1 + ", x2 = " + x2;
				}
				else if (delta == 0) {
					double x = -b / (2 * a);
					label5->Text = "x = " + x;
				}
				else {
					label5->Text = "Akar Imaginer";
				}
			}
			
		}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PersamaanKuadrat_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		label5->Text = "";
		label7->Text = "";
	}
};
}
