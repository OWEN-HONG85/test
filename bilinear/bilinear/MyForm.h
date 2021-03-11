#pragma once
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

namespace bilinear {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Design;
	using namespace System::Drawing::Imaging;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

		   Bitmap^ image;
		   Bitmap^ bilinerimg;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 446);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseCaptureChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(525, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(492, 446);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(79, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"開啟圖檔";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(315, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Bilinear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(223, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"原圖";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(736, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"處理結果";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(857, 508);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 544);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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

		// 宣告為一BitmapData型態 表示像素位置
		Imaging::BitmapData^ ImageData1;
		Imaging::BitmapData^ ImageData2;

		// 宣告圖像區域(設定為欲讀取、欲修正的圖像區域)
		Rectangle rect1;
		Rectangle rect2;

		//宣告Byte格式的指標
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
			// 將圖片(bitmap)顯示在pictureBox1
			pictureBox1->Image = image;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// bilinear
		float k = (float)numericUpDown1->Value;   // 從numeric工具取值，可自行設定數值
		bilinerimg = gcnew Bitmap((int)((image->Width) * (k)), (int)((image->Height) * (k)));
		rect2 = System::Drawing::Rectangle(0, 0, bilinerimg->Width, bilinerimg->Height);
		ByteNumber_Width2 = bilinerimg->Width * 3;
		ImageData1 = image->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		ImageData2 = bilinerimg->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);

		// 將int指標指向image像素資料的最前面位置
		IntPtr ptr1 = ImageData1->Scan0;
		IntPtr ptr2 = ImageData2->Scan0;

		// 掃描寬度-Byte資料寬度
		BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;
		BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;

		// 設定指標
		p1 = (Byte*)((Void*)ptr1);
		p2 = (Byte*)((Void*)ptr2);
		float src_x;    // src x
		float src_y;    // src y
		int x1, y1;     // 取得無條件捨去整數座標點
		float temp_r, temp_g, temp_b;
		for (int y = 1; y < bilinerimg->Height - 1; y++) {
			for (int x = 1; x < bilinerimg->Width - 1; x++) {
				// 放大圖像對於原圖位置比較 src x = new x *(src rows / new rows),y as same sa x
				src_x = (x / k);
				src_y = (y / k);
				x1 = src_x;
				y1 = src_y;
				int values[4][3];
				// 紀錄4點座標的RGB value依序為 Q11( x1 , y1 ) Q12( x1 , y2 ) Q21( x2 , y1 ) Q22( x2 , y2 )
				if (y1 + 1 < image->Height && x1 + 1 < image->Width) {
					for (int index_x = 0; index_x <= 1; index_x++) {      // run x
						for (int index_y = 0; index_y <= 1; index_y++) {  // run y
							p1 = (Byte*)((Void*)ptr1);
							p1 += (int)(y1 + index_y) * ImageData1->Stride + (int)(x1 + index_x) * 3;
							values[index_y * 1 + index_x * 2][0] = p1[0];  // b
							values[index_y * 1 + index_x * 2][1] = p1[1];  // g
							values[index_y * 1 + index_x * 2][2] = p1[2];  // r
						}
					}
				}
				// 主要處理部分
				temp_r = values[0][2] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y) + values[1][2] * ((x1 + 1) - src_x) * (src_y - y1) + values[2][2] * (src_x - x1) * ((y1 + 1) - src_y) + values[3][2] * (src_x - x1) * (src_y - y1);
				temp_g = values[0][1] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y) + values[1][1] * ((x1 + 1) - src_x) * (src_y - y1) + values[2][1] * (src_x - x1) * ((y1 + 1) - src_y) + values[3][1] * (src_x - x1) * (src_y - y1);
				temp_b = values[0][0] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y) + values[1][0] * ((x1 + 1) - src_x) * (src_y - y1) + values[2][0] * (src_x - x1) * ((y1 + 1) - src_y) + values[3][0] * (src_x - x1) * (src_y - y1);
				p2 = (Byte*)((Void*)ptr2);
				p2 += (int)y * ImageData2->Stride + (int)x * 3;
				p2[0] = (Byte)temp_b;
				p2[1] = (Byte)temp_g;
				p2[2] = (Byte)temp_r;
			}
		}
		// Unlock處理完畢的像素範圍
		image->UnlockBits(ImageData1);
		bilinerimg->UnlockBits(ImageData2);
		// 將影像顯示在pictureBox2
		pictureBox2->Image = bilinerimg;
	}
	private: System::Void pictureBox1_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
