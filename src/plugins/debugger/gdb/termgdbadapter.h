/**************************************************************************
**
** This file is part of Qt Creator
**
** Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
**
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** Commercial Usage
**
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://qt.nokia.com/contact.
**
**************************************************************************/

#ifndef DEBUGGER_TERMGDBADAPTER_H
#define DEBUGGER_TERMGDBADAPTER_H

#include "abstractgdbadapter.h"

#include "abstractgdbprocess.h"

#include <consoleprocess.h>

namespace Debugger {
namespace Internal {

///////////////////////////////////////////////////////////////////////
//
// TermGdbAdapter
//
///////////////////////////////////////////////////////////////////////

class TermGdbAdapter : public AbstractGdbAdapter
{
    Q_OBJECT

public:
    TermGdbAdapter(GdbEngine *engine, QObject *parent = 0);
    ~TermGdbAdapter();

    virtual DumperHandling dumperHandling() const;

    void startAdapter();
    void startInferior();
    void startInferiorPhase2();
    void interruptInferior();
    AbstractGdbProcess *gdbProc() { return &m_gdbProc; }

private:
    void handleStubAttached(const GdbResponse &response);
#ifdef Q_OS_LINUX
    void handleEntryPoint(const GdbResponse &response);
#endif

    Q_SLOT void handleInferiorStarted();
    Q_SLOT void stubExited();
    Q_SLOT void stubMessage(const QString &msg, bool isError);

    Utils::ConsoleProcess m_stubProc;
    LocalGdbProcess m_gdbProc;
};

} // namespace Internal
} // namespace Debugger

#endif // DEBUGGER_TERMGDBADAPTER_H
