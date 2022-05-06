object PingPong: TPingPong
  Left = 246
  Top = 256
  Width = 548
  Height = 388
  Caption = 'PingPong'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Information: TMemo
    Left = 0
    Top = 0
    Width = 532
    Height = 349
    Align = alClient
    Color = clInactiveCaption
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Lines.Strings = (
      
        '                                              Witaj w grze PingP' +
        'ong!'
      ''
      'Lewy gracz steruje wciskaj'#261'c klawisze A oraz Z.'
      'Prawy gracz steruje strza'#322'kami g'#243'ra oraz d'#243#322'.'
      ''
      'Dla urozmaicenia zabawy:'
      
        'Kiedy odbijesz pi'#322'k'#281' na '#347'rodku paletki, k'#261't jej odbicia zmieni s' +
        'i'#281' '
      'a pi'#322'ka przyspieszy.'
      'Im d'#322'u'#380'ej odbijasz pi'#322'k'#281' tym szybciej si'#281' ona przemieszcza.'
      'Mo'#380'esz dowolnie zmienia'#263' pole gry.'
      ''
      'Mi'#322'ej zabawy :)')
    ParentFont = False
    TabOrder = 0
  end
  object ok: TButton
    Left = 152
    Top = 264
    Width = 193
    Height = 57
    Caption = 'OK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = okClick
  end
end
