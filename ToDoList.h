#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToDoList
	/// </summary>
	public ref class ToDoList : public System::Windows::Forms::Form
	{
	public:
		ToDoList(void)
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
		~ToDoList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ToDoList::typeid));
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label49->Location = System::Drawing::Point(267, 34);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(207, 38);
			this->label49->TabIndex = 15;
			this->label49->Text = L"To-Do Items";
			this->label49->Click += gcnew System::EventHandler(this, &ToDoList::label49_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Lavender;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button8->Location = System::Drawing::Point(693, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 31);
			this->button8->TabIndex = 17;
			this->button8->Text = L" Home";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ToDoList::button8_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button1->Location = System::Drawing::Point(172, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 31);
			this->button1->TabIndex = 18;
			this->button1->Text = L" Add Item";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ToDoList::button1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(172, 146);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(474, 276);
			this->checkedListBox1->TabIndex = 19;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ToDoList::checkedListBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button2->Location = System::Drawing::Point(559, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 31);
			this->button2->TabIndex = 20;
			this->button2->Text = L" Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ToDoList::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(87, 513);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(642, 23);
			this->progressBar1->TabIndex = 21;
			this->progressBar1->Click += gcnew System::EventHandler(this, &ToDoList::progressBar1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button3->Location = System::Drawing::Point(138, 476);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 31);
			this->button3->TabIndex = 22;
			this->button3->Text = L" Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ToDoList::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label1->Location = System::Drawing::Point(1, 478);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 25);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Progress Bar";
			this->label1->Click += gcnew System::EventHandler(this, &ToDoList::label1_Click);
			// 
			// ToDoList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label49);
			this->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->Name = L"ToDoList";
			this->Text = L"ToDoList";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home Button

	}
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Edit button
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//checklist box (may be a better way to implement the list of to-do's)
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add item button
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	//progress bar

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//update

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Progress bar text

}
};
}
