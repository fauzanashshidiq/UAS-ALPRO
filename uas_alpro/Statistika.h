#pragma once
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Statistika
	/// </summary>
	public ref class Statistika : public System::Windows::Forms::Form
	{
	public:
		Statistika(void)
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
		~Statistika()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistika::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(126, 299);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Masukkan Data";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Location = System::Drawing::Point(130, 322);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(365, 34);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(124, 240);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"KALKULATOR STATISTIKA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(130, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Hitung";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Statistika::button1_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(221, 456);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 34);
			this->label4->TabIndex = 8;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(126, 460);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"MEAN";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(221, 507);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 34);
			this->label5->TabIndex = 10;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(126, 511);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"MEDIAN";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(221, 560);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 34);
			this->label7->TabIndex = 12;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(126, 564);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 24);
			this->label8->TabIndex = 11;
			this->label8->Text = L"MODUS";
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(239, 634);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 42);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Kembali Ke Menu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Statistika::button2_Click);
			// 
			// Statistika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Statistika";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menghitung Statistika";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<double> data;
		System::String^ inputString = textBox1->Text;
		std::string input = msclr::interop::marshal_as<std::string>(inputString);
		std::stringstream ss(input);
		std::string angka;

		while (std::getline(ss, angka, ',')) {
			try {
				double nilai = std::stod(angka);
				data.push_back(nilai);
			}
			catch (const std::exception&) {
				MessageBox::Show("Input tidak valid. Mohon masukkan angka yang dipisahkan oleh koma.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		// Menghitung mean
		double jumlah = std::accumulate(data.begin(), data.end(), 0.0);
		double rata_rata = jumlah / data.size();

		// Menghitung median
		std::sort(data.begin(), data.end());
		double median;
		if (data.size() % 2 == 0)
			median = (data[data.size() / 2 - 1] + data[data.size() / 2]) / 2;
		else
			median = data[data.size() / 2];

		// Menghitung modus
		std::unordered_map<double, int> frekuensi;
		for (double num : data) {
			frekuensi[num]++;
		}
		int max_count = 0;
		double modus = data[0];
		for (const auto& pasangan : frekuensi) {
			if (pasangan.second > max_count) {
				max_count = pasangan.second;
				modus = pasangan.first;
			}
		}

		// Menampilkan hasil
		label4->Text = rata_rata.ToString();
		label5->Text = median.ToString();
		label7->Text = modus.ToString();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
