/*------------------------------------------------------------------------------
 *
 * Copyright (c) 2011-2024, EURid vzw. All rights reserved.
 * The YADIFA TM software product is provided under the BSD 3-clause license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *        * Redistributions of source code must retain the above copyright
 *          notice, this list of conditions and the following disclaimer.
 *        * Redistributions in binary form must reproduce the above copyright
 *          notice, this list of conditions and the following disclaimer in the
 *          documentation and/or other materials provided with the distribution.
 *        * Neither the name of EURid nor the names of its contributors may be
 *          used to endorse or promote products derived from this software
 *          without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *----------------------------------------------------------------------------*/

/**-----------------------------------------------------------------------------
 * @defgroup error dnssec
 * @ingroup dnscore
 * @brief DNSSEC error codes
 *
 * @{
 *----------------------------------------------------------------------------*/

#ifndef _DNSSEC_ERROR_H
#define _DNSSEC_ERROR_H

#define DNSSEC_ERROR_BASE                       0x80050000
#define DNSSEC_ERROR_CODE(code_)                ((int32_t)(DNSSEC_ERROR_BASE + (code_)))

#define DNSSEC_ERROR_NOENGINE                   DNSSEC_ERROR_CODE(1)
#define DNSSEC_ERROR_INVALIDENGINE              DNSSEC_ERROR_CODE(2)
#define DNSSEC_ERROR_CANTPOOLTHREAD             DNSSEC_ERROR_CODE(4)

#define DNSSEC_ERROR_UNSUPPORTEDKEYALGORITHM    DNSSEC_ERROR_CODE(10)
#define DNSSEC_ERROR_UNSUPPORTEDDIGESTALGORITHM DNSSEC_ERROR_CODE(11)
#define DNSSEC_ERROR_FILE_FORMAT_VERSION        DNSSEC_ERROR_CODE(12)
#define DNSSEC_ERROR_EXPECTED_CLASS_IN          DNSSEC_ERROR_CODE(13)
#define DNSSEC_ERROR_EXPECTED_TYPE_DNSKEY       DNSSEC_ERROR_CODE(14)

#define DNSSEC_ERROR_DUPLICATEKEY               DNSSEC_ERROR_CODE(64)
#define DNSSEC_ERROR_INCOMPLETEKEY              DNSSEC_ERROR_CODE(65)
#define DNSSEC_ERROR_KEYSTOREPATHISTOOLONG      DNSSEC_ERROR_CODE(66)
#define DNSSEC_ERROR_UNABLETOCREATEKEYFILES     DNSSEC_ERROR_CODE(67)
#define DNSSEC_ERROR_KEYWRITEERROR              DNSSEC_ERROR_CODE(68)
#define DNSSEC_ERROR_BNISNULL                   DNSSEC_ERROR_CODE(69)
#define DNSSEC_ERROR_BNISBIGGERTHANBUFFER       DNSSEC_ERROR_CODE(70)
#define DNSSEC_ERROR_UNEXPECTEDKEYSIZE          DNSSEC_ERROR_CODE(71)
#define DNSSEC_ERROR_KEYISTOOBIG                DNSSEC_ERROR_CODE(72)
#define DNSSEC_ERROR_KEYRING_ALGOTAG_COLLISION  DNSSEC_ERROR_CODE(73)
#define DNSSEC_ERROR_KEYRING_KEY_IS_INVALID     DNSSEC_ERROR_CODE(74)
#define DNSSEC_ERROR_KEYRING_KEY_IS_NOT_PRIVATE DNSSEC_ERROR_CODE(75)
// #define DNSSEC_ERROR_KEY_INITIALISATION_FAILED DNSSEC_ERROR_CODE( 76)
#define DNSSEC_ERROR_KEY_GENERATION_FAILED      DNSSEC_ERROR_CODE(77)
#define DNSSEC_ERROR_NO_KEY_FOR_DOMAIN          DNSSEC_ERROR_CODE(78)
#define DNSSEC_ERROR_CANNOT_WRITE_NEW_FILE      DNSSEC_ERROR_CODE(79) // would overwrite
#define DNSSEC_ERROR_FIELD_NOT_HANDLED          DNSSEC_ERROR_CODE(80)
#define DNSSEC_ERROR_CANNOT_READ_KEY_FROM_RDATA DNSSEC_ERROR_CODE(81)

#define DNSSEC_ERROR_RSASIGNATUREFAILED         DNSSEC_ERROR_CODE(128)
#define DNSSEC_ERROR_DSASIGNATUREFAILED         DNSSEC_ERROR_CODE(129)
#define DNSSEC_ERROR_ECDSASIGNATUREFAILED       DNSSEC_ERROR_CODE(130)
#define DNSSEC_ERROR_EDDSASIGNATUREFAILED       DNSSEC_ERROR_CODE(131)
#define DNSSEC_ERROR_SIGNATUREFAILED            DNSSEC_ERROR_CODE(132)

// #define DNSSEC_ERROR_RSAVERIFICATIONFAILED		DNSSEC_ERROR_CODE(131)
// #define DNSSEC_ERROR_DSAVERIFICATIONFAILED		DNSSEC_ERROR_CODE(132)
// #define DNSSEC_ERROR_ECDSAVERIFICATIONFAILED	DNSSEC_ERROR_CODE(133)

#define DNSSEC_ERROR_NSEC3_INVALIDZONESTATE     DNSSEC_ERROR_CODE(256)
#define DNSSEC_ERROR_NSEC3_LABELTODIGESTFAILED  DNSSEC_ERROR_CODE(257)
#define DNSSEC_ERROR_NSEC3_DIGESTORIGINOVERFLOW DNSSEC_ERROR_CODE(258)
#define DNSSEC_ERROR_NSEC3_LABELNOTFOUND        DNSSEC_ERROR_CODE(259)

#define DNSSEC_ERROR_NSEC_INVALIDZONESTATE      DNSSEC_ERROR_CODE(384)

#define DNSSEC_ERROR_RRSIG_NOENGINE             DNSSEC_ERROR_CODE(512)
#define DNSSEC_ERROR_RRSIG_NOZONEKEYS           DNSSEC_ERROR_CODE(513)
#define DNSSEC_ERROR_RRSIG_NOUSABLEKEYS         DNSSEC_ERROR_CODE(514)
#define DNSSEC_ERROR_RRSIG_NOSOA                DNSSEC_ERROR_CODE(515)
#define DNSSEC_ERROR_RRSIG_NOSIGNINGKEY         DNSSEC_ERROR_CODE(516)
#define DNSSEC_ERROR_RRSIG_UNSUPPORTEDRECORD    DNSSEC_ERROR_CODE(517)

#endif // _DNSSEC_ERROR_H
