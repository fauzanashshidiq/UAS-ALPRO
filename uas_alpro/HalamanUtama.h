#pragma once
#include "HitungPersamaan.h"
#include "BangunDatar.h"
#include "BangunRuang.h"
#include "PersamaanKuadrat.h"
#include "Statistika.h"

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HalamanUtama
	/// </summary>
	public ref class HalamanUtama : public System::Windows::Forms::Form
	{
	public:
		HalamanUtama(void)
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
		~HalamanUtama()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Menu;
	private: System::Windows::Forms::Button^ btn_persamaan;
	private: System::Windows::Forms::Button^ btn_bangun_datar;
	private: System::Windows::Forms::Button^ btn_bangun_ruang;
	private: System::Windows::Forms::Button^ btn_persamaan_kuadrat;
	private: System::Windows::Forms::Button^ btn_keluar;
	private: System::Windows::Forms::Button^ btn_statistika_dasar;

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HalamanUtama::typeid));
			this->Menu = (gcnew System::Windows::Forms::Label());
			this->btn_persamaan = (gcnew System::Windows::Forms::Button());
			this->btn_bangun_datar = (gcnew System::Windows::Forms::Button());
			this->btn_bangun_ruang = (gcnew System::Windows::Forms::Button());
			this->btn_persamaan_kuadrat = (gcnew System::Windows::Forms::Button());
			this->btn_keluar = (gcnew System::Windows::Forms::Button());
			this->btn_statistika_dasar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Menu->AutoSize = true;
			this->Menu->BackColor = System::Drawing::Color::Transparent;
			this->Menu->Cursor = System::Windows::Forms::Cursors::Default;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Menu->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Menu->Location = System::Drawing::Point(243, 146);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(138, 46);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"MENU";
			this->Menu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Menu->Click += gcnew System::EventHandler(this, &HalamanUtama::label1_Click);
			// 
			// btn_persamaan
			// 
			this->btn_persamaan->AutoSize = true;
			this->btn_persamaan->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_persamaan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_persamaan->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_persamaan->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_persamaan->Location = System::Drawing::Point(144, 216);
			this->btn_persamaan->Name = L"btn_persamaan";
			this->btn_persamaan->Size = System::Drawing::Size(341, 74);
			this->btn_persamaan->TabIndex = 1;
			this->btn_persamaan->Text = L"Menghitung Persamaan";
			this->btn_persamaan->UseVisualStyleBackColor = false;
			this->btn_persamaan->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_persamaan_Click);
			// 
			// btn_bangun_datar
			// 
			this->btn_bangun_datar->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_bangun_datar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_bangun_datar->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_bangun_datar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_bangun_datar->Location = System::Drawing::Point(144, 393);
			this->btn_bangun_datar->Name = L"btn_bangun_datar";
			this->btn_bangun_datar->Size = System::Drawing::Size(341, 74);
			this->btn_bangun_datar->TabIndex = 2;
			this->btn_bangun_datar->Text = L"Menghitung Luas dan Keliling \r\nBangun Datar";
			this->btn_bangun_datar->UseVisualStyleBackColor = false;
			this->btn_bangun_datar->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_bangun_datar_Click);
			// 
			// btn_bangun_ruang
			// 
			this->btn_bangun_ruang->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_bangun_ruang->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_bangun_ruang->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_bangun_ruang->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_bangun_ruang->Location = System::Drawing::Point(144, 480);
			this->btn_bangun_ruang->Name = L"btn_bangun_ruang";
			this->btn_bangun_ruang->Size = System::Drawing::Size(341, 74);
			this->btn_bangun_ruang->TabIndex = 3;
			this->btn_bangun_ruang->Text = L"Menghitung Volume dan Luas Permukaan Bangun Ruang";
			this->btn_bangun_ruang->UseVisualStyleBackColor = false;
			this->btn_bangun_ruang->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_bangun_ruang_Click);
			// 
			// btn_persamaan_kuadrat
			// 
			this->btn_persamaan_kuadrat->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_persamaan_kuadrat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_persamaan_kuadrat->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_persamaan_kuadrat->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_persamaan_kuadrat->Location = System::Drawing::Point(144, 304);
			this->btn_persamaan_kuadrat->Name = L"btn_persamaan_kuadrat";
			this->btn_persamaan_kuadrat->Size = System::Drawing::Size(341, 74);
			this->btn_persamaan_kuadrat->TabIndex = 4;
			this->btn_persamaan_kuadrat->Text = L"Menghitung Akar-akar Penyelesaian Persamaan Kuadrat";
			this->btn_persamaan_kuadrat->UseVisualStyleBackColor = false;
			this->btn_persamaan_kuadrat->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_persamaan_kuadrat_Click);
			// 
			// btn_keluar
			// 
			this->btn_keluar->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_keluar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_keluar->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_keluar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_keluar->Location = System::Drawing::Point(251, 654);
			this->btn_keluar->Name = L"btn_keluar";
			this->btn_keluar->Size = System::Drawing::Size(128, 50);
			this->btn_keluar->TabIndex = 5;
			this->btn_keluar->Text = L"KELUAR";
			this->btn_keluar->UseVisualStyleBackColor = false;
			this->btn_keluar->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_keluar_Click);
			// 
			// btn_statistika_dasar
			// 
			this->btn_statistika_dasar->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_statistika_dasar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_statistika_dasar->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_statistika_dasar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_statistika_dasar->Location = System::Drawing::Point(144, 568);
			this->btn_statistika_dasar->Name = L"btn_statistika_dasar";
			this->btn_statistika_dasar->Size = System::Drawing::Size(341, 74);
			this->btn_statistika_dasar->TabIndex = 6;
			this->btn_statistika_dasar->Text = L"Menghitung Statistika Dasar";
			this->btn_statistika_dasar->UseVisualStyleBackColor = false;
			this->btn_statistika_dasar->Click += gcnew System::EventHandler(this, &HalamanUtama::btn_statistika_dasar_Click);
			// 
			// HalamanUtama
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->btn_statistika_dasar);
			this->Controls->Add(this->btn_keluar);
			this->Controls->Add(this->btn_persamaan_kuadrat);
			this->Controls->Add(this->btn_bangun_ruang);
			this->Controls->Add(this->btn_bangun_datar);
			this->Controls->Add(this->btn_persamaan);
			this->Controls->Add(this->Menu);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"HalamanUtama";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MENU";
			this->Load += gcnew System::EventHandler(this, &HalamanUtama::HalamanUtama_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HalamanUtama_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_persamaan_Click(System::Object^ sender, System::EventArgs^ e) {
		HalamanUtama::Visible = false;
		HitungPersamaan^ p2 = gcnew HitungPersamaan();
		p2->ShowDialog();
		HalamanUtama::Visible = true;
	}
	private: System::Void btn_bangun_datar_Click(System::Object^ sender, System::EventArgs^ e) {
		HalamanUtama::Visible = false;
		BangunDatar^ p2 = gcnew BangunDatar();
		p2->ShowDialog();
		HalamanUtama::Visible = true;
	}
	private: System::Void btn_bangun_ruang_Click(System::Object^ sender, System::EventArgs^ e) {
		HalamanUtama::Visible = false;
		BangunRuang^ p2 = gcnew BangunRuang();
		p2->ShowDialog();
		HalamanUtama::Visible = true;
	}
	private: System::Void btn_persamaan_kuadrat_Click(System::Object^ sender, System::EventArgs^ e) {
		HalamanUtama::Visible = false;
		PersamaanKuadrat^ p2 = gcnew PersamaanKuadrat();
		p2->ShowDialog();
		HalamanUtama::Visible = true;
	}
	private: System::Void btn_keluar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_statistika_dasar_Click(System::Object^ sender, System::EventArgs^ e) {
		HalamanUtama::Visible = false;
		Statistika^ p2 = gcnew Statistika();
		p2->ShowDialog();
		HalamanUtama::Visible = true;
	}
};
}
