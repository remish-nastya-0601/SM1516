#pragma once

namespace SM1516 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Километраж(ум. 240 км):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(328, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Расход топлива(ум. 8.4 л/км):  ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(153, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Цена литра топлива (ум. 16.5): ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Расчёт 1 поездки:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(168, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 21);
			this->label5->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(472, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Начать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(206, 21);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Введите кол-во поездок:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(219, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 29);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(328, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 21);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Расчёт всех поездок:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(506, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 21);
			this->label8->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(219, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 10;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(570, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 29);
			this->textBox3->TabIndex = 11;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(404, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 29);
			this->textBox4->TabIndex = 12;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(280, 35);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Задать данные по умолчанию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 215);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Стоимость поездки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double km, fuel, pr, rez, rez2;
			int n;

			km = System::Convert::ToDouble(textBox2->Text);
			pr = System::Convert::ToDouble(textBox4->Text);
			fuel = System::Convert::ToDouble(textBox3->Text);
			
			rez = km * fuel * pr;
			label5->Text = rez.ToString();

			if (textBox1->Text != "") {
				n = System::Convert::ToInt32(textBox1->Text);
				rez2 = rez * n;
				label8->Text = rez2.ToString();
			}


		}
		catch (System::FormatException^ ) {
			MessageBox::Show("Поле заполнено неправильно или не заполнено");
		}
		
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "240" || textBox3->Text != "8,4"|| textBox4->Text != "16,5")
	{
		textBox2->Text = "240";
		textBox3->Text = "8,4";
		textBox4->Text = "16,5";
		label5->Text = "";
		label8->Text = "";
	}

}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label8->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;

}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = "";
	label8->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox2->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;

}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = "";
	label8->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox3->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;

}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = "";
	label8->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox4->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}

};
}
