/*
 * Copyright (C) 2009 Coen Bijlsma
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "StringTokenizer.h"

Array<String> URI::_reserved(9);
URI::_reserved[0] = String(":");
URI::_reserved

URI::URI(String uri) : _uri(uri)
{
	StringTokenizer st(_uri, URI_SCHEME_SEPARATOR);
	
	assert( st.count() >= 2 );
	_scheme = st.next();
}

String* URI::getScheme() const
{
	return *_scheme;
}
