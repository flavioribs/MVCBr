import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { SobreComponent } from './sobre/sobre.component';
import { UsersComponent } from './users/users.component';

const viewsRoutes: Routes = [
  { path: 'sobre', component: SobreComponent },
  { path: 'users', component: UsersComponent }
];

export const ViewsRoutesModule = RouterModule.forChild(viewsRoutes);

