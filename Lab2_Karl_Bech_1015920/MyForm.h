#pragma once
#include <stdlib.h>
#include <time.h>
#include<iostream>

namespace Lab2KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column38;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column39;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column42;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column44;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column45;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column46;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column47;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column48;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column49;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column50;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column51;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column52;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column53;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column54;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column55;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column56;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column57;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column58;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column59;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column60;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column61;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column62;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column63;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column64;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column65;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column66;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column67;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column68;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column69;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column70;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Timer^ timer1;
	private:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;

	private: System::ComponentModel::IContainer^ components;







































































	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column62 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column63 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column64 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column65 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column66 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column67 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column68 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column69 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column70 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(986, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reiniciar Carrera!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Green;
			this->dataGridView1->ColumnHeadersHeight = 18;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(70) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18,
					this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26,
					this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34,
					this->Column35, this->Column36, this->Column37, this->Column38, this->Column39, this->Column40, this->Column41, this->Column42,
					this->Column43, this->Column44, this->Column45, this->Column46, this->Column47, this->Column48, this->Column49, this->Column50,
					this->Column51, this->Column52, this->Column53, this->Column54, this->Column55, this->Column56, this->Column57, this->Column58,
					this->Column59, this->Column60, this->Column61, this->Column62, this->Column63, this->Column64, this->Column65, this->Column66,
					this->Column67, this->Column68, this->Column69, this->Column70
			});
			this->dataGridView1->GridColor = System::Drawing::Color::Sienna;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1403, 98);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->Width = 19;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 19;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 19;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 19;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 19;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 19;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 19;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 19;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 19;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 19;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 19;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 19;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 19;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 19;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"";
			this->Column15->Name = L"Column15";
			this->Column15->Width = 19;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"";
			this->Column16->Name = L"Column16";
			this->Column16->Width = 19;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"";
			this->Column17->Name = L"Column17";
			this->Column17->Width = 19;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"";
			this->Column18->Name = L"Column18";
			this->Column18->Width = 19;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"";
			this->Column19->Name = L"Column19";
			this->Column19->Width = 19;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"";
			this->Column20->Name = L"Column20";
			this->Column20->Width = 19;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"";
			this->Column21->Name = L"Column21";
			this->Column21->Width = 19;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"";
			this->Column22->Name = L"Column22";
			this->Column22->Width = 19;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"";
			this->Column23->Name = L"Column23";
			this->Column23->Width = 19;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"";
			this->Column24->Name = L"Column24";
			this->Column24->Width = 19;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"";
			this->Column25->Name = L"Column25";
			this->Column25->Width = 19;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"";
			this->Column26->Name = L"Column26";
			this->Column26->Width = 19;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"";
			this->Column27->Name = L"Column27";
			this->Column27->Width = 19;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"";
			this->Column28->Name = L"Column28";
			this->Column28->Width = 19;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"";
			this->Column29->Name = L"Column29";
			this->Column29->Width = 19;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"";
			this->Column30->Name = L"Column30";
			this->Column30->Width = 19;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"";
			this->Column31->Name = L"Column31";
			this->Column31->Width = 19;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"";
			this->Column32->Name = L"Column32";
			this->Column32->Width = 19;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"";
			this->Column33->Name = L"Column33";
			this->Column33->Width = 19;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"";
			this->Column34->Name = L"Column34";
			this->Column34->Width = 19;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"";
			this->Column35->Name = L"Column35";
			this->Column35->Width = 19;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"";
			this->Column36->Name = L"Column36";
			this->Column36->Width = 19;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"";
			this->Column37->Name = L"Column37";
			this->Column37->Width = 19;
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"";
			this->Column38->Name = L"Column38";
			this->Column38->Width = 19;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"";
			this->Column39->Name = L"Column39";
			this->Column39->Width = 19;
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"";
			this->Column40->Name = L"Column40";
			this->Column40->Width = 19;
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"";
			this->Column41->Name = L"Column41";
			this->Column41->Width = 19;
			// 
			// Column42
			// 
			this->Column42->HeaderText = L"";
			this->Column42->Name = L"Column42";
			this->Column42->Width = 19;
			// 
			// Column43
			// 
			this->Column43->HeaderText = L"";
			this->Column43->Name = L"Column43";
			this->Column43->Width = 19;
			// 
			// Column44
			// 
			this->Column44->HeaderText = L"";
			this->Column44->Name = L"Column44";
			this->Column44->Width = 19;
			// 
			// Column45
			// 
			this->Column45->HeaderText = L"";
			this->Column45->Name = L"Column45";
			this->Column45->Width = 19;
			// 
			// Column46
			// 
			this->Column46->HeaderText = L"";
			this->Column46->Name = L"Column46";
			this->Column46->Width = 19;
			// 
			// Column47
			// 
			this->Column47->HeaderText = L"";
			this->Column47->Name = L"Column47";
			this->Column47->Width = 19;
			// 
			// Column48
			// 
			this->Column48->HeaderText = L"";
			this->Column48->Name = L"Column48";
			this->Column48->Width = 19;
			// 
			// Column49
			// 
			this->Column49->HeaderText = L"";
			this->Column49->Name = L"Column49";
			this->Column49->Width = 19;
			// 
			// Column50
			// 
			this->Column50->HeaderText = L"";
			this->Column50->Name = L"Column50";
			this->Column50->Width = 19;
			// 
			// Column51
			// 
			this->Column51->HeaderText = L"";
			this->Column51->Name = L"Column51";
			this->Column51->Width = 19;
			// 
			// Column52
			// 
			this->Column52->HeaderText = L"";
			this->Column52->Name = L"Column52";
			this->Column52->Width = 19;
			// 
			// Column53
			// 
			this->Column53->HeaderText = L"";
			this->Column53->Name = L"Column53";
			this->Column53->Width = 19;
			// 
			// Column54
			// 
			this->Column54->HeaderText = L"";
			this->Column54->Name = L"Column54";
			this->Column54->Width = 19;
			// 
			// Column55
			// 
			this->Column55->HeaderText = L"";
			this->Column55->Name = L"Column55";
			this->Column55->Width = 19;
			// 
			// Column56
			// 
			this->Column56->HeaderText = L"";
			this->Column56->Name = L"Column56";
			this->Column56->Width = 19;
			// 
			// Column57
			// 
			this->Column57->HeaderText = L"";
			this->Column57->Name = L"Column57";
			this->Column57->Width = 19;
			// 
			// Column58
			// 
			this->Column58->HeaderText = L"";
			this->Column58->Name = L"Column58";
			this->Column58->Width = 19;
			// 
			// Column59
			// 
			this->Column59->HeaderText = L"";
			this->Column59->Name = L"Column59";
			this->Column59->Width = 19;
			// 
			// Column60
			// 
			this->Column60->HeaderText = L"";
			this->Column60->Name = L"Column60";
			this->Column60->Width = 19;
			// 
			// Column61
			// 
			this->Column61->HeaderText = L"";
			this->Column61->Name = L"Column61";
			this->Column61->Width = 19;
			// 
			// Column62
			// 
			this->Column62->HeaderText = L"";
			this->Column62->Name = L"Column62";
			this->Column62->Width = 19;
			// 
			// Column63
			// 
			this->Column63->HeaderText = L"";
			this->Column63->Name = L"Column63";
			this->Column63->Width = 19;
			// 
			// Column64
			// 
			this->Column64->HeaderText = L"";
			this->Column64->Name = L"Column64";
			this->Column64->Width = 19;
			// 
			// Column65
			// 
			this->Column65->HeaderText = L"";
			this->Column65->Name = L"Column65";
			this->Column65->Width = 19;
			// 
			// Column66
			// 
			this->Column66->HeaderText = L"";
			this->Column66->Name = L"Column66";
			this->Column66->Width = 19;
			// 
			// Column67
			// 
			this->Column67->HeaderText = L"";
			this->Column67->Name = L"Column67";
			this->Column67->Width = 19;
			// 
			// Column68
			// 
			this->Column68->HeaderText = L"";
			this->Column68->Name = L"Column68";
			this->Column68->Width = 19;
			// 
			// Column69
			// 
			this->Column69->HeaderText = L"";
			this->Column69->Name = L"Column69";
			this->Column69->Width = 19;
			// 
			// Column70
			// 
			this->Column70->HeaderText = L"";
			this->Column70->Name = L"Column70";
			this->Column70->Width = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(952, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Número random:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1044, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"\"\"";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(955, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tiempo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1006, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"00:00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(955, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Estado Tortuga:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(955, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Estado Conejo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1061, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"\"\"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1061, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"\"\"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(407, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Mordidas:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(479, 104);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"\"\"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(113, 280);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(146, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"ESTADO DE LA CARRERA: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(291, 279);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Compitiendo...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1540, 479);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int segundos = 0;
		static int minutos = 0;
		static int num;
		static int num2;
		static int xc = 0;
		static int yc = 0;
		static int xt = 0;
		static int yt = 1;
		static int mordidas = 0;
		
		String^ sec;
		String^ min;
		String^ mord;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";





	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		Application::Restart();
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
public: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	srand(time(NULL));
	num = rand() % (11 - 1);
	num2 = num;
	label2->Text = "" + num;
	
	segundos++;
	if (segundos == 60) {
		segundos = 0;
		minutos++;
	}
	

	switch (num)
	{
	case 1: xt = xt + 3;
		label7->Text = "Paso velóz";
		
	break;
	case 2: xt = xt + 3;
		if (xt>=70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso velóz";
	
	break;
	case 3: xt = xt + 3;
		if (xt >= 70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso velóz";
		
	break;
	case 4: xt = xt + 3;
		if (xt >= 70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso velóz";
		
	break;
	case 5: xt = xt + 3;
		if (xt >= 70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso velóz";
		
		break;
	case 6: xt = xt + 1;
		label7->Text = "Paso lento";
		dataGridView1->Rows->Clear();
		
		break;
	case 7: xt = xt + 1;
		if (xt >= 70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso lento";
		
		break;
	case 8:
		xt = xt + 1;
		if (xt >= 70)
		{
			xt = 70;
			MessageBox::Show("GANADOR!", "Gana el la tortuga!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			timer1->Enabled=false;
		}
		label7->Text = "Paso lento";
		
		break;
	case 9:xt = xt - 6;
		if (xt <= 0)
		{
			xt = 0;
		}
		label7->Text = "Resbalón!";
		
		break;
	case 10:xt = xt - 6;
		if (xt <= 0)
		{
			xt = 0;
		}
		label7->Text = "Resbalón!";
		
		break;


	default:
		
		break;
	}

	switch (num2)
	{
	case 1: xc = xc + 0;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			

		}
		label8->Text = "Conejo duerme...";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		
		break;
	case 2: xc = xc + 0;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "Conejo duerme...";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 3: xc = xc + 9;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "GRAN SALTO!!!";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 4: xc = xc + 9;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "GRAN SALTO!!!";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 5: xc = xc - 12;
		if (xc < 0)
		{
			xc = 0;

		}
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "Gran resbalón...";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 6: xc = xc + 1;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
			 
		
		label8->Text = "Salto pequeño";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 7: xc = xc + 1;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "Salto pequeño";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 8: xc = xc + 1;
		if (xc >= 70)
		{
			xc = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, EL CONEJO GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "EL CONEJO GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (xt >= 70)
			{
				timer1->Enabled = false;
				label12->Text = "EMPATE, por favor presione el botón de reinicio";
				MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}


		}
		else if (xt >= 70)
		{
			xt = 70;
			timer1->Enabled = false;
			label12->Text = "GANADOR!, LA TORTUGA GANA LA CARRERA!";
			MessageBox::Show("GANADOR!", "LA TORTUGA GANA LA CARRERA!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		label8->Text = "Salto pequeño";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 9: xc = xc - 2;
		if (xc < 0)
		{
			xc = 0;

		}
		label8->Text = "Pequeño resbalón...";
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;
	case 10: xc = xc - 2;
		label8->Text = "Pequeño resbalón...";
		if (xc < 0)
		{
			xc = 0;

		}
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(2);
		dataGridView1->Rows[yc]->Cells[xc]->Value = "C";
		dataGridView1->Rows[yt]->Cells[xt]->Value = "T";
		break;


	default:

		break;
	}

	if (xc == xt)
	{
		label12->Text = "MORDIDA DE TORTUGA!";
		MessageBox::Show("MORDIDA!", "MORDIDA DE TORTUGA AL CONEJO!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		mordidas++;
	}
	
	


	sec = Convert::ToString(segundos);
	min = Convert::ToString(minutos);
	mord = Convert::ToString(mordidas);
	label4->Text = min + ":" + sec;
	label10->Text = mord;
}
private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}

private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyCode == Keys::R)
	{
		MessageBox::Show("EMPATE!", "Por favor presione el botón de reinicio!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
