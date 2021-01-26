/*------------------------------------------------------------------------------
 *
 * Copyright (c) 2011-2021, EURid vzw. All rights reserved.
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
 *------------------------------------------------------------------------------
 *
 */

#include "dnscore/dnscore-config.h"
#include "dnscore/digest.h"

#ifndef OPENSSL_NO_SHA512

static s32
digest_sha384_update(digest_s* ctx, const void* buffer, u32 size)
{
    return SHA384_Update(&ctx->ctx.sha384, buffer, size) - 1;
}

static s32
digest_sha384_final(digest_s* ctx)
{
    return SHA384_Final(ctx->digest, &ctx->ctx.sha384) - 1;
}

static s32 digest_sha384_final_copy_bytes(digest_s* ctx, void* buffer, u32 size)
{
    if(size >= SHA384_DIGEST_LENGTH)
    {
        return SHA384_Final(buffer, &ctx->ctx.sha384) - 1;
    }

    return BUFFER_WOULD_OVERFLOW;
}

static s32
digest_sha384_get_size(digest_s* ctx)
{
    (void)ctx;
    return SHA384_DIGEST_LENGTH;
}

static s32 digest_sha384_get_digest(digest_s* ctx, void **ptr)
{
    *ptr = &ctx->digest[0];

    return SHA384_DIGEST_LENGTH;
}

static const struct digest_vtbl sha384_vtbl =
{
    digest_sha384_update,
    digest_sha384_final,
    digest_sha384_final_copy_bytes,
    digest_sha384_get_size,
    digest_sha384_get_digest,
    "SHA384"
};

void
digest_sha384_init(digest_s *ctx)
{
    ctx->vtbl = &sha384_vtbl;
    SHA384_Init(&ctx->ctx.sha384);
}

#endif
