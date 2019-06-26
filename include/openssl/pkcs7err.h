/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_PKCS7ERR_H
# define HEADER_PKCS7ERR_H

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_PKCS7_strings(void);

/*
 * PKCS7 function codes.
 */
# define PKCS7_F_DO_PKCS7_SIGNED_ATTRIB                   136
# define PKCS7_F_PKCS7_ADD0_ATTRIB_SIGNING_TIME           135
# define PKCS7_F_PKCS7_ADD_ATTRIB_SMIMECAP                118
# define PKCS7_F_PKCS7_ADD_CERTIFICATE                    100
# define PKCS7_F_PKCS7_ADD_CRL                            101
# define PKCS7_F_PKCS7_ADD_RECIPIENT_INFO                 102
# define PKCS7_F_PKCS7_ADD_SIGNATURE                      131
# define PKCS7_F_PKCS7_ADD_SIGNER                         103
# define PKCS7_F_PKCS7_BIO_ADD_DIGEST                     125
# define PKCS7_F_PKCS7_COPY_EXISTING_DIGEST               138
# define PKCS7_F_PKCS7_CTRL                               104
# define PKCS7_F_PKCS7_DATADECODE                         112
# define PKCS7_F_PKCS7_DATAFINAL                          128
# define PKCS7_F_PKCS7_DATAINIT                           105
# define PKCS7_F_PKCS7_DATAVERIFY                         107
# define PKCS7_F_PKCS7_DECRYPT                            114
# define PKCS7_F_PKCS7_DECRYPT_RINFO                      133
# define PKCS7_F_PKCS7_ENCODE_RINFO                       132
# define PKCS7_F_PKCS7_ENCRYPT                            115
# define PKCS7_F_PKCS7_FINAL                              134
# define PKCS7_F_PKCS7_FIND_DIGEST                        127
# define PKCS7_F_PKCS7_GET0_SIGNERS                       124
# define PKCS7_F_PKCS7_RECIP_INFO_SET                     130
# define PKCS7_F_PKCS7_SET_CIPHER                         108
# define PKCS7_F_PKCS7_SET_CONTENT                        109
# define PKCS7_F_PKCS7_SET_DIGEST                         126
# define PKCS7_F_PKCS7_SET_TYPE                           110
# define PKCS7_F_PKCS7_SIGN                               116
# define PKCS7_F_PKCS7_SIGNATUREVERIFY                    113
# define PKCS7_F_PKCS7_SIGNER_INFO_SET                    129
# define PKCS7_F_PKCS7_SIGNER_INFO_SIGN                   139
# define PKCS7_F_PKCS7_SIGN_ADD_SIGNER                    137
# define PKCS7_F_PKCS7_SIMPLE_SMIMECAP                    119
# define PKCS7_F_PKCS7_VERIFY                             117

/*
 * PKCS7 reason codes.
 */
# define PKCS7_R_CERTIFICATE_VERIFY_ERROR                 117
# define PKCS7_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER          144
# define PKCS7_R_CIPHER_NOT_INITIALIZED                   116
# define PKCS7_R_CONTENT_AND_DATA_PRESENT                 118
# define PKCS7_R_CTRL_ERROR                               152
# define PKCS7_R_DECRYPT_ERROR                            119
# define PKCS7_R_DIGEST_FAILURE                           101
# define PKCS7_R_ENCRYPTION_CTRL_FAILURE                  149
# define PKCS7_R_ENCRYPTION_NOT_SUPPORTED_FOR_THIS_KEY_TYPE 150
# define PKCS7_R_ERROR_ADDING_RECIPIENT                   120
# define PKCS7_R_ERROR_SETTING_CIPHER                     121
# define PKCS7_R_INVALID_NULL_POINTER                     143
# define PKCS7_R_INVALID_SIGNED_DATA_TYPE                 155
# define PKCS7_R_NO_CONTENT                               122
# define PKCS7_R_NO_DEFAULT_DIGEST                        151
# define PKCS7_R_NO_MATCHING_DIGEST_TYPE_FOUND            154
# define PKCS7_R_NO_RECIPIENT_MATCHES_CERTIFICATE         115
# define PKCS7_R_NO_SIGNATURES_ON_DATA                    123
# define PKCS7_R_NO_SIGNERS                               142
# define PKCS7_R_OPERATION_NOT_SUPPORTED_ON_THIS_TYPE     104
# define PKCS7_R_PKCS7_ADD_SIGNATURE_ERROR                124
# define PKCS7_R_PKCS7_ADD_SIGNER_ERROR                   153
# define PKCS7_R_PKCS7_DATASIGN                           145
# define PKCS7_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE   127
# define PKCS7_R_SIGNATURE_FAILURE                        105
# define PKCS7_R_SIGNER_CERTIFICATE_NOT_FOUND             128
# define PKCS7_R_SIGNING_CTRL_FAILURE                     147
# define PKCS7_R_SIGNING_NOT_SUPPORTED_FOR_THIS_KEY_TYPE  148
# define PKCS7_R_SMIME_TEXT_ERROR                         129
# define PKCS7_R_UNABLE_TO_FIND_CERTIFICATE               106
# define PKCS7_R_UNABLE_TO_FIND_MEM_BIO                   107
# define PKCS7_R_UNABLE_TO_FIND_MESSAGE_DIGEST            108
# define PKCS7_R_UNKNOWN_DIGEST_TYPE                      109
# define PKCS7_R_UNKNOWN_OPERATION                        110
# define PKCS7_R_UNSUPPORTED_CIPHER_TYPE                  111
# define PKCS7_R_UNSUPPORTED_CONTENT_TYPE                 112
# define PKCS7_R_WRONG_CONTENT_TYPE                       113
# define PKCS7_R_WRONG_PKCS7_TYPE                         114

#endif
