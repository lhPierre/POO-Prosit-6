#pragma once
#include "CLservices.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	// Affichage des données
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Label^ lbl_dataGridView;
	// Champs de saisie
	private: System::Windows::Forms::TextBox^ txtBx_id;
	private: System::Windows::Forms::Label^ lbl_txtBx_id;
	private: System::Windows::Forms::TextBox^ txtBx_nom;
	private: System::Windows::Forms::Label^ lbl_txtBx_nom;
	private: System::Windows::Forms::TextBox^ txtBx_prenom;
	private: System::Windows::Forms::Label^ lbl_txtBx_prenom;
	// Boutons de controles
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_new;
	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Button^ btn_last;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_first;
	// Affichage des messages
	private: System::Windows::Forms::Label^ lbl_txtBx_message;
	private: System::Windows::Forms::TextBox^ txtBx_message;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_dataGridView = (gcnew System::Windows::Forms::Label());
			this->txtBx_id = (gcnew System::Windows::Forms::TextBox());
			this->lbl_txtBx_id = (gcnew System::Windows::Forms::Label());
			this->txtBx_nom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_txtBx_nom = (gcnew System::Windows::Forms::Label());
			this->txtBx_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_txtBx_prenom = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_new = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->btn_last = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->lbl_txtBx_message = (gcnew System::Windows::Forms::Label());
			this->txtBx_message = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(291, 32);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(507, 343);
			this->dataGridView->TabIndex = 0;
			// 
			// lbl_dataGridView
			// 
			this->lbl_dataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_dataGridView->AutoSize = true;
			this->lbl_dataGridView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_dataGridView->Location = System::Drawing::Point(288, 13);
			this->lbl_dataGridView->Name = L"lbl_dataGridView";
			this->lbl_dataGridView->Size = System::Drawing::Size(73, 16);
			this->lbl_dataGridView->TabIndex = 1;
			this->lbl_dataGridView->Text = L"Adresses";
			// 
			// txtBx_id
			// 
			this->txtBx_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBx_id->Location = System::Drawing::Point(18, 59);
			this->txtBx_id->MinimumSize = System::Drawing::Size(248, 22);
			this->txtBx_id->Name = L"txtBx_id";
			this->txtBx_id->Size = System::Drawing::Size(248, 22);
			this->txtBx_id->TabIndex = 2;
			// 
			// lbl_txtBx_id
			// 
			this->lbl_txtBx_id->AutoSize = true;
			this->lbl_txtBx_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_txtBx_id->Location = System::Drawing::Point(18, 35);
			this->lbl_txtBx_id->Name = L"lbl_txtBx_id";
			this->lbl_txtBx_id->Size = System::Drawing::Size(22, 16);
			this->lbl_txtBx_id->TabIndex = 3;
			this->lbl_txtBx_id->Text = L"ID";
			// 
			// txtBx_nom
			// 
			this->txtBx_nom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBx_nom->Location = System::Drawing::Point(18, 113);
			this->txtBx_nom->MinimumSize = System::Drawing::Size(248, 22);
			this->txtBx_nom->Name = L"txtBx_nom";
			this->txtBx_nom->Size = System::Drawing::Size(248, 22);
			this->txtBx_nom->TabIndex = 4;
			// 
			// lbl_txtBx_nom
			// 
			this->lbl_txtBx_nom->AutoSize = true;
			this->lbl_txtBx_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_txtBx_nom->Location = System::Drawing::Point(18, 89);
			this->lbl_txtBx_nom->Name = L"lbl_txtBx_nom";
			this->lbl_txtBx_nom->Size = System::Drawing::Size(39, 16);
			this->lbl_txtBx_nom->TabIndex = 5;
			this->lbl_txtBx_nom->Text = L"Nom";
			// 
			// txtBx_prenom
			// 
			this->txtBx_prenom->BackColor = System::Drawing::SystemColors::Window;
			this->txtBx_prenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBx_prenom->Location = System::Drawing::Point(18, 167);
			this->txtBx_prenom->MinimumSize = System::Drawing::Size(248, 22);
			this->txtBx_prenom->Name = L"txtBx_prenom";
			this->txtBx_prenom->Size = System::Drawing::Size(248, 22);
			this->txtBx_prenom->TabIndex = 6;
			// 
			// lbl_txtBx_prenom
			// 
			this->lbl_txtBx_prenom->AutoSize = true;
			this->lbl_txtBx_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_txtBx_prenom->Location = System::Drawing::Point(18, 143);
			this->lbl_txtBx_prenom->Name = L"lbl_txtBx_prenom";
			this->lbl_txtBx_prenom->Size = System::Drawing::Size(60, 16);
			this->lbl_txtBx_prenom->TabIndex = 7;
			this->lbl_txtBx_prenom->Text = L"Prénom";
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(15, 301);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(122, 33);
			this->btn_update->TabIndex = 5;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form1::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->Location = System::Drawing::Point(15, 342);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(122, 33);
			this->btn_delete->TabIndex = 6;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form1::btn_delete_Click);
			// 
			// btn_new
			// 
			this->btn_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_new->Location = System::Drawing::Point(15, 260);
			this->btn_new->Name = L"btn_new";
			this->btn_new->Size = System::Drawing::Size(122, 33);
			this->btn_new->TabIndex = 4;
			this->btn_new->Text = L"Nouveau";
			this->btn_new->UseVisualStyleBackColor = true;
			this->btn_new->Click += gcnew System::EventHandler(this, &Form1::btn_new_Click);
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(143, 260);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(123, 115);
			this->btn_save->TabIndex = 10;
			this->btn_save->Text = L"Enregistrer";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &Form1::btn_save_Click);
			// 
			// btn_last
			// 
			this->btn_last->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_last->Location = System::Drawing::Point(207, 221);
			this->btn_last->Name = L"btn_last";
			this->btn_last->Size = System::Drawing::Size(58, 33);
			this->btn_last->TabIndex = 3;
			this->btn_last->Text = L">>";
			this->btn_last->UseVisualStyleBackColor = true;
			this->btn_last->Click += gcnew System::EventHandler(this, &Form1::btn_last_Click);
			// 
			// btn_next
			// 
			this->btn_next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_next->Location = System::Drawing::Point(143, 221);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(58, 33);
			this->btn_next->TabIndex = 2;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &Form1::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_previous->Location = System::Drawing::Point(79, 221);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(58, 33);
			this->btn_previous->TabIndex = 1;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &Form1::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->BackColor = System::Drawing::Color::White;
			this->btn_first->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_first->Location = System::Drawing::Point(15, 221);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(58, 33);
			this->btn_first->TabIndex = 0;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &Form1::btn_first_Click);
			// 
			// lbl_txtBx_message
			// 
			this->lbl_txtBx_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_txtBx_message->AutoSize = true;
			this->lbl_txtBx_message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_txtBx_message->Location = System::Drawing::Point(12, 401);
			this->lbl_txtBx_message->Name = L"lbl_txtBx_message";
			this->lbl_txtBx_message->Size = System::Drawing::Size(71, 16);
			this->lbl_txtBx_message->TabIndex = 11;
			this->lbl_txtBx_message->Text = L"Message";
			// 
			// txtBx_message
			// 
			this->txtBx_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBx_message->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBx_message->Location = System::Drawing::Point(15, 420);
			this->txtBx_message->Multiline = true;
			this->txtBx_message->Name = L"txtBx_message";
			this->txtBx_message->Size = System::Drawing::Size(783, 102);
			this->txtBx_message->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(819, 534);
			this->Controls->Add(this->txtBx_prenom);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->lbl_txtBx_id);
			this->Controls->Add(this->lbl_txtBx_nom);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->txtBx_id);
			this->Controls->Add(this->txtBx_message);
			this->Controls->Add(this->lbl_txtBx_prenom);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->txtBx_nom);
			this->Controls->Add(this->lbl_txtBx_message);
			this->Controls->Add(this->btn_last);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->lbl_dataGridView);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_new);
			this->Controls->Add(this->btn_update);
			this->MinimumSize = System::Drawing::Size(837, 581);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices();

		btn_update_Click(sender, e);
	}

	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_last_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_new_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnePersonne(this->txtBx_nom->Text, this->txtBx_prenom->Text);

		btn_update_Click(sender, e);
	}


	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dataGridView->DataSource = this->oDs;
		this->dataGridView->DataMember = "Rsl";
	}


	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
