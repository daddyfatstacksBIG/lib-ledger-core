/*
 *
 * ProxyBackend.cpp
 * ledger-core
 *
 * Created by Pierre Pollastri on 13/11/2018.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include "ProxyBackend.hpp"
#include <database/proxy_backend/soci-proxy.h>

namespace ledger {
    namespace core {

        ProxyBackend::ProxyBackend(const std::shared_ptr<ledger::core::api::DatabaseEngine> &engine) :
            DatabaseBackend(), _engine(engine), _factory(soci::factory_proxy(engine)) {
        }

        int32_t ProxyBackend::getConnectionPoolSize() {
            return _engine->getPoolSize();
        }

        void ProxyBackend::init(const std::shared_ptr<api::PathResolver> &resolver, const std::string &dbName,
                                soci::session &session) {
            session.open(*_factory, dbName);
        }

        ProxyBackend::~ProxyBackend() {
            delete _factory;
        }
    }
}