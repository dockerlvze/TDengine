/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR                               1
#define TK_AND                              2
#define TK_UNION                            3
#define TK_ALL                              4
#define TK_MINUS                            5
#define TK_EXCEPT                           6
#define TK_INTERSECT                        7
#define TK_NK_BITAND                        8
#define TK_NK_BITOR                         9
#define TK_NK_LSHIFT                       10
#define TK_NK_RSHIFT                       11
#define TK_NK_PLUS                         12
#define TK_NK_MINUS                        13
#define TK_NK_STAR                         14
#define TK_NK_SLASH                        15
#define TK_NK_REM                          16
#define TK_NK_CONCAT                       17
#define TK_CREATE                          18
#define TK_DATABASE                        19
#define TK_IF                              20
#define TK_NOT                             21
#define TK_EXISTS                          22
#define TK_BLOCKS                          23
#define TK_NK_INTEGER                      24
#define TK_CACHE                           25
#define TK_CACHELAST                       26
#define TK_COMP                            27
#define TK_DAYS                            28
#define TK_FSYNC                           29
#define TK_MAXROWS                         30
#define TK_MINROWS                         31
#define TK_KEEP                            32
#define TK_PRECISION                       33
#define TK_NK_STRING                       34
#define TK_QUORUM                          35
#define TK_REPLICA                         36
#define TK_TTL                             37
#define TK_WAL                             38
#define TK_VGROUPS                         39
#define TK_SINGLESTABLE                    40
#define TK_STREAMMODE                      41
#define TK_USE                             42
#define TK_TABLE                           43
#define TK_NK_LP                           44
#define TK_NK_RP                           45
#define TK_NK_ID                           46
#define TK_NK_DOT                          47
#define TK_NK_COMMA                        48
#define TK_COMMENT                         49
#define TK_BOOL                            50
#define TK_TINYINT                         51
#define TK_SMALLINT                        52
#define TK_INT                             53
#define TK_INTEGER                         54
#define TK_BIGINT                          55
#define TK_FLOAT                           56
#define TK_DOUBLE                          57
#define TK_BINARY                          58
#define TK_TIMESTAMP                       59
#define TK_NCHAR                           60
#define TK_UNSIGNED                        61
#define TK_JSON                            62
#define TK_VARCHAR                         63
#define TK_MEDIUMBLOB                      64
#define TK_BLOB                            65
#define TK_VARBINARY                       66
#define TK_DECIMAL                         67
#define TK_SHOW                            68
#define TK_DATABASES                       69
#define TK_TABLES                          70
#define TK_NK_FLOAT                        71
#define TK_NK_BOOL                         72
#define TK_NK_VARIABLE                     73
#define TK_BETWEEN                         74
#define TK_IS                              75
#define TK_NULL                            76
#define TK_NK_LT                           77
#define TK_NK_GT                           78
#define TK_NK_LE                           79
#define TK_NK_GE                           80
#define TK_NK_NE                           81
#define TK_NK_EQ                           82
#define TK_LIKE                            83
#define TK_MATCH                           84
#define TK_NMATCH                          85
#define TK_IN                              86
#define TK_FROM                            87
#define TK_AS                              88
#define TK_JOIN                            89
#define TK_ON                              90
#define TK_INNER                           91
#define TK_SELECT                          92
#define TK_DISTINCT                        93
#define TK_WHERE                           94
#define TK_PARTITION                       95
#define TK_BY                              96
#define TK_SESSION                         97
#define TK_STATE_WINDOW                    98
#define TK_INTERVAL                        99
#define TK_SLIDING                        100
#define TK_FILL                           101
#define TK_VALUE                          102
#define TK_NONE                           103
#define TK_PREV                           104
#define TK_LINEAR                         105
#define TK_NEXT                           106
#define TK_GROUP                          107
#define TK_HAVING                         108
#define TK_ORDER                          109
#define TK_SLIMIT                         110
#define TK_SOFFSET                        111
#define TK_LIMIT                          112
#define TK_OFFSET                         113
#define TK_ASC                            114
#define TK_DESC                           115
#define TK_NULLS                          116
#define TK_FIRST                          117
#define TK_LAST                           118

#define TK_SPACE                          300
#define TK_NK_COMMENT                        301
#define TK_ILLEGAL                        302
#define TK_HEX                            303   // hex number  0x123
#define TK_OCT                            304   // oct number
#define TK_BIN                            305   // bin format data 0b111
#define TK_FILE                           306
#define TK_QUESTION                       307   // denoting the placeholder of "?",when invoking statement bind query

#define TK_NK_COLON                       500
#define TK_NK_BITNOT                      501
#define TK_INSERT                         502
#define TK_INTO                           503
#define TK_NOW                            504
#define TK_TAGS                           505
#define TK_USING                          506
#define TK_VALUES                         507
#define TK_IMPORT                         507
#define TK_SEMI                           508
#define TK_IPTOKEN                        509

#define TK_NIL                            65535

#endif /*_TD_COMMON_TOKEN_H_*/
