//
// Copyright (C) 2006-2009  by the original authors of Galaxy
// and all its contributors ("Galaxy.org").
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

/*!
  \file projectwindow.h
  \ingroup Ui
  \brief This file contains
  - class Ui::ProjectWindow declaration
  \version 0.0.1
  \author Cheng Liang <changliang.soft@gmail.com>
  \date 2009-9-5 Created.
 */

#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QMdiSubWindow>

class QPaintEvent;
class QSize;
class QAction;

namespace Core {
    class Project;
};

namespace Ui {

class ProjectView;
class ProjectScene;

class ProjectWindow : public QMdiSubWindow
{
public:
    ProjectWindow(Core::Project *pro, QWidget *parent = 0);
    ~ProjectWindow() {}
    QSize sizeHint() const;

private:
    Core::Project *project;
    ProjectView *view;
    ProjectScene *scene;
    QWidget *statusBar;

}; // end of class ProjectWindow

} // end of namespace

#endif // PROJECTWINDOW_H
