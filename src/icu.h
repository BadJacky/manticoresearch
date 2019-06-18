//
// Copyright (c) 2017-2019, Manticore Software LTD (http://manticoresearch.com)
// Copyright (c) 2001-2016, Andrew Aksyonoff
// Copyright (c) 2008-2016, Sphinx Technologies Inc
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org/
//

#ifndef _icu_
#define _icu_

#include "sphinxstd.h"
#include "sphinxutils.h"

bool sphCheckConfigICU ( CSphIndexSettings & tSettings, CSphString & sError );
bool sphSpawnFilterICU ( ISphFieldFilterRefPtr_c & pFieldFilter, const CSphIndexSettings & m_tSettings, const CSphTokenizerSettings & tTokSettings, const char * szIndex, CSphString & sError );
void sphConfigureICU ( CSphConfigSection & hCommon );

#endif // _icu_