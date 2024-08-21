#pragma once
#include <iostream>

namespace Oneprojectvisualprogramm {

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
	private: System::Windows::Forms::Button^ butt_umn;
	protected:

	private: System::Windows::Forms::Button^ butt_3;
	protected:

	private: System::Windows::Forms::Button^ butt_1;
	private: System::Windows::Forms::Button^ butt_2;
	private: System::Windows::Forms::Button^ butt_4;
	private: System::Windows::Forms::Button^ butt_5;
	private: System::Windows::Forms::Button^ butt_6;
	private: System::Windows::Forms::Button^ butt_7;
	private: System::Windows::Forms::Button^ butt_8;
	private: System::Windows::Forms::Button^ butt_9;








	private: System::Windows::Forms::Button^ butе_0;
	private: System::Windows::Forms::Button^ butt_toch;


	private: System::Windows::Forms::Button^ butt_minus;

	private: System::Windows::Forms::Button^ butt_plus;
	private: System::Windows::Forms::Button^ butt_del;
	private: System::Windows::Forms::Button^ butt_rawno;
	private: System::Windows::Forms::Label^ vivod;


		   

	private: System::Windows::Forms::Button^ butt_AC;
	private: System::Windows::Forms::Button^ butt_procent;

	private: double first_num;
	private: char deustv = ' ';




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->butt_umn = (gcnew System::Windows::Forms::Button());
			this->butt_3 = (gcnew System::Windows::Forms::Button());
			this->butt_1 = (gcnew System::Windows::Forms::Button());
			this->butt_2 = (gcnew System::Windows::Forms::Button());
			this->butt_4 = (gcnew System::Windows::Forms::Button());
			this->butt_5 = (gcnew System::Windows::Forms::Button());
			this->butt_6 = (gcnew System::Windows::Forms::Button());
			this->butt_7 = (gcnew System::Windows::Forms::Button());
			this->butt_8 = (gcnew System::Windows::Forms::Button());
			this->butt_9 = (gcnew System::Windows::Forms::Button());
			this->butе_0 = (gcnew System::Windows::Forms::Button());
			this->butt_toch = (gcnew System::Windows::Forms::Button());
			this->butt_minus = (gcnew System::Windows::Forms::Button());
			this->butt_plus = (gcnew System::Windows::Forms::Button());
			this->butt_del = (gcnew System::Windows::Forms::Button());
			this->butt_rawno = (gcnew System::Windows::Forms::Button());
			this->vivod = (gcnew System::Windows::Forms::Label());
			this->butt_AC = (gcnew System::Windows::Forms::Button());
			this->butt_procent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// butt_umn
			// 
			this->butt_umn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_umn->Location = System::Drawing::Point(239, 118);
			this->butt_umn->Margin = System::Windows::Forms::Padding(4);
			this->butt_umn->Name = L"butt_umn";
			this->butt_umn->Size = System::Drawing::Size(100, 90);
			this->butt_umn->TabIndex = 0;
			this->butt_umn->Text = L"*";
			this->butt_umn->UseVisualStyleBackColor = false;
			this->butt_umn->Click += gcnew System::EventHandler(this, &MyForm::butt_umn_Click);
			// 
			// butt_3
			// 
			this->butt_3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_3->Location = System::Drawing::Point(239, 410);
			this->butt_3->Margin = System::Windows::Forms::Padding(4);
			this->butt_3->Name = L"butt_3";
			this->butt_3->Size = System::Drawing::Size(100, 90);
			this->butt_3->TabIndex = 1;
			this->butt_3->Text = L"3";
			this->butt_3->UseVisualStyleBackColor = false;
			this->butt_3->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_1
			// 
			this->butt_1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_1->Location = System::Drawing::Point(20, 410);
			this->butt_1->Margin = System::Windows::Forms::Padding(4);
			this->butt_1->Name = L"butt_1";
			this->butt_1->Size = System::Drawing::Size(100, 90);
			this->butt_1->TabIndex = 3;
			this->butt_1->Text = L"1";
			this->butt_1->UseVisualStyleBackColor = false;
			this->butt_1->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_2
			// 
			this->butt_2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_2->Location = System::Drawing::Point(128, 410);
			this->butt_2->Margin = System::Windows::Forms::Padding(4);
			this->butt_2->Name = L"butt_2";
			this->butt_2->Size = System::Drawing::Size(100, 90);
			this->butt_2->TabIndex = 2;
			this->butt_2->Text = L"2";
			this->butt_2->UseVisualStyleBackColor = false;
			this->butt_2->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_4
			// 
			this->butt_4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_4->Location = System::Drawing::Point(20, 313);
			this->butt_4->Margin = System::Windows::Forms::Padding(4);
			this->butt_4->Name = L"butt_4";
			this->butt_4->Size = System::Drawing::Size(100, 90);
			this->butt_4->TabIndex = 6;
			this->butt_4->Text = L"4";
			this->butt_4->UseVisualStyleBackColor = false;
			this->butt_4->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_5
			// 
			this->butt_5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_5->Location = System::Drawing::Point(128, 313);
			this->butt_5->Margin = System::Windows::Forms::Padding(4);
			this->butt_5->Name = L"butt_5";
			this->butt_5->Size = System::Drawing::Size(100, 90);
			this->butt_5->TabIndex = 5;
			this->butt_5->Text = L"5";
			this->butt_5->UseVisualStyleBackColor = false;
			this->butt_5->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_6
			// 
			this->butt_6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_6->Location = System::Drawing::Point(239, 313);
			this->butt_6->Margin = System::Windows::Forms::Padding(4);
			this->butt_6->Name = L"butt_6";
			this->butt_6->Size = System::Drawing::Size(100, 90);
			this->butt_6->TabIndex = 4;
			this->butt_6->Text = L"6";
			this->butt_6->UseVisualStyleBackColor = false;
			this->butt_6->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_7
			// 
			this->butt_7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_7->Location = System::Drawing::Point(20, 215);
			this->butt_7->Margin = System::Windows::Forms::Padding(4);
			this->butt_7->Name = L"butt_7";
			this->butt_7->Size = System::Drawing::Size(100, 90);
			this->butt_7->TabIndex = 9;
			this->butt_7->Text = L"7";
			this->butt_7->UseVisualStyleBackColor = false;
			this->butt_7->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_8
			// 
			this->butt_8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_8->Location = System::Drawing::Point(128, 215);
			this->butt_8->Margin = System::Windows::Forms::Padding(4);
			this->butt_8->Name = L"butt_8";
			this->butt_8->Size = System::Drawing::Size(100, 90);
			this->butt_8->TabIndex = 8;
			this->butt_8->Text = L"8";
			this->butt_8->UseVisualStyleBackColor = false;
			this->butt_8->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_9
			// 
			this->butt_9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butt_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_9->Location = System::Drawing::Point(239, 215);
			this->butt_9->Margin = System::Windows::Forms::Padding(4);
			this->butt_9->Name = L"butt_9";
			this->butt_9->Size = System::Drawing::Size(100, 90);
			this->butt_9->TabIndex = 7;
			this->butt_9->Text = L"9";
			this->butt_9->UseVisualStyleBackColor = false;
			this->butt_9->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butе_0
			// 
			this->butе_0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butе_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butе_0->Location = System::Drawing::Point(21, 507);
			this->butе_0->Margin = System::Windows::Forms::Padding(4);
			this->butе_0->Name = L"butе_0";
			this->butе_0->Size = System::Drawing::Size(209, 90);
			this->butе_0->TabIndex = 10;
			this->butе_0->Text = L"0";
			this->butе_0->UseVisualStyleBackColor = false;
			this->butе_0->Click += gcnew System::EventHandler(this, &MyForm::number_click);
			// 
			// butt_toch
			// 
			this->butt_toch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_toch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_toch->Location = System::Drawing::Point(239, 507);
			this->butt_toch->Margin = System::Windows::Forms::Padding(4);
			this->butt_toch->Name = L"butt_toch";
			this->butt_toch->Size = System::Drawing::Size(100, 90);
			this->butt_toch->TabIndex = 11;
			this->butt_toch->Text = L".";
			this->butt_toch->UseVisualStyleBackColor = false;
			this->butt_toch->Click += gcnew System::EventHandler(this, &MyForm::butt_toch_Click);
			// 
			// butt_minus
			// 
			this->butt_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_minus->Location = System::Drawing::Point(347, 313);
			this->butt_minus->Margin = System::Windows::Forms::Padding(4);
			this->butt_minus->Name = L"butt_minus";
			this->butt_minus->Size = System::Drawing::Size(100, 90);
			this->butt_minus->TabIndex = 12;
			this->butt_minus->Text = L"-";
			this->butt_minus->UseVisualStyleBackColor = false;
			this->butt_minus->Click += gcnew System::EventHandler(this, &MyForm::butt_minus_Click);
			// 
			// butt_plus
			// 
			this->butt_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_plus->Location = System::Drawing::Point(347, 215);
			this->butt_plus->Margin = System::Windows::Forms::Padding(4);
			this->butt_plus->Name = L"butt_plus";
			this->butt_plus->Size = System::Drawing::Size(100, 90);
			this->butt_plus->TabIndex = 13;
			this->butt_plus->Text = L"+";
			this->butt_plus->UseVisualStyleBackColor = false;
			this->butt_plus->Click += gcnew System::EventHandler(this, &MyForm::butt_plus_Click);
			// 
			// butt_del
			// 
			this->butt_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_del->Location = System::Drawing::Point(347, 118);
			this->butt_del->Margin = System::Windows::Forms::Padding(4);
			this->butt_del->Name = L"butt_del";
			this->butt_del->Size = System::Drawing::Size(100, 90);
			this->butt_del->TabIndex = 14;
			this->butt_del->Text = L"/";
			this->butt_del->UseVisualStyleBackColor = false;
			this->butt_del->Click += gcnew System::EventHandler(this, &MyForm::butt_del_Click);
			// 
			// butt_rawno
			// 
			this->butt_rawno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butt_rawno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_rawno->Location = System::Drawing::Point(344, 410);
			this->butt_rawno->Margin = System::Windows::Forms::Padding(4);
			this->butt_rawno->Name = L"butt_rawno";
			this->butt_rawno->Size = System::Drawing::Size(103, 187);
			this->butt_rawno->TabIndex = 15;
			this->butt_rawno->Text = L"=";
			this->butt_rawno->UseVisualStyleBackColor = false;
			this->butt_rawno->Click += gcnew System::EventHandler(this, &MyForm::butt_rawno_Click);
			// 
			// vivod
			// 
			this->vivod->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->vivod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vivod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->vivod->Location = System::Drawing::Point(21, 30);
			this->vivod->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vivod->Name = L"vivod";
			this->vivod->Size = System::Drawing::Size(426, 84);
			this->vivod->TabIndex = 16;
			this->vivod->Text = L"0";
			this->vivod->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// butt_AC
			// 
			this->butt_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butt_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_AC->Location = System::Drawing::Point(20, 118);
			this->butt_AC->Margin = System::Windows::Forms::Padding(4);
			this->butt_AC->Name = L"butt_AC";
			this->butt_AC->Size = System::Drawing::Size(100, 90);
			this->butt_AC->TabIndex = 17;
			this->butt_AC->Text = L"AC";
			this->butt_AC->UseVisualStyleBackColor = false;
			this->butt_AC->Click += gcnew System::EventHandler(this, &MyForm::butt_AC_Click);
			// 
			// butt_procent
			// 
			this->butt_procent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butt_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->butt_procent->Location = System::Drawing::Point(131, 118);
			this->butt_procent->Margin = System::Windows::Forms::Padding(4);
			this->butt_procent->Name = L"butt_procent";
			this->butt_procent->Size = System::Drawing::Size(100, 90);
			this->butt_procent->TabIndex = 18;
			this->butt_procent->Text = L"%";
			this->butt_procent->UseVisualStyleBackColor = false;
			this->butt_procent->Click += gcnew System::EventHandler(this, &MyForm::butt_procent_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(464, 630);
			this->Controls->Add(this->butt_procent);
			this->Controls->Add(this->butt_AC);
			this->Controls->Add(this->vivod);
			this->Controls->Add(this->butt_rawno);
			this->Controls->Add(this->butt_del);
			this->Controls->Add(this->butt_plus);
			this->Controls->Add(this->butt_minus);
			this->Controls->Add(this->butt_toch);
			this->Controls->Add(this->butе_0);
			this->Controls->Add(this->butt_7);
			this->Controls->Add(this->butt_8);
			this->Controls->Add(this->butt_9);
			this->Controls->Add(this->butt_4);
			this->Controls->Add(this->butt_5);
			this->Controls->Add(this->butt_6);
			this->Controls->Add(this->butt_1);
			this->Controls->Add(this->butt_2);
			this->Controls->Add(this->butt_3);
			this->Controls->Add(this->butt_umn);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Калькулятор от Дани";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void number_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);

	if (this->vivod->Text == "0")
		this->vivod->Text = button->Text;

	else 
		this->vivod->Text += button->Text;
	
}


	private: System::Void butt_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void butt_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void butt_umn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void butt_del_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void butt_procent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}


	private: System::Void math_action(char deus) {
		this -> first_num = System::Convert::ToDouble(this->vivod->Text);
		this ->deustv = deus;
		this -> vivod -> Text = "0";
	}


	private: System::Void butt_rawno_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double sn = System::Convert::ToDouble(this->vivod->Text);
		double res = 0;

		switch (this->deustv) {
		case'+': res = this->first_num + sn; break;
		case'-': res = this->first_num - sn; break;
		case'*': res = this->first_num * sn; break;
		case'/':
			if (sn != 0) {
				res = this->first_num / sn; break;
			}
			else { res = this->first_num; break; }
		case'%': res = this->first_num / sn * 100; break;
		}

		this->vivod->Text = System::Convert::ToString(res);
		res = 0;
	}


	private: System::Void butt_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->deustv = ' ';
		this->vivod->Text = "0";
		this->first_num = 0;
	}

	
	private: System::Void butt_toch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->vivod->Text;

		if (!text -> Contains(",")) {
			this -> vivod->Text = text += ",";
		}
	}
};
}
