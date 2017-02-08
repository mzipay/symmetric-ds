/**
 * Licensed to JumpMind Inc under one or more contributor
 * license agreements.  See the NOTICE file distributed
 * with this work for additional information regarding
 * copyright ownership.  JumpMind Inc licenses this file
 * to you under the GNU General Public License, version 3.0 (GPLv3)
 * (the "License"); you may not use this file except in compliance
 * with the License.
 *
 * You should have received a copy of the GNU General Public License,
 * version 3.0 (GPLv3) along with this library; if not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef SYM_FILEENTRY_H_
#define SYM_FILEENTRY_H_

#include <stdlib.h>
#include <stdint.h>
#include "util/Date.h"


typedef struct SymFileEntry {
    __uint8_t fileType; // DT_DIR, DR_REG, etc.
    char *directory;
    char *fileName;
    long fileSize;
    SymDate *fileModificationTime;
    long crc32Checksum;
    void (*destroy)(struct SymFileEntry *this);
} SymFileEntry;

SymFileEntry * SymFileEntry_new(SymFileEntry *this);

#endif
