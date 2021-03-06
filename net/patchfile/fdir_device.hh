/*
 * This file is open source software, licensed to you under the terms
 * of the Apache License, Version 2.0 (the "License").  See the NOTICE file
 * distributed with this work for additional information regarding copyright
 * ownership.  You may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
/*
 * Copyright (C) 2014 Cloudius Systems, Ltd.
 */

#ifdef HAVE_DPDK

#ifndef _FDIR_DEVICE_HH
#define _FDIR_DEVICE_HH

#include <memory>
#include "../net.hh"
#include "core/sstring.hh"

namespace seastar {

std::unique_ptr<net::device> create_fdir_device(
                                    uint8_t port_idx = 0,
                                    uint8_t num_queues = 1,
                                    bool use_lro = true,
                                    bool enable_fc = true);
}

#endif // _FDIR_DEVICE_HH

#endif // HAVE_DPDK
