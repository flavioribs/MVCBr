PROGRAM ModuloModelExemplo;






  MVCBr.ApplicationController,
  MVCBr.Controller,
  Main.Controller in 'controller\Main.Controller.pas',
  Main.ViewModel.Interf in 'viewmodel\Main.ViewModel.Interf.pas',
  Main.ViewModel in 'viewmodel\Main.ViewModel.pas',
  MainView in 'view\MainView.pas' {MainView},
  Pessoas.ModuleModel in 'module\Pessoas.ModuleModel.pas' {PessoasModuleModel: TDataModule},
  Pessoas.ModuleModel.Interf in 'module\Pessoas.ModuleModel.Interf.pas';

{$R *.res}









