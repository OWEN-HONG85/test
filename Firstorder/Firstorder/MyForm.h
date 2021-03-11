#pragma once
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

namespace Firstorder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Design;
	using namespace System::Drawing::Imaging;

	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

		   Bitmap^ image;
		   Bitmap^ firstimg;
	
	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(448, 413);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(484, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(471, 413);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(59, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�}�ҹϤ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(313, 465);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"First-order";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(797, 476);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�з���", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(196, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"���";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�з���", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(687, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"�B�z���G";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 515);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//�ŧi���@BitmapData���A ��ܹ�����m
		Imaging::BitmapData^ ImageData1;
		Imaging::BitmapData^ ImageData2;

		//�ŧi�Ϲ��ϰ�(�]�w����Ū���B���ץ����Ϲ��ϰ�)
		Rectangle rect1;
		Rectangle rect2;

		//�ŧiByte�榡������
		Byte* p1;
		Byte* p2;

		int ByteNumber_Width1;
		int ByteNumber_Width2;
		int BytesOfSkip1;
		int BytesOfSkip2;

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openImage = gcnew OpenFileDialog();
		if (openImage->ShowDialog() == System::Windows::Forms::DialogResult::OK && openImage->FileName != "") {
			image = gcnew Bitmap(openImage->FileName);
			rect1 = Rectangle(0, 0, image->Width, image->Height);
			//�N�Ϥ�(bitmap)��ܦbpicturebox1
			pictureBox1->Image = image; 
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// first order
		float k = (float)numericUpDown1->Value;      //�qnumeric�u����ȡA�i�ۦ�]�w�ƭ�
		firstimg = gcnew Bitmap((int)((image->Width) * (k)), (int)((image->Height) * (k)));
		rect2 = System::Drawing::Rectangle(0, 0, firstimg->Width, firstimg->Height);
		ByteNumber_Width2 = firstimg->Width * 3;
		ImageData1 = image->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		ImageData2 = firstimg->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);

		// �Nint���Ы��V��Ϲ�����ƪ��̫e����m
		IntPtr ptr1 = ImageData1->Scan0;
		IntPtr ptr2 = ImageData2->Scan0;

		// ���y�e��-Byte��Ƽe��
		BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;
		BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;

		// �]�w����
		p1 = (Byte*)((Void*)ptr1);
		p2 = (Byte*)((Void*)ptr2);

		// ***N[n] = {p[n/k]*(k-r)+p[n/k+1]*r}/k   new pixel***//   �B�⦡
		// �D�n�B�z����
		int x, y;
		float r;    //rate
		int src_w;  //New x
		int src_h;  //New y
		for (y = 0; y < firstimg->Height; y++) {
			for (x = 0; x < firstimg->Width; x++) {
				src_w = x / k;
				src_h = y / k;
				r = fmod(x, k);    // ��x��j���v   fmod #include"math.h"
				// �קK�W�X�O����]�w�d��
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(image->Height))) && (src_w < ((int)(image->Width)) - 1)) {
					// �Np�k��mimage�_�l�I
					p1 = ((Byte*)((Void*)ptr1));

					p2[0] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride))) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3)) * (r))) / k);
					p2[1] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 1)) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3 + 1)) * (r))) / k);
					p2[2] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 2)) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3 + 2)) * (r))) / k);
				}
				else {
					p2[0] = (Byte)255;
					p2[1] = (Byte)255;
					p2[2] = (Byte)255;
				}
				p2 += 3;
			}
			p2 += BytesOfSkip2;
		}
		// �k��A�^��firstimg���_�l�I
		p2 = (Byte*)((Void*)ptr2);
		for (y = 0; y < firstimg->Height; y++) {
			for (x = 0; x < firstimg->Width; x++) {
				src_w = x / k;
				src_h = y / k;
				r = fmod(y, k);    
				// �קK�W�X�O����]�w�d��
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(image->Height))) && (src_w < ((int)(image->Width)) - 1)) {
					p1 = ((Byte*)((Void*)ptr1));

					p2[0] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride))) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3)) * (r))) / k);
					p2[1] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 1)) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3 + 1)) * (r))) / k);
					p2[2] = (Byte)(int)((double)((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 2)) * (k - r) + ((*(p1 + (src_w * 3) + (src_h * ImageData1->Stride) + 3 + 2)) * (r))) / k);
				}
				else {
					p2[0] = (Byte)255;
					p2[1] = (Byte)255;
					p2[2] = (Byte)255;
				}
				p2 += 3;
			}
			p2 += BytesOfSkip2;
		}
		// Unlock�B�z�����������d��
		image->UnlockBits(ImageData1);
		firstimg->UnlockBits(ImageData2);
		// �N�v����ܦbpictureBox2
		pictureBox2->Image = firstimg;
	}
};
}

