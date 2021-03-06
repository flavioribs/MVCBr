builderSubClassModel =
  'Unit %UnitIdent;                                               ' + #13#10 +
  '                                                               ' + #13#10 +
  'interface                                                      ' + #13#10 +
  '                                                               ' + #13#10 +
  'uses System.Classes,System.SysUtils,                           ' + #13#10 +
  '     MVCBr.BuilderModel,                                       ' + #13#10 +
  '     MVCBr.Patterns.Builder, System.RTTI;                      ' + #13#10 +
  '                                                               ' + #13#10 +
  'Type                                                           ' + #13#10 +
  '                                                               ' + #13#10 +
  '   T%FormIdentBuilt = class(TBuiltObjectFactory)     ' + #13#10 +
  '   public                                                      ' + #13#10 +
  '     [weak]                                                    ' + #13#10 +
  '     function Execute(AParam: TValue)                          ' + #13#10 +
  '      : TBuiltResult; override;                                ' + #13#10 +
  '   end;                                                        ' + #13#10 +
  '                                                               ' + #13#10 +
  'Implementation                                                 ' + #13#10 +
  '                                                               ' + #13#10 +
  '  //sample to insert into Builder CreateSubClasses             ' + #13#10 +
  '  //add( ''command'', T%FormIdentBuilt);                       ' + #13#10 +
  '                                                               ' + #13#10 +
  'function T%FormIdentBuilt.Execute(AParam: TValue)              ' + #13#10 +
  '   : TBuiltResult;                                             ' + #13#10 +
  'begin                                                          ' + #13#10 +
  '                                                               ' + #13#10 +
  '    /// implements here                                        ' + #13#10 +
  '                                                               ' + #13#10 +
  '                                                               ' + #13#10 +
  '                                                               ' + #13#10 +
  'end;                                                           ' + #13#10 +
  '                                                               ' + #13#10 +
  'end. ' + #13#10;

builderSubClassInterf =
  'Unit %UnitIdent;                                              ' + #13#10 +
  '                                                              ' + #13#10 +
  'interface                                                     ' + #13#10 +
  '                                                              ' + #13#10 +
  'Uses MVCBr.Interf,MVCBr.Model,MVCBr.BuilderModel,             ' + #13#10 +
  'MVCBr.Patterns.Builder,System.RTTI;                           ' + #13#10 +
  '                                                              ' + #13#10 +
  'Type                                                          ' + #13#10 +
  '                                                              ' + #13#10 +
  '  I%FormIdentBuilt = interface                                ' + #13#10 +
  '         [''%guid'']                                          ' + #13#10 +
  '  end;                                                        ' + #13#10 +
  '                                                              ' + #13#10 +
  '                                                              ' + #13#10 +
  'Implementation                                                ' + #13#10 +
  'end.                                                          ' + #13#10;

builderLazySubClassModel =
  'Unit %UnitIdent;                                                ' + #13#10 +
  '                                                                ' + #13#10 +
  'interface                                                       ' + #13#10 +
  'uses                                                            ' + #13#10 +
  '   System.SysUtils,                                             ' + #13#10 +
  '   {$IFDEF FMX} FMX.Forms,                                      ' + #13#10 +
  '   {$ELSE} VCL.Forms, {$ENDIF}                                  ' + #13#10 +
  '  System.Classes, MVCBr.Interf,  ' + #13#10 +
  '  %MdlInterf,                                                   ' + #13#10 +
  '  System.RTTI;                                                  ' + #13#10 +
  '                                                                ' + #13#10 +
  'Type                                                            ' + #13#10 +
  '                                                                ' + #13#10 +
  ' T%FormIdentBuilt = class(TInterfacedObject,I%FormIdentBuilt)' + #13#10 +
  ' protected                                ' + #13#10 +
  ' public                                               ' + #13#10 + #13#10 +
  '   class function New:I%FormIdentBuilt;                         ' + #13#10 +
  ' end;                                                           ' + #13#10 +
  '                                                                ' + #13#10 +
  'Implementation                                                  ' + #13#10 +
  '                                                                ' + #13#10 +
  '/// Lazy.add( command, T%FormIdentBuilt);                ' + #13#10 +
  '                                                                ' + #13#10 +
  '   class function T%FormIdentBuilt.New:I%FormIdentBuilt;        ' + #13#10 +
  '   begin                                                        ' + #13#10 +
  '      result :=  T%FormIdentBuilt.create;                       ' + #13#10 +
  '   end;                                                         ' + #13#10 +
  '                                                                ' + #13#10 +
  'end.                   ' + #13#10 +
  '                                                                ' + #13#10;

