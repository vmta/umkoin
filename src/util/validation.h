// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef UMKOIN_UTIL_VALIDATION_H
#define UMKOIN_UTIL_VALIDATION_H

#include <string>

class ValidationState;

/** Convert ValidationState to a human-readable message for logging */
std::string FormatStateMessage(const ValidationState &state);

#endif // UMKOIN_UTIL_VALIDATION_H
