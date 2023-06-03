#pragma once

namespace begemot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;
	using namespace System::Text;

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

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(20, 18);
			this->panel1->Margin = System::Windows::Forms::Padding(5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 517);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::DarkGray;
			this->button3->Location = System::Drawing::Point(87, 410);
			this->button3->Margin = System::Windows::Forms::Padding(10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 31);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Записать в файл ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 58);
			this->textBox1->Margin = System::Windows::Forms::Padding(10);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(347, 281);
			this->textBox1->TabIndex = 13;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::DarkGray;
			this->button2->Location = System::Drawing::Point(87, 461);
			this->button2->Margin = System::Windows::Forms::Padding(10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 31);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Прочитать из файла ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(87, 359);
			this->button1->Margin = System::Windows::Forms::Padding(10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 31);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Очистить поле";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(100, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Входные данные";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Location = System::Drawing::Point(451, 18);
			this->panel2->Margin = System::Windows::Forms::Padding(5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(400, 516);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::DarkGray;
			this->button4->Location = System::Drawing::Point(94, 432);
			this->button4->Margin = System::Windows::Forms::Padding(10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 31);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Произвести замену";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(28, 58);
			this->textBox2->Margin = System::Windows::Forms::Padding(10);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(347, 281);
			this->textBox2->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Highlight;
			this->label2->ForeColor = System::Drawing::Color::DarkGray;
			this->label2->Location = System::Drawing::Point(107, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Выходные данные";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::DarkGray;
			this->button6->Location = System::Drawing::Point(94, 381);
			this->button6->Margin = System::Windows::Forms::Padding(10);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 31);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Очистить поле";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(862, 546);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximumSize = System::Drawing::Size(880, 593);
			this->MinimumSize = System::Drawing::Size(880, 593);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ sw = gcnew StreamWriter("f.txt", false);
		sw->WriteLine(textBox1->Text);
		sw->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		StreamReader^ sr = gcnew StreamReader("f.txt");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr)
		{
			textBox1->Text += line + "\r\n";
		}
		sr->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		StreamReader^ sr1 = gcnew StreamReader("f.txt");
		String^ line;
		while ((line = sr1->ReadLine()) != nullptr)
		{
			textBox1->Text += line + "\r\n";
		}
		sr1->Close();

		textBox2->Text = "";
		StreamReader^ sr2 = gcnew StreamReader("f.txt");
		Char symbol;
		while (sr2->Peek() >= 0)
		{
			symbol = Convert::ToChar(sr2->Read());
			if (symbol == '-')
			{
				textBox2->Text += "0";
				while (sr2->Peek() >= 0)
				{
					symbol = Convert::ToChar(sr2->Read());
					if (symbol == ' ')
					{
						textBox2->Text += symbol;
						break;
					}
				}
			}
			else
			{
				textBox2->Text += symbol;
			}
		}
		sr2->Close();

		StreamWriter^ sw = gcnew StreamWriter("f.txt", false);
		sw->WriteLine(textBox2->Text);
		sw->Close();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '-') || (e->KeyChar == ' ') || (e->KeyChar == '\b')) return;
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	};
}
