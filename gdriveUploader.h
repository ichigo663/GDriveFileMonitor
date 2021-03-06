/*
 * GDriveFileMonitor.
 * Copyright (C) 2015  Antonio Cardace.
 *
 * This file is part of GDriveFileMonitor.
 *
 * Wavetrack is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Wavetrack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

/*
 * this a set of functions for uploading a file
 * into a Google Drive space
 */

#ifndef __GDRIVEUPLOADER__
#define __GDRIVEUPLOADER__

#define BASE_URL "https://www.googleapis.com/drive/v2"
#define UPLOAD_METADATA "files"

#define CREATE_FOLDER_JSON "{'title': 'KeePassXDB','parents': ['root'],'mimeType': 'application/vnd.google-apps.folder'}"
#define CONTENT_TYPE "Content-type: application/json"
#define AUTH_BEARER "Authorization: Bearer "



#endif
