// Copyright (c) 2014 The Cryptocoin Revival Foundation
// Copyright (c) 2015-2020 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2020 The Rubix Project
// Copyright (c) 2020 The Rev project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RPCVELOCITY_H
#define RPCVELOCITY_H 1

#include "json/json_spirit_reader_template.h"
#include "json/json_spirit_writer_template.h"
#include "json/json_spirit_utils.h"
#include "velocity.h"

extern json_spirit::Value getvelocityinfo(const json_spirit::Array& params, bool fHelp);

#endif