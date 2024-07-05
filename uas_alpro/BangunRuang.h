#pragma once

#include "RuangKubus.h"
#include "RuangBalok.h"
#include "RuangPrismaSegitiga.h"
#include "RuangPrismaSegilima.h"
#include "RuangLimasSegitiga.h"
#include "RuangLimasSegiempat.h"
#include "RuangTabung.h"
#include "RuangKerucut.h"
#include "RuangBola.h"


namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BangunRuang
	/// </summary>
	public ref class BangunRuang : public System::Windows::Forms::Form
	{
	public:
		BangunRuang(void)
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
		~BangunRuang()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BangunRuang::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(176, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PILIH BANGUN RUANG";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(105, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Kubus";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BangunRuang::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(105, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Balok";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BangunRuang::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(105, 407);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 53);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Prisma Segitiga";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BangunRuang::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(105, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 53);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Prisma Segilima";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BangunRuang::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button5->Location = System::Drawing::Point(326, 482);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 53);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Kerucut";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BangunRuang::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button6->Location = System::Drawing::Point(326, 407);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 53);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Tabung";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BangunRuang::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button7->Location = System::Drawing::Point(319, 333);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 53);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Limas Segiempat";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BangunRuang::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button8->Location = System::Drawing::Point(326, 258);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(186, 53);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Limas Segitiga";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &BangunRuang::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button9->Location = System::Drawing::Point(217, 558);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 53);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Bola";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &BangunRuang::button9_Click);
			// 
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button10->Location = System::Drawing::Point(231, 650);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(147, 42);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Kembali Ke Menu";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &BangunRuang::button10_Click);
			// 
			// BangunRuang
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"BangunRuang";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menghitung Volume dan Luas Permukaan Bangun Ruang";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangKubus^ p2 = gcnew RuangKubus;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangBalok^ p2 = gcnew RuangBalok;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangPrismaSegitiga^ p2 = gcnew RuangPrismaSegitiga;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangPrismaSegilima^ p2 = gcnew RuangPrismaSegilima;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangLimasSegitiga^ p2 = gcnew RuangLimasSegitiga;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangLimasSegiempat^ p2 = gcnew RuangLimasSegiempat;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangTabung^ p2 = gcnew RuangTabung;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangKerucut^ p2 = gcnew RuangKerucut;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunRuang::Visible = false;
		RuangBola^ p2 = gcnew RuangBola;
		p2->ShowDialog();
		BangunRuang::Visible = true;
	}
};
}
