#pragma once
#include "ToDoCreate.h"
#include "MainFrame.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DayFrame
	/// </summary>
	public ref class DayFrame : public System::Windows::Forms::Form
	{
	public:
		DayFrame(void)
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
		~DayFrame()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DayFrame::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->textBox33);
			this->panel1->Controls->Add(this->textBox34);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->textBox35);
			this->panel1->Controls->Add(this->textBox36);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->textBox37);
			this->panel1->Controls->Add(this->textBox38);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->textBox39);
			this->panel1->Controls->Add(this->textBox40);
			this->panel1->Controls->Add(this->label40);
			this->panel1->Controls->Add(this->label41);
			this->panel1->Controls->Add(this->textBox41);
			this->panel1->Controls->Add(this->textBox42);
			this->panel1->Controls->Add(this->label42);
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->textBox43);
			this->panel1->Controls->Add(this->textBox44);
			this->panel1->Controls->Add(this->label44);
			this->panel1->Controls->Add(this->label45);
			this->panel1->Controls->Add(this->textBox45);
			this->panel1->Controls->Add(this->textBox46);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->textBox47);
			this->panel1->Controls->Add(this->textBox48);
			this->panel1->Controls->Add(this->label48);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->textBox20);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->textBox21);
			this->panel1->Controls->Add(this->textBox22);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->textBox23);
			this->panel1->Controls->Add(this->textBox24);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->textBox25);
			this->panel1->Controls->Add(this->textBox26);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->textBox27);
			this->panel1->Controls->Add(this->textBox28);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->textBox29);
			this->panel1->Controls->Add(this->textBox30);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->textBox31);
			this->panel1->Controls->Add(this->textBox32);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(50, 106);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 486);
			this->panel1->TabIndex = 2;
			this->panel1->TabStop = true;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DayFrame::panel1_Paint);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(50, 1416);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(57, 16);
			this->label33->TabIndex = 97;
			this->label33->Text = L"12:00pm";
			this->label33->Click += gcnew System::EventHandler(this, &DayFrame::label33_Click);
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(110, 1416);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(520, 22);
			this->textBox33->TabIndex = 96;
			this->textBox33->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox33_TextChanged);
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(110, 1386);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(520, 22);
			this->textBox34->TabIndex = 95;
			this->textBox34->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox34_TextChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(50, 1386);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(57, 16);
			this->label34->TabIndex = 94;
			this->label34->Text = L"11:30pm";
			this->label34->Click += gcnew System::EventHandler(this, &DayFrame::label34_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(50, 1356);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(57, 16);
			this->label35->TabIndex = 93;
			this->label35->Text = L"11:00pm";
			this->label35->Click += gcnew System::EventHandler(this, &DayFrame::label35_Click);
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(110, 1356);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(520, 22);
			this->textBox35->TabIndex = 92;
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox35_TextChanged);
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(110, 1326);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(520, 22);
			this->textBox36->TabIndex = 91;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox36_TextChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(50, 1326);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(57, 16);
			this->label36->TabIndex = 90;
			this->label36->Text = L"10:30pm";
			this->label36->Click += gcnew System::EventHandler(this, &DayFrame::label36_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(50, 1296);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(57, 16);
			this->label37->TabIndex = 89;
			this->label37->Text = L"10:00pm";
			this->label37->Click += gcnew System::EventHandler(this, &DayFrame::label37_Click);
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(110, 1296);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(520, 22);
			this->textBox37->TabIndex = 88;
			this->textBox37->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox37_TextChanged);
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(110, 1266);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(520, 22);
			this->textBox38->TabIndex = 87;
			this->textBox38->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox38_TextChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(50, 1266);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(50, 16);
			this->label38->TabIndex = 86;
			this->label38->Text = L"9:30pm";
			this->label38->Click += gcnew System::EventHandler(this, &DayFrame::label38_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(50, 1236);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(50, 16);
			this->label39->TabIndex = 85;
			this->label39->Text = L"9:00pm";
			this->label39->Click += gcnew System::EventHandler(this, &DayFrame::label39_Click);
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(110, 1236);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(520, 22);
			this->textBox39->TabIndex = 84;
			this->textBox39->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox39_TextChanged);
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(110, 1206);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(520, 22);
			this->textBox40->TabIndex = 83;
			this->textBox40->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox40_TextChanged);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(50, 1206);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(50, 16);
			this->label40->TabIndex = 82;
			this->label40->Text = L"8:30pm";
			this->label40->Click += gcnew System::EventHandler(this, &DayFrame::label40_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(50, 1176);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(50, 16);
			this->label41->TabIndex = 81;
			this->label41->Text = L"8:00pm";
			this->label41->Click += gcnew System::EventHandler(this, &DayFrame::label41_Click);
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(110, 1176);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(520, 22);
			this->textBox41->TabIndex = 80;
			this->textBox41->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox41_TextChanged);
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(110, 1146);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(520, 22);
			this->textBox42->TabIndex = 79;
			this->textBox42->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox42_TextChanged);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(50, 1146);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(50, 16);
			this->label42->TabIndex = 78;
			this->label42->Text = L"7:30pm";
			this->label42->Click += gcnew System::EventHandler(this, &DayFrame::label42_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(50, 1116);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(50, 16);
			this->label43->TabIndex = 77;
			this->label43->Text = L"7:00pm";
			this->label43->Click += gcnew System::EventHandler(this, &DayFrame::label43_Click);
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(110, 1116);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(520, 22);
			this->textBox43->TabIndex = 76;
			this->textBox43->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox43_TextChanged);
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(110, 1086);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(520, 22);
			this->textBox44->TabIndex = 75;
			this->textBox44->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox44_TextChanged);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(50, 1086);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(50, 16);
			this->label44->TabIndex = 74;
			this->label44->Text = L"6:30pm";
			this->label44->Click += gcnew System::EventHandler(this, &DayFrame::label44_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(50, 1056);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(50, 16);
			this->label45->TabIndex = 73;
			this->label45->Text = L"6:00pm";
			this->label45->Click += gcnew System::EventHandler(this, &DayFrame::label45_Click);
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(110, 1056);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(520, 22);
			this->textBox45->TabIndex = 72;
			this->textBox45->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox45_TextChanged);
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(110, 1026);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(520, 22);
			this->textBox46->TabIndex = 71;
			this->textBox46->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox46_TextChanged);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(50, 1026);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(50, 16);
			this->label46->TabIndex = 70;
			this->label46->Text = L"5:30pm";
			this->label46->Click += gcnew System::EventHandler(this, &DayFrame::label46_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(50, 996);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(50, 16);
			this->label47->TabIndex = 69;
			this->label47->Text = L"5:00pm";
			this->label47->Click += gcnew System::EventHandler(this, &DayFrame::label47_Click);
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(110, 996);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(520, 22);
			this->textBox47->TabIndex = 68;
			this->textBox47->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox47_TextChanged);
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(110, 966);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(520, 22);
			this->textBox48->TabIndex = 67;
			this->textBox48->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox48_TextChanged);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(50, 966);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(50, 16);
			this->label48->TabIndex = 66;
			this->label48->Text = L"4:30pm";
			this->label48->Click += gcnew System::EventHandler(this, &DayFrame::label48_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(50, 938);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 16);
			this->label17->TabIndex = 64;
			this->label17->Text = L"4:00pm";
			this->label17->Click += gcnew System::EventHandler(this, &DayFrame::label17_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(110, 938);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(520, 22);
			this->textBox17->TabIndex = 63;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(110, 908);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(520, 22);
			this->textBox18->TabIndex = 62;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox18_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(50, 908);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(50, 16);
			this->label18->TabIndex = 61;
			this->label18->Text = L"3:30pm";
			this->label18->Click += gcnew System::EventHandler(this, &DayFrame::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(50, 878);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 16);
			this->label19->TabIndex = 60;
			this->label19->Text = L"3:00pm";
			this->label19->Click += gcnew System::EventHandler(this, &DayFrame::label19_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(110, 878);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(520, 22);
			this->textBox19->TabIndex = 59;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox19_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(110, 848);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(520, 22);
			this->textBox20->TabIndex = 58;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox20_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(50, 848);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(50, 16);
			this->label20->TabIndex = 57;
			this->label20->Text = L"2:30pm";
			this->label20->Click += gcnew System::EventHandler(this, &DayFrame::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(50, 818);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 16);
			this->label21->TabIndex = 56;
			this->label21->Text = L"2:00pm";
			this->label21->Click += gcnew System::EventHandler(this, &DayFrame::label21_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(110, 818);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(520, 22);
			this->textBox21->TabIndex = 55;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox21_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(110, 788);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(520, 22);
			this->textBox22->TabIndex = 54;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox22_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(50, 788);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 16);
			this->label22->TabIndex = 53;
			this->label22->Text = L"1:30pm";
			this->label22->Click += gcnew System::EventHandler(this, &DayFrame::label22_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(50, 758);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(50, 16);
			this->label23->TabIndex = 52;
			this->label23->Text = L"1:00pm";
			this->label23->Click += gcnew System::EventHandler(this, &DayFrame::label23_Click);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(110, 758);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(520, 22);
			this->textBox23->TabIndex = 51;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox23_TextChanged);
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(110, 728);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(520, 22);
			this->textBox24->TabIndex = 50;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox24_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(50, 728);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(57, 16);
			this->label24->TabIndex = 49;
			this->label24->Text = L"12:30pm";
			this->label24->Click += gcnew System::EventHandler(this, &DayFrame::label24_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(50, 698);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(57, 16);
			this->label25->TabIndex = 48;
			this->label25->Text = L"12:00pm";
			this->label25->Click += gcnew System::EventHandler(this, &DayFrame::label25_Click);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(110, 698);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(520, 22);
			this->textBox25->TabIndex = 47;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox25_TextChanged);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(110, 668);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(520, 22);
			this->textBox26->TabIndex = 46;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox26_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(50, 668);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(57, 16);
			this->label26->TabIndex = 45;
			this->label26->Text = L"11:00am";
			this->label26->Click += gcnew System::EventHandler(this, &DayFrame::label26_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(50, 638);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(57, 16);
			this->label27->TabIndex = 44;
			this->label27->Text = L"10:30am";
			this->label27->Click += gcnew System::EventHandler(this, &DayFrame::label27_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(110, 638);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(520, 22);
			this->textBox27->TabIndex = 43;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox27_TextChanged);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(110, 608);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(520, 22);
			this->textBox28->TabIndex = 42;
			this->textBox28->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox28_TextChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(50, 608);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(57, 16);
			this->label28->TabIndex = 41;
			this->label28->Text = L"10:00am";
			this->label28->Click += gcnew System::EventHandler(this, &DayFrame::label28_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(50, 578);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 16);
			this->label29->TabIndex = 40;
			this->label29->Text = L"9:30am";
			this->label29->Click += gcnew System::EventHandler(this, &DayFrame::label29_Click);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(110, 578);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(520, 22);
			this->textBox29->TabIndex = 39;
			this->textBox29->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox29_TextChanged);
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(110, 548);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(520, 22);
			this->textBox30->TabIndex = 38;
			this->textBox30->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox30_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(50, 548);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(50, 16);
			this->label30->TabIndex = 37;
			this->label30->Text = L"9:00am";
			this->label30->Click += gcnew System::EventHandler(this, &DayFrame::label30_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(50, 518);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(50, 16);
			this->label31->TabIndex = 36;
			this->label31->Text = L"8:30am";
			this->label31->Click += gcnew System::EventHandler(this, &DayFrame::label31_Click);
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(110, 518);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(520, 22);
			this->textBox31->TabIndex = 35;
			this->textBox31->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox31_TextChanged);
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(110, 488);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(520, 22);
			this->textBox32->TabIndex = 34;
			this->textBox32->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox32_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(50, 488);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(50, 16);
			this->label32->TabIndex = 33;
			this->label32->Text = L"8:00am";
			this->label32->Click += gcnew System::EventHandler(this, &DayFrame::label32_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 460);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 32;
			this->label9->Text = L"7:30am";
			this->label9->Click += gcnew System::EventHandler(this, &DayFrame::label9_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(110, 460);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(520, 22);
			this->textBox9->TabIndex = 31;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(110, 430);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(520, 22);
			this->textBox10->TabIndex = 30;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox10_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(50, 430);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 29;
			this->label10->Text = L"7:00am";
			this->label10->Click += gcnew System::EventHandler(this, &DayFrame::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(50, 400);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 16);
			this->label11->TabIndex = 28;
			this->label11->Text = L"6:30am";
			this->label11->Click += gcnew System::EventHandler(this, &DayFrame::label11_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(110, 400);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(520, 22);
			this->textBox11->TabIndex = 27;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(110, 370);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(520, 22);
			this->textBox12->TabIndex = 26;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox12_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(50, 370);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 16);
			this->label12->TabIndex = 25;
			this->label12->Text = L"6:00am";
			this->label12->Click += gcnew System::EventHandler(this, &DayFrame::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(50, 340);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 24;
			this->label13->Text = L"5:30am";
			this->label13->Click += gcnew System::EventHandler(this, &DayFrame::label13_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(110, 340);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(520, 22);
			this->textBox13->TabIndex = 23;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox13_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(110, 310);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(520, 22);
			this->textBox14->TabIndex = 22;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox14_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(50, 310);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"5:00am";
			this->label14->Click += gcnew System::EventHandler(this, &DayFrame::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(50, 280);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 16);
			this->label15->TabIndex = 20;
			this->label15->Text = L"4:30am";
			this->label15->Click += gcnew System::EventHandler(this, &DayFrame::label15_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(110, 280);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(520, 22);
			this->textBox15->TabIndex = 19;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(110, 250);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(520, 22);
			this->textBox16->TabIndex = 18;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox16_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(50, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"4:00am";
			this->label16->Click += gcnew System::EventHandler(this, &DayFrame::label16_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"3:30am";
			this->label5->Click += gcnew System::EventHandler(this, &DayFrame::label5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(110, 220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(520, 22);
			this->textBox5->TabIndex = 15;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(110, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(520, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"3:00am";
			this->label6->Click += gcnew System::EventHandler(this, &DayFrame::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"2:30am";
			this->label7->Click += gcnew System::EventHandler(this, &DayFrame::label7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(110, 160);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(520, 22);
			this->textBox7->TabIndex = 11;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(110, 130);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(520, 22);
			this->textBox8->TabIndex = 10;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox8_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"2:00am";
			this->label8->Click += gcnew System::EventHandler(this, &DayFrame::label8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"1:30am";
			this->label3->Click += gcnew System::EventHandler(this, &DayFrame::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(520, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(110, 70);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(520, 22);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"1:00am";
			this->label4->Click += gcnew System::EventHandler(this, &DayFrame::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"12:30am";
			this->label1->Click += gcnew System::EventHandler(this, &DayFrame::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(520, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(520, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &DayFrame::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"12:00am";
			this->label2->Click += gcnew System::EventHandler(this, &DayFrame::label2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(50, 609);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"To-Do";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DayFrame::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(637, 609);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Find-Time";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DayFrame::button2_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(310, 58);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(113, 22);
			this->label49->TabIndex = 5;
			this->label49->Text = L"Todays Date";
			this->label49->Click += gcnew System::EventHandler(this, &DayFrame::label49_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(500, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L" +";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DayFrame::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(223, 49);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 31);
			this->button4->TabIndex = 7;
			this->button4->Text = L"  -";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DayFrame::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(429, 49);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 31);
			this->button5->TabIndex = 8;
			this->button5->Text = L"...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &DayFrame::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(50, 30);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 31);
			this->button6->TabIndex = 9;
			this->button6->Text = L"To-Do List";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &DayFrame::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DayFrame::comboBox1_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(50, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 33);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Change Priorty";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &DayFrame::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(623, 29);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 31);
			this->button8->TabIndex = 12;
			this->button8->Text = L" New";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &DayFrame::button8_Click);
			// 
			// DayFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"DayFrame";
			this->Text = L"DayFrame";
			this->Load += gcnew System::EventHandler(this, &DayFrame::DayFrame_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DayFrame_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	panel1->AutoScroll = true;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox32_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox31_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox30_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox29_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox28_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox27_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox23_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox33_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox34_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox36_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox37_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox38_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox39_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox40_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label40_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox41_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox42_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox43_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox44_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox45_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox46_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox47_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox48_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
