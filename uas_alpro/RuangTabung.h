#pragma once

namespace uasalpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RuangTabung
	/// </summary>
	public ref class RuangTabung : public System::Windows::Forms::Form
	{
	public:
		RuangTabung(void)
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
		~RuangTabung()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RuangTabung::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(205, 673);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 24);
			this->label6->TabIndex = 35;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button9->Location = System::Drawing::Point(242, 624);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(148, 42);
			this->button9->TabIndex = 34;
			this->button9->Text = L"Kembali";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &RuangTabung::button9_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(260, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 34);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RuangTabung::button3_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(360, 497);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 34);
			this->label5->TabIndex = 32;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(140, 497);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 34);
			this->label4->TabIndex = 31;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(328, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 35);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Hitung Luas";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RuangTabung::button2_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(109, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 35);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Hitung Volume";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RuangTabung::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox2->Location = System::Drawing::Point(153, 379);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(238, 34);
			this->textBox2->TabIndex = 28;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Location = System::Drawing::Point(153, 314);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(238, 34);
			this->textBox1->TabIndex = 27;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(149, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 24);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Masukkan Tinggi Tabung";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(149, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 24);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Masukkan Jari-jari";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(251, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 27);
			this->label1->TabIndex = 24;
			this->label1->Text = L"TABUNG";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RuangTabung
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(622, 913);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RuangTabung";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menghitung Volume dan Luas Permukaan Tabung";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, t;
		if (Int32::TryParse(textBox1->Text, r) && Int32::TryParse(textBox2->Text, t)) {
			double phi = 3.14159265358979323846;
			double alas = phi * r * r;
			double volume = alas * t;
			label4->Text = Convert::ToString(volume);
			label6->Text = "";
		}
		else {
			label6->Text = "Masukkan Jari-jari/Tinggi!";
			label4->Text = "";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, t;
		if (Int32::TryParse(textBox1->Text, r) && Int32::TryParse(textBox2->Text, t)) {
			double phi = 3.14159265358979323846;
			double alas = phi * r * r;
			double keliling = phi * 2 * r;
			double lp = 2 * alas + keliling * t;
			label5->Text = Convert::ToString(lp);
			label6->Text = "";
		}
		else {
			label6->Text = "Masukkan Jari-jari/Tinggi!";
			label5->Text = "";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		label4->Text = "";
		label5->Text = "";
		label6->Text = "";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
