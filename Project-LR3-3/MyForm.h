#pragma once

namespace ProjectLR33 {

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
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txBegin;

	private: System::Windows::Forms::TextBox^ txEnd;
	private: System::Windows::Forms::TextBox^ txStep;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ outMax;

	private: System::Windows::Forms::Button^ BuildTable;

	private: System::Windows::Forms::Button^ closeButton;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txBegin = (gcnew System::Windows::Forms::TextBox());
			this->txEnd = (gcnew System::Windows::Forms::TextBox());
			this->txStep = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->outMax = (gcnew System::Windows::Forms::TextBox());
			this->BuildTable = (gcnew System::Windows::Forms::Button());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(14, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 90);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Шляпников Андрей \r\nГруппа БИН2152 \r\nВариант 27\r\n\r\n\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(197, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(755, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(12, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 50);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Начальное\r\nзначение";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(165, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 50);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Конечное\r\nзначение";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(307, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 50);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Шаг\r\nтаблици";
			// 
			// txBegin
			// 
			this->txBegin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txBegin->Location = System::Drawing::Point(12, 179);
			this->txBegin->Name = L"txBegin";
			this->txBegin->Size = System::Drawing::Size(100, 27);
			this->txBegin->TabIndex = 5;
			this->txBegin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txBegin->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txEnd
			// 
			this->txEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txEnd->Location = System::Drawing::Point(170, 179);
			this->txEnd->Name = L"txEnd";
			this->txEnd->Size = System::Drawing::Size(100, 27);
			this->txEnd->TabIndex = 6;
			this->txEnd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txStep
			// 
			this->txStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txStep->Location = System::Drawing::Point(303, 179);
			this->txStep->Name = L"txStep";
			this->txStep->Size = System::Drawing::Size(102, 27);
			this->txStep->TabIndex = 7;
			this->txStep->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txStep->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(620, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 50);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Наибольшее \r\nзначение функции";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// outMax
			// 
			this->outMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outMax->Location = System::Drawing::Point(625, 351);
			this->outMax->Name = L"outMax";
			this->outMax->ReadOnly = true;
			this->outMax->Size = System::Drawing::Size(198, 30);
			this->outMax->TabIndex = 10;
			this->outMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// BuildTable
			// 
			this->BuildTable->BackColor = System::Drawing::Color::Crimson;
			this->BuildTable->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuildTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BuildTable->Location = System::Drawing::Point(615, 139);
			this->BuildTable->Name = L"BuildTable";
			this->BuildTable->Size = System::Drawing::Size(244, 76);
			this->BuildTable->TabIndex = 11;
			this->BuildTable->Text = L"Построить таблицу";
			this->BuildTable->UseVisualStyleBackColor = false;
			this->BuildTable->Click += gcnew System::EventHandler(this, &MyForm::BuildTable_Click);
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::DarkGreen;
			this->closeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->closeButton->Location = System::Drawing::Point(625, 479);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(234, 67);
			this->closeButton->TabIndex = 12;
			this->closeButton->Text = L"Завершить";
			this->closeButton->UseVisualStyleBackColor = false;
			this->closeButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(12, 251);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(393, 304);
			this->listBox1->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Аргумент";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(130, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Функция";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1002, 583);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->BuildTable);
			this->Controls->Add(this->outMax);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txStep);
			this->Controls->Add(this->txEnd);
			this->Controls->Add(this->txBegin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Программирование алгоритмов регулярных циклических структур";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BuildTable_Click(System::Object^ sender, System::EventArgs^ e) {
	float start, end, step, Ymax;
	if (!GetFloat(start, txBegin, "Введите начальное значение аргумента")) return;
	if (!GetFloat(end, txEnd, "Введите начальное значение аргумента")) return;
	if (!GetFloat(step, txStep, "Введите начальное значение аргумента")) return;
	buildTable(start, end, step, Ymax, listBox1);
	OutPut(Ymax, outMax);
}
};
}
