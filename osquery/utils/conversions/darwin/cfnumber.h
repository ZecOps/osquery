/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

#pragma once

#include <string>
#include <CoreFoundation/CoreFoundation.h>

namespace osquery {

/**
 * @brief Convert a CFNumberRef to a std::string.
 */
std::string stringFromCFNumber(const CFDataRef& cf_number);
std::string stringFromCFNumber(const CFDataRef& cf_number, CFNumberType type);

}
