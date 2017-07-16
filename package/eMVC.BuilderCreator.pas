unit eMVC.BuilderCreator;

{ ********************************************************************** }
{ Copyright 2005 Reserved by Eazisoft.com }
{ File Name: ModelCreator.pas }
{ Author: Larry Le }
{ Description:  Model Creator }
{ }
{ History: }
{ - 1.0, 19 May 2006 }
{ First version }
{ }
{ Email: linfengle@gmail.com }
{ }
{ The contents of this file are subject to the Mozilla Public License }
{ Version 1.1 (the "License"); you may not use this file except in }
{ compliance with the License. You may obtain a copy of the License at }
{ http://www.mozilla.org/MPL/ }
{ }
{ Software distributed under the License is distributed on an "AS IS" }
{ basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See }
{ the License for the specific language governing rights and }
{ limitations under the License. }
{ }
{ The Original Code is written in Delphi. }
{ }
{ The Initial Developer of the Original Code is Larry Le. }
{ Copyright (C) eazisoft.com. All Rights Reserved. }
{ }
{ ********************************************************************** }

interface

uses
  Windows, SysUtils,
  eMVC.ViewCreator,
  eMVC.FileCreator,
  ToolsApi,
  eMVC.OTAUtilities,
  eMVC.BaseCreator;

const
{$I .\inc\BuilderModel.inc}
type

  TBuilderCreator = class(TBaseCreator)
  private
    FisInterf: boolean;
    FUnitIdent: string;
    procedure SetisInterf(const Value: boolean);
  public
    constructor Create(const APath: string = ''; ABaseName: string = ''; AUnNamed: boolean = true); override;
    function GetImplFileName: string; override;
    function NewImplSource(const ModuleIdent, FormIdent, AncestorIdent: string): IOTAFile; override;
    property isInterf: boolean read FisInterf write SetisInterf;
  end;

implementation

{ TModelCreator }

constructor TBuilderCreator.Create(const APath: string = ''; ABaseName: string = ''; AUnNamed: boolean = true);
begin
  inherited Create(APath, ABaseName, AUnNamed);
  self.SetAncestorName('builder');
end;

function TBuilderCreator.GetImplFileName: string;
begin
  FUnitIdent := getBaseName + '.Builder';
  if isInterf then
    FUnitIdent := getBaseName + '.Builder.Interf';

  result := self.getpath + FUnitIdent + '.pas';

end;

function TBuilderCreator.NewImplSource(const ModuleIdent, FormIdent, AncestorIdent: string): IOTAFile;
var
  fc: TFileCreator;
begin
  debug('TBuilderCreator.NewImplSource: ');
  if isInterf then
    fc := TFileCreator.New(ModuleIdent, FormIdent, AncestorIdent,
      function: string
      begin
        result := builderModelInterf;
      end)
  else
    fc := TFileCreator.New(ModuleIdent, FormIdent, AncestorIdent,
      function: string
      begin
        result := builderClass;
      end);

  fc.Templates.assign(Templates);
  fc.Templates.Values['%MdlInterf'] := getBaseName + '.Builder.Interf';
  fc.Templates.Values['%UnitIdent'] := FUnitIdent;
  result := fc;
end;

procedure TBuilderCreator.SetisInterf(const Value: boolean);
begin
  FisInterf := Value;
end;

end.
