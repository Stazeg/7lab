object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 713
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringLabel: TLabel
    Left = 161
    Top = 5
    Width = 32
    Height = 13
    Caption = 'String:'
  end
  object Memo: TMemo
    Left = 288
    Top = 8
    Width = 417
    Height = 426
    Lines.Strings = (
      'Memo1')
    ReadOnly = True
    TabOrder = 0
  end
  object Value: TEdit
    Left = 161
    Top = 24
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Add: TButton
    Left = 161
    Top = 51
    Width = 121
    Height = 25
    Caption = 'Add'
    TabOrder = 2
    OnClick = AddClick
  end
  object Delete: TButton
    Left = 161
    Top = 82
    Width = 121
    Height = 25
    Caption = 'Delete'
    TabOrder = 3
    OnClick = DeleteClick
  end
  object Show: TButton
    Left = 8
    Top = 82
    Width = 121
    Height = 25
    Caption = 'Show'
    TabOrder = 4
    OnClick = ShowClick
  end
  object Randomize: TButton
    Left = 8
    Top = 22
    Width = 121
    Height = 25
    Caption = 'Random'
    TabOrder = 5
    OnClick = RandomizeClick
  end
  object SolveTask: TButton
    Left = 56
    Top = 369
    Width = 177
    Height = 56
    Font.Height = -20
    Caption = 'Decide'
    TabOrder = 6
    OnClick = SolveTaskClick
  end
end
