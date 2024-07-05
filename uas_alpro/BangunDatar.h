#pragma once

#include "DatarPersegi.h"
#include "DatarPersegiPanjang.h"
#include "DatarJajarGenjang.h"
#include "DatarSegitiga.h"
#include "DatarBelahKetupat.h"
#include "DatarLayangLayang.h"
#include "DatarTrapesium.h"
#include "DatarLingkaran.h"

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BangunDatar
	/// </summary>
	public ref class BangunDatar : public System::Windows::Forms::Form
	{
	public:
		BangunDatar(void)
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
		~BangunDatar()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BangunDatar::typeid));
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
			this->label1->Size = System::Drawing::Size(262, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PILIH BANGUN DATAR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &BangunDatar::label1_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(105, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Persegi";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BangunDatar::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(105, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Persegi Panjang";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BangunDatar::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(105, 438);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Jajar Genjang";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BangunDatar::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(105, 521);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Segitiga";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BangunDatar::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button5->Location = System::Drawing::Point(327, 521);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 53);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Lingkaran";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BangunDatar::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button6->Location = System::Drawing::Point(327, 438);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 53);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Trapesium";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BangunDatar::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button7->Location = System::Drawing::Point(327, 357);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 53);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Layang-layang";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BangunDatar::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button8->Location = System::Drawing::Point(327, 273);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(186, 53);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Belah Ketupat";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &BangunDatar::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button9->Location = System::Drawing::Point(231, 624);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(147, 42);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Kembali Ke Menu";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &BangunDatar::button9_Click);
			// 
			// BangunDatar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
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
			this->Name = L"BangunDatar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menghitung Luas dan Keliling Bangun Datar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarPersegi^ p2 = gcnew DatarPersegi;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarPersegiPanjang^ p2 = gcnew DatarPersegiPanjang;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarJajarGenjang^ p2 = gcnew DatarJajarGenjang;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarSegitiga^ p2 = gcnew DatarSegitiga;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarBelahKetupat^ p2 = gcnew DatarBelahKetupat;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarLayangLayang^ p2 = gcnew DatarLayangLayang;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarTrapesium^ p2 = gcnew DatarTrapesium;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		BangunDatar::Visible = false;
		DatarLingkaran^ p2 = gcnew DatarLingkaran;
		p2->ShowDialog();
		BangunDatar::Visible = true;
	}
};
}
