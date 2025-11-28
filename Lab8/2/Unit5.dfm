object Form5: TForm5
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1054#1073#1084#1110#1085' '#1074#1072#1083#1102#1090
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 296
    Top = 171
    Width = 37
    Height = 28
    Caption = #1050#1091#1088#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 25
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 296
    Top = 93
    Width = 17
    Height = 14
    Caption = #1088
    Font.Charset = SYMBOL_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Wingdings'
    Font.Style = []
    ParentFont = False
    OnClick = Label3Click
  end
  object RadioButton1: TRadioButton
    Left = 72
    Top = 80
    Width = 113
    Height = 25
    Caption = #1050#1091#1087#1110#1074#1083#1103
    TabOrder = 0
    OnClick = RadioButton1Click
  end
  object RadioButton2: TRadioButton
    Left = 432
    Top = 80
    Width = 113
    Height = 25
    Caption = #1055#1088#1086#1076#1072#1078
    TabOrder = 1
    OnClick = RadioButton2Click
  end
  object Edit1: TEdit
    Left = 72
    Top = 144
    Width = 113
    Height = 23
    Hint = #1042#1074#1077#1076#1110#1090#1100' '#1082#1091#1088#1089' '#1082#1091#1087#1110#1074#1083#1110
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    Text = '5'
  end
  object Edit2: TEdit
    Left = 432
    Top = 144
    Width = 113
    Height = 23
    Hint = #1042#1074#1077#1076#1110#1090#1100' '#1082#1091#1088#1089' '#1082#1091#1087#1110#1074#1083#1110
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    Text = '5,2'
  end
  object Edit3: TEdit
    Left = 72
    Top = 208
    Width = 113
    Height = 23
    Hint = #1042#1074#1077#1076#1110#1090#1100' '#1089#1091#1084#1091' '#1074' '#1076#1086#1083#1072#1088#1072#1093
    Color = clAquamarine
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
    Text = '20'
  end
  object Edit4: TEdit
    Left = 432
    Top = 208
    Width = 113
    Height = 23
    ReadOnly = True
    TabOrder = 5
  end
  object Button1: TButton
    Left = 72
    Top = 352
    Width = 113
    Height = 25
    Caption = #1054#1073#1095#1080#1089#1083#1080#1090#1080
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 432
    Top = 352
    Width = 113
    Height = 25
    Caption = #1042#1080#1093#1110#1076
    TabOrder = 7
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 256
    Top = 320
    Width = 113
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1080
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 280
    Top = 24
    Width = 78
    Height = 41
    Caption = #1056#1077#1078#1080#1084' 2'
    TabOrder = 9
    OnClick = Button4Click
  end
  object RadioGroup1: TRadioGroup
    Left = 224
    Top = 232
    Width = 185
    Height = 74
    Caption = #1047#1085#1072#1095#1077#1085#1085#1103
    Items.Strings = (
      #1052#1080#1083#1103
      #1052#1086#1088#1089#1100#1082#1072' '#1084#1080#1083#1103)
    TabOrder = 10
    Visible = False
  end
end
