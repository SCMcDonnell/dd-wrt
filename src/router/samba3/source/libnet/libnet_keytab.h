/*
 *  Unix SMB/CIFS implementation.
 *  libnet Support
 *  Copyright (C) Guenther Deschner 2008
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include "smb_krb5.h"

#ifdef HAVE_KRB5

struct libnet_keytab_entry {
	const char *name;
	const char *principal;
	DATA_BLOB password;
	uint32_t kvno;
	krb5_enctype enctype;
};

struct libnet_keytab_context {
	krb5_context context;
	krb5_keytab keytab;
	const char *keytab_name;
	ADS_STRUCT *ads;
	const char *dns_domain_name;
	uint8_t zero_buf[16];
	uint32_t count;
	struct libnet_keytab_entry *entries;
	bool clean_old_entries;
};

#endif /* HAVE_KRB5 */
