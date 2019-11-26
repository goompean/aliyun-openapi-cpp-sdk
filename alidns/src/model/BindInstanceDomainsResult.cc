/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/alidns/model/BindInstanceDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

BindInstanceDomainsResult::BindInstanceDomainsResult() :
	ServiceResult()
{}

BindInstanceDomainsResult::BindInstanceDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindInstanceDomainsResult::~BindInstanceDomainsResult()
{}

void BindInstanceDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());

}

int BindInstanceDomainsResult::getFailedCount()const
{
	return failedCount_;
}

int BindInstanceDomainsResult::getSuccessCount()const
{
	return successCount_;
}

