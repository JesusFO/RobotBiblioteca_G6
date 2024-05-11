#pragma once
#include "frmMantRobot.h"
namespace RobotBiblioteca_G6_View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RobotBiblioteca_G6_Model;
	using namespace RobotBiblioteca_G6_Controller;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ robotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeRobotsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pr�stamoToolStripMenuItem;



	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->robotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeRobotsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pr�stamoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->robotToolStripMenuItem,
					this->pr�stamoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(736, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// robotToolStripMenuItem
			// 
			this->robotToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoDeRobotsToolStripMenuItem });
			this->robotToolStripMenuItem->Name = L"robotToolStripMenuItem";
			this->robotToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->robotToolStripMenuItem->Text = L"Robot";
			this->robotToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::robotToolStripMenuItem_Click);
			// 
			// mantenimientoDeRobotsToolStripMenuItem
			// 
			this->mantenimientoDeRobotsToolStripMenuItem->Name = L"mantenimientoDeRobotsToolStripMenuItem";
			this->mantenimientoDeRobotsToolStripMenuItem->Size = System::Drawing::Size(265, 26);
			this->mantenimientoDeRobotsToolStripMenuItem->Text = L"Mantenimiento de Robots";
			// 
			// pr�stamoToolStripMenuItem
			// 
			this->pr�stamoToolStripMenuItem->Name = L"pr�stamoToolStripMenuItem";
			this->pr�stamoToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->pr�stamoToolStripMenuItem->Text = L"Pr�stamo";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 487);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void robotToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantRobot^ ventanaMantRobot = gcnew frmMantRobot();
		ventanaMantRobot->MdiParent = this;
		ventanaMantRobot->Show();
	}
	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void generarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
