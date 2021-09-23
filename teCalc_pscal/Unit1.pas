Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    function Alg(sDo:String; decA:real; decB:real):String;
    procedure Calc(sDo:String);
    procedure b_7_Click(sender: Object; e: EventArgs);
    procedure b_8_Click(sender: Object; e: EventArgs);
    procedure b_9_Click(sender: Object; e: EventArgs);
    procedure b_4_Click(sender: Object; e: EventArgs);
    procedure b_5_Click(sender: Object; e: EventArgs);
    procedure b_6_Click(sender: Object; e: EventArgs);
    procedure b_1_Click(sender: Object; e: EventArgs);
    procedure b_2_Click(sender: Object; e: EventArgs);
    procedure b_3_Click(sender: Object; e: EventArgs);
    procedure b_0_Click(sender: Object; e: EventArgs);
    procedure b_dot_Click(sender: Object; e: EventArgs);
    procedure b_eq_Click(sender: Object; e: EventArgs);
    procedure b_plus_Click(sender: Object; e: EventArgs);
    procedure b_minus_Click(sender: Object; e: EventArgs);
    procedure b_mult_Click(sender: Object; e: EventArgs);
    procedure b_del_Click(sender: Object; e: EventArgs);
    procedure b_c_Click(sender: Object; e: EventArgs);
    procedure b_deg_Click(sender: Object; e: EventArgs);
    procedure b_fac_Click(sender: Object; e: EventArgs);
    procedure b_sqrt_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    b_7: Button;
    b_8: Button;
    b_9: Button;
    b_6: Button;
    b_5: Button;
    b_4: Button;
    b_3: Button;
    b_2: Button;
    b_1: Button;
    b_0: Button;
    b_eq: Button;
    b_plus: Button;
    b_minus: Button;
    b_mult: Button;
    b_del: Button;
    b_c: Button;
    b_deg: Button;
    label1: &Label;
    resultBox: TextBox;
    varA: TextBox;
    doBox: TextBox;
    b_sqrt: Button;
    b_dot: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
///На мой взгляд тут нечего комментировать, но раз задача требует, то вот:

///Данный метод проводит вычисления между двумя переменными
function Form1.Alg(sDo:String; decA:real; decB:real):String;
begin
    if sDo = '+' then
        Result := (decA + decB).ToString;
    if sDo = '-' then
        Result := (decA - decB).ToString;
    if sDo = 'X' then
        Result := (decA * decB).ToString;
    if sDo = '/' then
        Result := (decA / decB).ToString;
    if sDo = '^' then
        Result := (Power(decA, decB)).ToString;
    if sDo = '!' then
        Result := (decA / decB).ToString;
    if sDo = 'sqrt' then
        Result := (Power(decA, 1/decB)).ToString;
end;

///Этот метод вписывает в текстбоксы соотвествующие значения
procedure Form1.Calc(sDo:String);
begin
  if varA.Text = '' then
   begin
    varA.Text := resultBox.Text;
    doBox.Text := sDo;
    resultBox.Text := '';
   end
  else
   begin
       if resultBox.Text = '' then resultBox.Text := '0';
       resultBox.Text := Alg(sDo, real.Parse(varA.Text), real.Parse(resultBox.Text));
       varA.Text := '';
       doBox.Text := '';
   end;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
end;

///Очистка полей
procedure Form1.b_c_Click(sender: Object; e: EventArgs);
begin
    varA.Text := '';
    doBox.Text := '';
    resultBox.Text := '';
end;

///При нажатии на соотвествующую кнопку из этого блока в главное поле запишитеся соотвествующее значение

///------------------- БЛОК С ЦИФРАМИ -------------------///
procedure Form1.b_7_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '7';
end;

procedure Form1.b_8_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '8';
end;

procedure Form1.b_9_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '9';
  
end;

procedure Form1.b_4_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '4';
  
end;

procedure Form1.b_5_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '5';
  
end;

procedure Form1.b_6_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '6';
  
end;

procedure Form1.b_1_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '1';
  
end;

procedure Form1.b_2_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '2';
  
end;

procedure Form1.b_3_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '3';
  
end;

procedure Form1.b_0_Click(sender: Object; e: EventArgs);
begin
    resultBox.Text := resultBox.Text + '0';
  
end;

procedure Form1.b_dot_Click(sender: Object; e: EventArgs);
begin
    if resultBox.Text.Contains('.') = false then
        resultBox.Text := resultBox.Text + '.';

end;
///------------------- БЛОК С ЦИФРАМИ -------------------///

///При нажатии на соответствуюущую кнопку из этого блока будет произведена соотвестсвующая оперцаия между переменными

///------------------- БЛОК С АРИФМЕТИЧИСКИМИ ДЕЙСТВИЯМИ -------------------///
procedure Form1.b_eq_Click(sender: Object; e: EventArgs);
begin
    Calc(doBox.Text)
end;

procedure Form1.b_plus_Click(sender: Object; e: EventArgs);
begin
    Calc('+')
end;

procedure Form1.b_minus_Click(sender: Object; e: EventArgs);
begin
    Calc('-')  
end;

procedure Form1.b_mult_Click(sender: Object; e: EventArgs);
begin
    Calc('X')  
end;

procedure Form1.b_del_Click(sender: Object; e: EventArgs);
begin
    Calc('/')  
end; 

procedure Form1.b_deg_Click(sender: Object; e: EventArgs);
begin
    Calc('^')    
end;

procedure Form1.b_fac_Click(sender: Object; e: EventArgs);
begin
    Calc('!')  
end;

procedure Form1.b_sqrt_Click(sender: Object; e: EventArgs);
begin
    Calc('sqrt')  
end;
///------------------- БЛОК С АРИФМЕТИЧИСКИМИ ДЕЙСТВИЯМИ -------------------///

end.
