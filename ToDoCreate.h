#pragma once
#include "DayFrame.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToDoCreate
	/// </summary>
	public ref class ToDoCreate : public System::Windows::Forms::Form
	{
	public:
		ToDoCreate(void)
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
		~ToDoCreate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ToDoCreate::typeid));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Plum;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(684, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 31);
			this->button8->TabIndex = 13;
			this->button8->Text = L" Home";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ToDoCreate::button8_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(286, 21);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(184, 38);
			this->label49->TabIndex = 14;
			this->label49->Text = L"Add To-Do";
			this->label49->Click += gcnew System::EventHandler(this, &ToDoCreate::label49_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 22);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name of To-Do item:";
			this->label1->Click += gcnew System::EventHandler(this, &ToDoCreate::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(350, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 22);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ToDoCreate::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(120, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Priority Type:";
			this->label2->Click += gcnew System::EventHandler(this, &ToDoCreate::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(350, 130);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(324, 24);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ToDoCreate::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(120, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(218, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Notify me date(mm/dd/yy):";
			this->label3->Click += gcnew System::EventHandler(this, &ToDoCreate::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(350, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(324, 22);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ToDoCreate::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(120, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 22);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Notify me time(0-23/0-59):";
			this->label4->Click += gcnew System::EventHandler(this, &ToDoCreate::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(350, 212);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(324, 22);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ToDoCreate::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(120, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 22);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Repeat Reminder\?";
			this->label5->Click += gcnew System::EventHandler(this, &ToDoCreate::label5_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(350, 252);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(324, 24);
			this->comboBox2->TabIndex = 24;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ToDoCreate::comboBox2_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(120, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 22);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Note:";
			this->label6->Click += gcnew System::EventHandler(this, &ToDoCreate::label6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Sienna;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 590);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 31);
			this->button1->TabIndex = 26;
			this->button1->Text = L" Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ToDoCreate::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(350, 290);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(324, 22);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &ToDoCreate::textBox4_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(678, 590);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 31);
			this->button2->TabIndex = 28;
			this->button2->Text = L" Submit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ToDoCreate::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 31);
			this->button3->TabIndex = 29;
			this->button3->Text = L" Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ToDoCreate::button3_Click);
			// 
			// ToDoCreate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->button8);
			this->Name = L"ToDoCreate";
			this->Text = L"ToDoCreate";
			this->Load += gcnew System::EventHandler(this, &ToDoCreate::ToDoCreate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home button

	}
	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//Testbox for notify me date

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Drop down for priority type

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Text box for Name of to-do item

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Text box for notify time
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Repeat reminder drop down menu

}
private: System::Void ToDoCreate_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Delete button
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Text box for notes
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Submit button
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cancel button

}
};
}
