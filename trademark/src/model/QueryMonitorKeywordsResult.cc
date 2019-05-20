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

#include <alibabacloud/trademark/model/QueryMonitorKeywordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryMonitorKeywordsResult::QueryMonitorKeywordsResult() :
	ServiceResult()
{}

QueryMonitorKeywordsResult::QueryMonitorKeywordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMonitorKeywordsResult::~QueryMonitorKeywordsResult()
{}

void QueryMonitorKeywordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Keywords"];
	for (const auto &item : allData)
		data_.push_back(item.asString());

}

std::vector<std::string> QueryMonitorKeywordsResult::getData()const
{
	return data_;
}

