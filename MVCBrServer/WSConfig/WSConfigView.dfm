object WSConfigView: TWSConfigView
  Left = 0
  Top = 0
  Caption = 'Configura'#231#245'es'
  ClientHeight = 372
  ClientWidth = 376
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 24
    Top = 111
    Width = 329
    Height = 210
    Caption = 'Database Config'
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 26
      Width = 29
      Height = 13
      Caption = 'Driver'
    end
    object Label2: TLabel
      Left = 22
      Top = 53
      Width = 32
      Height = 13
      Caption = 'Server'
    end
    object Label3: TLabel
      Left = 22
      Top = 78
      Width = 46
      Height = 13
      Caption = 'Database'
    end
    object Label4: TLabel
      Left = 22
      Top = 107
      Width = 36
      Height = 13
      Caption = 'Usu'#225'rio'
    end
    object Label5: TLabel
      Left = 23
      Top = 134
      Width = 30
      Height = 13
      Caption = 'Senha'
    end
    object Label7: TLabel
      Left = 23
      Top = 161
      Width = 47
      Height = 13
      Caption = 'VendorLib'
    end
    object driverid: TComboBox
      Left = 72
      Top = 24
      Width = 137
      Height = 21
      TabOrder = 0
      Text = 'FB'
      TextHint = 'Driver para o fabricante do Banco de Dados'
      Items.Strings = (
        'FB'
        'MySQL')
    end
    object Server: TEdit
      Left = 72
      Top = 51
      Width = 225
      Height = 21
      TabOrder = 1
      Text = 'localhost'
      TextHint = 'Endere'#231'o do Servidor de Dados'
    end
    object Database: TEdit
      Left = 72
      Top = 77
      Width = 225
      Height = 21
      TabOrder = 2
      Text = 'mvcbr'
      TextHint = 'Local/Identifica'#231#227'o do banco de dados'
    end
    object user_name: TEdit
      Left = 72
      Top = 104
      Width = 153
      Height = 21
      TabOrder = 3
      Text = 'sysdba'
      TextHint = 'Usu'#225'rio de login no banco da dados'
    end
    object Password: TEdit
      Left = 72
      Top = 131
      Width = 121
      Height = 21
      PasswordChar = '*'
      TabOrder = 4
      Text = 'masterkey'
      TextHint = 'Senha de acesso'
    end
    object vendorlib: TEdit
      Left = 73
      Top = 156
      Width = 224
      Height = 21
      TabOrder = 5
    end
  end
  object Button1: TButton
    Left = 278
    Top = 327
    Width = 75
    Height = 25
    Caption = 'Salvar'
    TabOrder = 1
    OnClick = Button1Click
  end
  object GroupBox2: TGroupBox
    Left = 24
    Top = 8
    Width = 329
    Height = 97
    Caption = 'Server Config'
    TabOrder = 2
    object Label6: TLabel
      Left = 32
      Top = 32
      Width = 20
      Height = 13
      Caption = 'Port'
    end
    object WSPort: TEdit
      Left = 64
      Top = 29
      Width = 65
      Height = 21
      TabOrder = 0
      Text = '8080'
    end
  end
end