builderModelInterf =
  'Unit %UnitIdent;                                              ' + #13#10 +
  '                                                              ' + #13#10 +
  'interface                                                     ' + #13#10 +
  '                                                              ' + #13#10 +
  'Uses MVCBr.Interf,MVCBr.Model,MVCBr.BuilderModel,             ' + #13#10 +
  'MVCBr.Patterns.Builder,System.RTTI;                           ' + #13#10 +
  '                                                              ' + #13#10 +
  'Type                                                          ' + #13#10 +
  '                                                              ' + #13#10 +
  '  I%FormIdentBuilderModel = interface(IBuilderModel)          ' + #13#10 +
  '         [''%guid'']                                          ' + #13#10 +
  '  end;                                                        ' + #13#10 +
  '                                                              ' + #13#10 +
  '  /// strong typed commands                                   ' + #13#10 +
  '  /// put here yours builder commands                         ' + #13#10 +
  '  T%FormIdentModelCommands = record                           ' + #13#10 +
  '    const                                                     ' + #13#10 +
  '       cmd_default = ''default'';                             ' + #13#10 +
  '  end;                                                        ' + #13#10 +
  '                                                              ' + #13#10 +
  'Implementation                                                ' + #13#10 +
  'end.                                                          ' + #13#10;

builderClass =
  'Unit %UnitIdent;                                                ' + #13#10 +
  '                                                                ' + #13#10 +
  'interface                                                       ' + #13#10 +
  'uses                                                            ' + #13#10 +
  '   System.SysUtils,                                             ' + #13#10 +
  '   {$IFDEF FMX} FMX.Forms,                                      ' + #13#10 +
  '   {$ELSE} VCL.Forms, {$ENDIF}                                  ' + #13#10 +
  '  System.Classes, MVCBr.Interf, MVCBr.Model,MVCBr.BuilderModel, ' + #13#10 +
  '  %MdlInterf,                                                   ' + #13#10 +
  '  MVCBr.Patterns.Builder,  MVCBr.Controller,                    ' + #13#10 +
  '  System.RTTI;                                                  ' + #13#10 +
  'Type                                                            ' + #13#10 +
  '                                                                ' + #13#10 +
  ' T%FormIdentBuilderModel = class(TBuilderModelFactory,               ' +
  #13#10 + '                I%FormIdentBuilderModel, IThisAs<T%FormIdentBuilderModel>)'
  + #13#10 + ' protected                                             ' + #13#10
  + '    procedure CreateSubClasses; override;                       ' + #13#10
  + ' public                                                         ' + #13#10
  + '    class function new(): I%FormIdentBuilderModel; overload;         ' +
  #13#10 + '    class function new(const AController: IController):         ' +
  #13#10 + 'I%FormIdentBuilderModel; overload;                                   '
  + #13#10 +
  '    function ThisAs: T%FormIdentBuilderModel;                        ' +
  #13#10 + ' // implementaçoes                                              ' +
  #13#10 + '  end;                                                          ' +
  #13#10 + '                                                                ' +
  #13#10 + 'Implementation                                                  ' +
  #13#10 + '                                                                ' +
  #13#10 + '//uses Builder.Model.Classe1;                                   ' +
  #13#10 + '                                                                ' +
  #13#10 + '/// Add Sub-Classes of Builder                                  ' +
  #13#10 + '                                                                ' +
  #13#10 + 'procedure T%FormIdentBuilderModel.CreateSubClasses;                  '
  + #13#10 + 'begin                                                           '
  + #13#10 + '/// Add Sub-Classes here                                        '
  + #13#10 +
  '//FBuilder.Add(T%FormIdentModelCommands.cmd_default, T%FormIdentBuilt);' +
  #13#10 + 'end;                                                            ' +
  #13#10 + '                                                       ' + #13#10 +
  'function T%FormIdentBuilderModel.ThisAs: T%FormIdentBuilderModel;         ' +
  #13#10 + 'begin                                                           ' +
  #13#10 + '  result := self;                                               ' +
  #13#10 + 'end;                                                            ' +
  #13#10 + '                                                                ' +
  #13#10 + 'class function T%FormIdentBuilderModel.new(): I%FormIdentBuilderModel;    '
  + #13#10 + 'begin                                                           '
  + #13#10 + '  result := new(nil);                                           '
  + #13#10 + ' end;                                                           '
  + #13#10 + '                                                                '
  + #13#10 +
  'class function T%FormIdentBuilderModel.new(const AController:IController)' +
  #13#10 + '             : I%FormIdentBuilderModel;                     ' +
  #13#10 + 'begin                                                           ' +
  #13#10 + '  result := T%FormIdentBuilderModel.Create;                          '
  + #13#10 + '  result.Controller(AController);                               '
  + #13#10 + 'end;                                                            '
  + #13#10 + '                                                                '
  + #13#10 + 'Initialization                                                  '
  + #13#10 + '                                                                '
  + #13#10 +
  ' TMVCRegister.RegisterType<I%FormIdentBuilderModel, T%FormIdentBuilderModel>'
  + #13#10 +
  '  (T%FormIdentBuilderModel.classname, true);                       ' + #13#10
  + '                                                                ' + #13#10
  + 'end.             ';
