procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.b_7 := new System.Windows.Forms.Button();
        self.b_8 := new System.Windows.Forms.Button();
        self.b_9 := new System.Windows.Forms.Button();
        self.b_6 := new System.Windows.Forms.Button();
        self.b_5 := new System.Windows.Forms.Button();
        self.b_4 := new System.Windows.Forms.Button();
        self.b_3 := new System.Windows.Forms.Button();
        self.b_2 := new System.Windows.Forms.Button();
        self.b_1 := new System.Windows.Forms.Button();
        self.b_0 := new System.Windows.Forms.Button();
        self.b_dot := new System.Windows.Forms.Button();
        self.b_eq := new System.Windows.Forms.Button();
        self.b_plus := new System.Windows.Forms.Button();
        self.b_minus := new System.Windows.Forms.Button();
        self.b_mult := new System.Windows.Forms.Button();
        self.b_del := new System.Windows.Forms.Button();
        self.b_c := new System.Windows.Forms.Button();
        self.b_deg := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.resultBox := new System.Windows.Forms.TextBox();
        self.varA := new System.Windows.Forms.TextBox();
        self.doBox := new System.Windows.Forms.TextBox();
        self.b_sqrt := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // b_7
        // 
        self.b_7.Location := new System.Drawing.Point(5, 174);
        self.b_7.Name := 'b_7';
        self.b_7.Size := new System.Drawing.Size(29, 24);
        self.b_7.TabIndex := 0;
        self.b_7.Text := '7';
        self.b_7.UseVisualStyleBackColor := true;
        self.b_7.Click += b_7_Click;
        // 
        // b_8
        // 
        self.b_8.Location := new System.Drawing.Point(40, 174);
        self.b_8.Name := 'b_8';
        self.b_8.Size := new System.Drawing.Size(29, 24);
        self.b_8.TabIndex := 1;
        self.b_8.Text := '8';
        self.b_8.UseVisualStyleBackColor := true;
        self.b_8.Click += b_8_Click;
        // 
        // b_9
        // 
        self.b_9.Location := new System.Drawing.Point(75, 174);
        self.b_9.Name := 'b_9';
        self.b_9.Size := new System.Drawing.Size(29, 24);
        self.b_9.TabIndex := 2;
        self.b_9.Text := '9';
        self.b_9.UseVisualStyleBackColor := true;
        self.b_9.Click += b_9_Click;
        // 
        // b_6
        // 
        self.b_6.Location := new System.Drawing.Point(75, 204);
        self.b_6.Name := 'b_6';
        self.b_6.Size := new System.Drawing.Size(29, 24);
        self.b_6.TabIndex := 5;
        self.b_6.Text := '6';
        self.b_6.UseVisualStyleBackColor := true;
        self.b_6.Click += b_6_Click;
        // 
        // b_5
        // 
        self.b_5.Location := new System.Drawing.Point(40, 204);
        self.b_5.Name := 'b_5';
        self.b_5.Size := new System.Drawing.Size(29, 24);
        self.b_5.TabIndex := 4;
        self.b_5.Text := '5';
        self.b_5.UseVisualStyleBackColor := true;
        self.b_5.Click += b_5_Click;
        // 
        // b_4
        // 
        self.b_4.Location := new System.Drawing.Point(5, 204);
        self.b_4.Name := 'b_4';
        self.b_4.Size := new System.Drawing.Size(29, 24);
        self.b_4.TabIndex := 3;
        self.b_4.Text := '4';
        self.b_4.UseVisualStyleBackColor := true;
        self.b_4.Click += b_4_Click;
        // 
        // b_3
        // 
        self.b_3.Location := new System.Drawing.Point(75, 234);
        self.b_3.Name := 'b_3';
        self.b_3.Size := new System.Drawing.Size(29, 24);
        self.b_3.TabIndex := 8;
        self.b_3.Text := '3';
        self.b_3.UseVisualStyleBackColor := true;
        self.b_3.Click += b_3_Click;
        // 
        // b_2
        // 
        self.b_2.Location := new System.Drawing.Point(40, 234);
        self.b_2.Name := 'b_2';
        self.b_2.Size := new System.Drawing.Size(29, 24);
        self.b_2.TabIndex := 7;
        self.b_2.Text := '2';
        self.b_2.UseVisualStyleBackColor := true;
        self.b_2.Click += b_2_Click;
        // 
        // b_1
        // 
        self.b_1.Location := new System.Drawing.Point(5, 234);
        self.b_1.Name := 'b_1';
        self.b_1.Size := new System.Drawing.Size(29, 24);
        self.b_1.TabIndex := 6;
        self.b_1.Text := '1';
        self.b_1.UseVisualStyleBackColor := true;
        self.b_1.Click += b_1_Click;
        // 
        // b_0
        // 
        self.b_0.Location := new System.Drawing.Point(5, 264);
        self.b_0.Name := 'b_0';
        self.b_0.Size := new System.Drawing.Size(64, 24);
        self.b_0.TabIndex := 9;
        self.b_0.Text := '0';
        self.b_0.UseVisualStyleBackColor := true;
        self.b_0.Click += b_0_Click;
        // 
        // b_dot
        // 
        self.b_dot.Location := new System.Drawing.Point(75, 264);
        self.b_dot.Name := 'b_dot';
        self.b_dot.Size := new System.Drawing.Size(29, 24);
        self.b_dot.TabIndex := 10;
        self.b_dot.Text := '.';
        self.b_dot.UseVisualStyleBackColor := true;
        self.b_dot.Click += b_dot_Click;
        // 
        // b_eq
        // 
        self.b_eq.Location := new System.Drawing.Point(110, 264);
        self.b_eq.Name := 'b_eq';
        self.b_eq.Size := new System.Drawing.Size(29, 24);
        self.b_eq.TabIndex := 11;
        self.b_eq.Text := '=';
        self.b_eq.UseVisualStyleBackColor := true;
        self.b_eq.Click += b_eq_Click;
        // 
        // b_plus
        // 
        self.b_plus.Location := new System.Drawing.Point(110, 234);
        self.b_plus.Name := 'b_plus';
        self.b_plus.Size := new System.Drawing.Size(29, 24);
        self.b_plus.TabIndex := 12;
        self.b_plus.Text := '+';
        self.b_plus.UseVisualStyleBackColor := true;
        self.b_plus.Click += b_plus_Click;
        // 
        // b_minus
        // 
        self.b_minus.Location := new System.Drawing.Point(110, 204);
        self.b_minus.Name := 'b_minus';
        self.b_minus.Size := new System.Drawing.Size(29, 24);
        self.b_minus.TabIndex := 13;
        self.b_minus.Text := '-';
        self.b_minus.UseVisualStyleBackColor := true;
        self.b_minus.Click += b_minus_Click;
        // 
        // b_mult
        // 
        self.b_mult.Location := new System.Drawing.Point(110, 174);
        self.b_mult.Name := 'b_mult';
        self.b_mult.Size := new System.Drawing.Size(29, 24);
        self.b_mult.TabIndex := 14;
        self.b_mult.Text := 'X';
        self.b_mult.UseVisualStyleBackColor := true;
        self.b_mult.Click += b_mult_Click;
        // 
        // b_del
        // 
        self.b_del.Location := new System.Drawing.Point(110, 144);
        self.b_del.Name := 'b_del';
        self.b_del.Size := new System.Drawing.Size(29, 24);
        self.b_del.TabIndex := 15;
        self.b_del.Text := '/';
        self.b_del.UseVisualStyleBackColor := true;
        self.b_del.Click += b_del_Click;
        // 
        // b_c
        // 
        self.b_c.BackColor := System.Drawing.Color.Crimson;
        self.b_c.FlatStyle := System.Windows.Forms.FlatStyle.Popup;
        self.b_c.ForeColor := System.Drawing.Color.White;
        self.b_c.ImageAlign := System.Drawing.ContentAlignment.TopRight;
        self.b_c.Location := new System.Drawing.Point(5, 144);
        self.b_c.Name := 'b_c';
        self.b_c.Size := new System.Drawing.Size(29, 24);
        self.b_c.TabIndex := 16;
        self.b_c.Text := 'C';
        self.b_c.UseVisualStyleBackColor := false;
        self.b_c.Click += b_c_Click;
        // 
        // b_deg
        // 
        self.b_deg.Font := new System.Drawing.Font('Microsoft Sans Serif', 6.5, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.b_deg.Location := new System.Drawing.Point(75, 144);
        self.b_deg.Name := 'b_deg';
        self.b_deg.Size := new System.Drawing.Size(29, 24);
        self.b_deg.TabIndex := 23;
        self.b_deg.Text := 'x^y';
        self.b_deg.UseVisualStyleBackColor := true;
        self.b_deg.Click += b_deg_Click;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Honeydew;
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 24, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.LightSkyBlue;
        self.label1.Image := (System.Drawing.Image(resources.GetObject('label1.Image')));
        self.label1.Location := new System.Drawing.Point(5, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(203, 50);
        self.label1.TabIndex := 25;
        self.label1.Text := 'Калькулятор';
        // 
        // resultBox
        // 
        self.resultBox.AccessibleName := '';
        self.resultBox.Location := new System.Drawing.Point(5, 118);
        self.resultBox.Name := 'resultBox';
        self.resultBox.ReadOnly := true;
        self.resultBox.Size := new System.Drawing.Size(134, 20);
        self.resultBox.TabIndex := 26;
        self.resultBox.Tag := '';
        // 
        // varA
        // 
        self.varA.Location := new System.Drawing.Point(5, 66);
        self.varA.Name := 'varA';
        self.varA.ReadOnly := true;
        self.varA.Size := new System.Drawing.Size(134, 20);
        self.varA.TabIndex := 27;
        // 
        // doBox
        // 
        self.doBox.Location := new System.Drawing.Point(41, 92);
        self.doBox.Name := 'doBox';
        self.doBox.ReadOnly := true;
        self.doBox.Size := new System.Drawing.Size(20, 20);
        self.doBox.TabIndex := 28;
        // 
        // b_sqrt
        // 
        self.b_sqrt.Font := new System.Drawing.Font('Microsoft Sans Serif', 6.5, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.b_sqrt.Location := new System.Drawing.Point(40, 144);
        self.b_sqrt.Name := 'b_sqrt';
        self.b_sqrt.Size := new System.Drawing.Size(29, 24);
        self.b_sqrt.TabIndex := 29;
        self.b_sqrt.Text := 'sqrt';
        self.b_sqrt.UseVisualStyleBackColor := true;
        self.b_sqrt.Click += b_sqrt_Click;
        // 
        // Form1
        // 
        self.AutoScaleMode := System.Windows.Forms.AutoScaleMode.Inherit;
        self.BackColor := System.Drawing.Color.MidnightBlue;
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.ClientSize := new System.Drawing.Size(236, 303);
        self.Controls.Add(self.b_sqrt);
        self.Controls.Add(self.doBox);
        self.Controls.Add(self.varA);
        self.Controls.Add(self.resultBox);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.b_deg);
        self.Controls.Add(self.b_c);
        self.Controls.Add(self.b_del);
        self.Controls.Add(self.b_mult);
        self.Controls.Add(self.b_minus);
        self.Controls.Add(self.b_plus);
        self.Controls.Add(self.b_eq);
        self.Controls.Add(self.b_dot);
        self.Controls.Add(self.b_0);
        self.Controls.Add(self.b_3);
        self.Controls.Add(self.b_2);
        self.Controls.Add(self.b_1);
        self.Controls.Add(self.b_6);
        self.Controls.Add(self.b_5);
        self.Controls.Add(self.b_4);
        self.Controls.Add(self.b_9);
        self.Controls.Add(self.b_8);
        self.Controls.Add(self.b_7);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedDialog;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.Text := 'Калькулятор';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
